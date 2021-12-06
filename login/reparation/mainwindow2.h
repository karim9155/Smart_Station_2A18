#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H
#include "reparation.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow2; }
QT_END_NAMESPACE

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    QPieSeries *series = new QPieSeries();
    Ui::MainWindow2 *ui;
    reparation rep;
};
#endif // MAINWINDOW2_H
