#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "locations.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTimer>
#include <QDebug>

QString defaultFilePath()
{
    return QStringLiteral("C:/Program Files (x86)/Grinding Gear Games/Path of Exile 2/logs/Client.txt");
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),
    currentLocation(""), currentIndex(0), imageLabel(nullptr),
    currentFilePath(""), lastReadPosition(0)
{
    ui->setupUi(this);

    // Настройка QLabel для отображения изображений
    imageLabel = ui->imageLabel;
    imageLabel->setFixedSize(1000, 1000); // Устанавливаем фиксированный размер
    imageLabel->setScaledContents(true); // Масштабируем изображение под размер QLabel

    // Подключаем кнопки к слотам
    connect(ui->btnPrevious, &QPushButton::clicked, this, &MainWindow::showPreviousImage);
    connect(ui->btnNext, &QPushButton::clicked, this, &MainWindow::showNextImage);

    // Устанавливаем заголовок окна
    setWindowTitle("Path of Exile 2 Campaign Helper");

    // Подключение кнопки к слоту
    connect(ui->chooseFileButton, &QPushButton::clicked, this, &MainWindow::onChooseFileClicked);
    // Подключаем изменение текста в QLineEdit к слоту
    connect(ui->filePathLineEdit, &QLineEdit::editingFinished, this, &MainWindow::onFilePathChanged);

    // Устанавливаем дефолтный путь
    ui->filePathLineEdit->setText(defaultFilePath());

    // Если файл существует, начинаем его мониторинг
    if (QFile::exists(defaultFilePath())) {
        initializeFileMonitoring(defaultFilePath());
    }

    // Запускаем таймер для проверки изменений в файле
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::checkFileForChanges);
    timer->start(1000);

    // Загружаем изображения для начальной локации
    loadImagesForLocation(currentLocation);
}

MainWindow::~MainWindow()
{
    if (!currentFilePath.isEmpty()) {
        fileWatcher.removePath(currentFilePath);
    }
    delete ui;
}

void MainWindow::onChooseFileClicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Выберите файл", "", "Text Files (*.txt)");
    if (filePath.isEmpty()) {
        return;
    }

    ui->filePathLineEdit->setText(filePath);
    initializeFileMonitoring(filePath);
}

void MainWindow::onFilePathChanged()
{
    QString filePath = ui->filePathLineEdit->text().trimmed();
    if (filePath.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Путь к файлу не указан.");
        return;
    }

    if (!QFile::exists(filePath)) {
        QMessageBox::warning(this, "Ошибка", "Файл не существует.");
        return;
    }

    initializeFileMonitoring(filePath);
}

void MainWindow::initializeFileMonitoring(const QString &filePath)
{
    if (!currentFilePath.isEmpty()) {
        fileWatcher.removePath(currentFilePath);
    }

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл.");
        return;
    }

    currentFilePath = filePath;
    lastReadPosition = file.size();
    file.close();

    ui->locationNameLabel->clear();
    fileWatcher.addPath(filePath);
}

void MainWindow::checkFileForChanges()
{
    if (currentFilePath.isEmpty()) {
        return;
    }

    QFile file(currentFilePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return;
    }

    qint64 fileSize = file.size();
    if (fileSize <= lastReadPosition) {
        file.close();
        return;
    }

    file.seek(lastReadPosition);

    QTextStream stream(&file);
    while (!stream.atEnd()) {
        QString line = stream.readLine();

        // Обрабатываем строку лога через LogFilter
        QString locationName = logFilter.processLogLine(line);
        if (!locationName.isEmpty()) {
            ui->locationNameLabel->clear();
            ui->locationNameLabel->setText(locationName);

            // Загружаем изображения для текущей локации
            QString locationCode = logFilter.getLastLocationCode();
            qDebug() << "Loading images for location code:" << locationCode; // Логируем код локации
            loadImagesForLocation(locationCode);
        }
    }

    lastReadPosition = file.pos();

    file.close();
}

void MainWindow::loadImagesForLocation(const QString &locationCode)
{
    // Получаем список изображений для текущей локации
    const QStringList &images = locationImages.value(locationCode, {});

    if (images.isEmpty()) {
        qDebug() << "No images found for location code:" << locationCode;

        // Очищаем QLabel
        imageLabel->clear();

        // Скрываем кнопки переключения
        ui->btnPrevious->setVisible(false);
        ui->btnNext->setVisible(false);

        return;
    }

    // Обновляем текущую локацию и сбрасываем индекс на первое изображение
    currentLocation = locationCode;
    currentIndex = 0;

    // Включаем или отключаем кнопки в зависимости от количества изображений
    bool hasMultipleImages = images.size() > 1;
    ui->btnPrevious->setVisible(hasMultipleImages);
    ui->btnNext->setVisible(hasMultipleImages);

    // Отображаем первое изображение
    showCurrentImage();
}

void MainWindow::showCurrentImage()
{
    const QStringList &images = locationImages[currentLocation];

    if (images.isEmpty()) {
        imageLabel->setText("No images available");
        return;
    }

    QString imagePath = images[currentIndex];
    QPixmap pixmap(imagePath);

    if (pixmap.isNull()) {
        imageLabel->setText("Failed to load image");
        return;
    }

    // Устанавливаем изображение с сохранением пропорций
    imageLabel->setPixmap(pixmap);
}

void MainWindow::showNextImage()
{
    const QStringList &images = locationImages[currentLocation];
    if (images.isEmpty()) return;

    // Переходим к следующему изображению
    currentIndex = (currentIndex + 1) % images.size();
    showCurrentImage();

    // Обновляем состояние кнопок
    updateButtonStates(images);
}

void MainWindow::showPreviousImage()
{
    const QStringList &images = locationImages[currentLocation];
    if (images.isEmpty()) return;

    // Переходим к предыдущему изображению
    currentIndex = (currentIndex - 1 + images.size()) % images.size();
    showCurrentImage();

    // Обновляем состояние кнопок
    updateButtonStates(images);
}

void MainWindow::updateButtonStates(const QStringList &images)
{
    bool hasMultipleImages = images.size() > 1;

    // Включаем/отключаем кнопки в зависимости от количества изображений
    ui->btnPrevious->setEnabled(hasMultipleImages);
    ui->btnNext->setEnabled(hasMultipleImages);
}
