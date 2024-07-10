#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "recursividade.h"
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
    void on_pushButton_Tamanho_clicked();

    void on_textEdit_Conjunto_textChanged();

private:
    Ui::MainWindow *ui;
    brn::Recursividade *x=0;
};
#endif // MAINWINDOW_H
