#ifndef ROUNDINFOFETCHER_H
#define ROUNDINFOFETCHER_H

#include <QObject>
#include <QStringList>
#include <ordenar.h>
#include <rodadavet.h>
class RoundInfoFetcher : public QObject
{
    Q_OBJECT
public:
    explicit RoundInfoFetcher(QObject *parent = nullptr);


signals:
    void roundInfoFetched(QStringList rodadas,QStringList round);
    void apiLimitReached(); // Adicione esta linha

public slots:
    void fetchRoundInfo(QString league, QString season_id);

private:
    QStringList apiKeys;
    int currentApiKeyIndex;
    QStringList rodadas;
    QStringList round;


    Ordenar *info;
    void fetchFootApiRoundInfoN(QString liga_id, QString season_id);
    void fetchFootApiRoundInfoL(QString liga_id, QString season_id);
    void fetchAllSportsApiRoundInfoN(QString liga_id, QString season_id);
    void fetchAllSportsApiRoundInfoL(QString liga_id, QString season_id);
};

#endif // ROUNDINFOFETCHER_H
