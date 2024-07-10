#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <funcoes.h>
#include <Docentes.h>
//Biblioteca para gerenciar janela de mensagem
#include <llde.h>
#include <no.h>
#include <QMessageBox>
//Biblioteca para gerenciar a QString
#include <QString>
//Biblioteca de manipulação dos diretorios do disco
#include <QFileDialog>
//Classe para manipular o arquivo texto e criar a vector
#include <ManipularArquivo.h>
//Classe vector da stl
#include <vector>
#include <QMainWindow>
#include <QDebug>
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

    void atualizarTabela();

    void on_pushButton_Remover_clicked();

    void on_pushButton_Inserir_clicked();

    void on_pushButton_Alterar_clicked();

    void on_pushButton_Encontrar_clicked();



    void on_comboBox_Letras_currentIndexChanged();

private:
    Ui::MainWindow *ui;
    QString nomeDoArquivoNoDisco;
    ed2::ManipularArquivo *teste;
    ed2::Funcoes *listaDeProfessores;
    int tamanho=0;
    int colisoes=0;
    QTableWidgetItem *itemSelecionado = nullptr;

};
#endif // MAINWINDOW_H