#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <pilha.h>
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
    void on_pushButton_clicked();

    void on_button_empilhar_clicked();

    void on_button_desimpilhar_clicked();

    void on_pushButton_Tamanho_clicked();

private:
    Ui::MainWindow *ui;
    brn::Pilha *pi;
};

#endif // MAINWINDOW_H
