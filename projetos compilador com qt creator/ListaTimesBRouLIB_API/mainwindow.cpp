#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_seasonFetcher(new SeasonFetcher(this)),
    m_teamFetcher(new TeamFetcher(this)),
    m_roundInfoFetcher(new RoundInfoFetcher(this)) // Inicialize o RoundInfoFetcher
{
    ui->setupUi(this);
    connect(m_seasonFetcher, &SeasonFetcher::seasonFetched, this, &MainWindow::handleSeasonFetched);
    connect(m_teamFetcher, &TeamFetcher::teamsFetched, this, &MainWindow::handleTeamsFetched);
    connect(m_roundInfoFetcher, &RoundInfoFetcher::roundInfoFetched, this, &MainWindow::handleRoundInfoFetched);

    // Conecte o sinal apiLimitReached() para chamar handleApiLimitReached() quando o limite da API for atingido
    connect(m_seasonFetcher, &SeasonFetcher::apiLimitReached, this, &MainWindow::handleApiLimitReached);
    connect(m_teamFetcher, &TeamFetcher::apiLimitReached, this, &MainWindow::handleApiLimitReached);
    connect(m_roundInfoFetcher, &RoundInfoFetcher::apiLimitReached, this, &MainWindow::handleApiLimitReached);

    // Conecte o sinal roundInfoFetched() para chamar handleRoundInfoFetched() quando as informações da rodada forem recebidas

}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_seasonFetcher;
    delete m_teamFetcher;
    delete m_roundInfoFetcher; // Deleta o RoundInfoFetcher
}

void MainWindow::on_pushButton_clicked()
{
    QString league = ui->comboBox->currentText();
    m_seasonFetcher->fetchSeason(league);
}

void MainWindow::handleSeasonFetched(QString seasonId, QString temp)
{
    QString league = ui->comboBox->currentText();
    temporada = temp;
    temporadaID= seasonId;
    m_teamFetcher->fetchTeams(league, seasonId);
}

void MainWindow::handleTeamsFetched(QStringList teams)
{
    QString league = ui->comboBox->currentText();
    QString teamNamesText = teams.join("\n");
    ui->textEdit->setText(teamNamesText);
    ui->label_Temporada->setText(temporada);
    m_roundInfoFetcher->fetchRoundInfo(league,temporadaID);// Inicia a busca pelas informações da rodada
}

void MainWindow::handleRoundInfoFetched(QStringList rodadas,QStringList round)
{
    qDebug() << "Informações da rodada recebidas com sucesso:";
        for (const QString& partida : rodadas) {
            qDebug() << partida;
        }
        int tamanho=rodadas.size();
        vetor=new Ordenar(tamanho);
        int n_round=0;
        QString info_rodada;
        for(int i=0;i<tamanho;i++){
            n_round=round.at(i).toInt();
            info_rodada=rodadas.at(i);
            RodadaVet info(n_round,info_rodada);
            vetor->gerador(info,i);
        }
        QString vet_esc;
        for(int i=0;i<tamanho;i++){
            vet_esc+=vetor->acessar(i).getInfo()+" \n";
        }
        ui->textEdit_rodadas->setText(vet_esc);
    //teste=new brn::ManipularArquivo(nomeDoArquivoNoDisco,tamanho);
    //QString rodadastext=rodadas.join("\n");
    //ui->textEdit_rodadas->setText(rodadastext);
}

void MainWindow::handleApiLimitReached()
{
    QMessageBox::warning(this, "Limite diário atingido", "Todas as chaves API foram usadas. Por favor, tente novamente amanhã.");
}
