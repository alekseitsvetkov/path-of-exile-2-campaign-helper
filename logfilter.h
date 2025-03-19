#ifndef LOGFILTER_H
#define LOGFILTER_H

#include <QString>
#include <QRegularExpression>
#include "locations.h" // Подключаем словарь локаций

class LogFilter
{
public:
    LogFilter();

    // Метод для обработки строки лога
    QString processLogLine(const QString &line);
    QString getLastLocationCode() const;

private:
    QString lastLocationCode; // Хранит код последней локации
    // Регулярное выражение для поиска строк с генерацией локаций
    static const QRegularExpression GeneratingAreaRegex;
};

#endif // LOGFILTER_H
