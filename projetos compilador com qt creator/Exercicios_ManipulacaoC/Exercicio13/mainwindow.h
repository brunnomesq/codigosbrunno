#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <tabelahash.h>
#include <professor.h>
//Biblioteca para gerenciar janela de mensagem

#include <QMessageBox>
//Biblioteca para gerenciar a QString
#include <QString>
//Biblioteca de manipulação dos diretorios do disco
#include <QFileDialog>
//Classe para manipular o arquivo texto e criar a vector
#include <manipular.h>
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

    void update();

    void on_pushButton_Remover_clicked();

    void on_pushButton_Inserir_clicked();

    void on_pushButton_Alterar_clicked();

    void on_pushButton_Encontrar_clicked();



    void on_pushButton_Pesquisar_clicked();

private:
    Ui::MainWindow *ui;
    QString nomeArquivo;
    ed::Manipular *arquivoN;
    ed::TabelaHash *lista;
    int size=0;
    int collisions=0;
    QTableWidgetItem *itemSelecionado = nullptr;

};
#endif // MAINWINDOW_H
