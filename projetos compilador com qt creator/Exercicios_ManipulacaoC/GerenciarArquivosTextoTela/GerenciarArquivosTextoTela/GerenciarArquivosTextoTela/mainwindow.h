#ifndef MAINWINDOW_H
#define MAINWINDOW_H
// Bibliotecas
#include <QMainWindow>
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
//Classe Piloto para os dados
#include <piloto.h>
#include <llse.h>
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

private:
    Ui::MainWindow *ui;
    QString nomeDoArquivoNoDisco;
    int tamanho;
    ejm::ListaLSE listaDePilotos;
};
#endif // MAINWINDOW_H
