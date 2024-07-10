#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <ordenar.h>
#include <dados.h>
//Biblioteca para gerenciar janela de mensagem
#include <QMessageBox>
//Biblioteca para gerenciar a QString
#include <QString>
//Biblioteca de manipulação dos diretorios do disco
#include <QFileDialog>
//Classe para manipular o arquivo texto e criar a vector
#include <manipulararquivo.h>
//Classe vector da stl
#include <vector>
#include <QMainWindow>
#include <QTableWidgetItem>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonBuscarNomeArquivo_clicked();

    void on_pushButtonMostrarDados_clicked();

    void on_pushButton_EncontrarBS_clicked();

    void on_comboBox_BS_currentTextChanged();

private:
    Ui::MainWindow *ui;
    QString nomeDoArquivoNoDisco;
    brn::ManipularArquivo *teste;
    brn::Ordenar *listaDeProfessores;
    int tamanho=0;
    QTableWidgetItem *itemSelecionado = nullptr;

};
#endif // MAINWINDOW_H
