#include "logfilter.h"

// Инициализация регулярного выражения
const QRegularExpression LogFilter::GeneratingAreaRegex(
    R"(^[^ ]+ [^ ]+ \d+.*Generating level (\d+) area \"(.*)\")"
    );

LogFilter::LogFilter()
{
    // Конструктор пустой, так как словарь уже определен в locations.h
}

QString LogFilter::processLogLine(const QString &line)
{
    QRegularExpressionMatch match = GeneratingAreaRegex.match(line);
    if (match.hasMatch()) {
        QString areaCode = match.captured(2); // Извлекаем код локации
        qDebug() << "Found location code:" << areaCode; // Логируем найденный код
        lastLocationCode = areaCode;
        return locationMap.value(areaCode, "Unknown Location");
    } else {
        qDebug() << "No match found for line:" << line; // Логируем строку без совпадений
    }
    return QString();
}

QString LogFilter::getLastLocationCode() const
{
    return lastLocationCode;
}
