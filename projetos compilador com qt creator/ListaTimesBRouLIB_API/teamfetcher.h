// teamfetcher.h
#ifndef TEAMFETCHER_H
#define TEAMFETCHER_H

#include <QObject>

class TeamFetcher : public QObject
{
    Q_OBJECT
public:
    explicit TeamFetcher(QObject *parent = nullptr);

signals:
    void teamsFetched(QStringList teams);
    void apiLimitReached(); // Adicione esta linha

public slots:
    void fetchTeams(QString league, QString seasonId);
private:
    QStringList apiKeys;
    int currentApiKeyIndex;
};

#endif // TEAMFETCHER_H
