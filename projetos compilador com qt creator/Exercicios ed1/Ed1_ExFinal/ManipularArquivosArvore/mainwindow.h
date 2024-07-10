#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <ArvoreBinaria.h>
#include <ManipularArquivo.h>
#include <QMainWindow>
//Biblioteca para gerenciar janela de mensagem
#include <QMessageBox>
//Biblioteca para gerenciar a QString
#include <QString>
//Biblioteca de manipulação dos diretorios do disco
#include <QFileDialog>
//Classe para manipular o arquivo texto e criar a vector>
//Classe vector da stl
#include <vector>

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
    QString nomeDoArquivoNoDisco;
    Ui::MainWindow *ui;
    ED1::ArvoreBinaria *palavra;
};
#endif // MAINWINDOW_H
