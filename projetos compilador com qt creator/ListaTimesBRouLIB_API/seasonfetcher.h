// seasonfetcher.h
#ifndef SEASONFETCHER_H
#define SEASONFETCHER_H

#include <QObject>

class SeasonFetcher : public QObject
{
    Q_OBJECT
public:
    explicit SeasonFetcher(QObject *parent = nullptr);

    QString getTemporada() const;

signals:
    void seasonFetched(QString seasonId,QString temp);
    void apiLimitReached(); // Adicione esta linha

public slots:
    void fetchSeason(QString league);
private:    
    QString temporada;
    QStringList apiKeys;
    int currentApiKeyIndex;
};

#endif // SEASONFETCHER_H
