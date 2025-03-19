#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QFileSystemWatcher>
#include "logfilter.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void showPreviousImage(); // Слот для переключения на предыдущее изображение
    void showNextImage();     // Слот для переключения на следующее изображение
    void onChooseFileClicked(); // Слот для выбора файла
    void onFilePathChanged();   // Слот для обработки изменения пути к файлу
    void checkFileForChanges(); // Слот для проверки изменений в файле


private:
    Ui::MainWindow *ui;
    QLabel *imageLabel; // Для отображения изображений
    QString currentFilePath; // Путь к выбранному файлу
    qint64 lastReadPosition = 0; // Позиция последнего прочитанного байта
    QFileSystemWatcher fileWatcher; // Наблюдатель за файлом
    LogFilter logFilter; // Объект для фильтрации логов

    QString currentLocation; // Текущая локация
    int currentIndex;        // Индекс текущего изображения

    void showCurrentImage(); // Метод для отображения текущего изображения
    void updateButtonStates(const QStringList &images); // Метод для обновления состояния кнопок
    void loadImagesForLocation(const QString &locationCode); // Метод для загрузки изображений по коду локации
    void initializeFileMonitoring(const QString &filePath); // Метод для инициализации мониторинга файла
    void appendText(const QString &text); // Метод для добавления текста с ограничением строк
};
#endif // MAINWINDOW_H
