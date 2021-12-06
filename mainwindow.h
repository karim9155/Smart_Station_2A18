#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "reparation.h"
#include <QMainWindow>
#include "arduino.h"

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

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();
    void update_label();
    void affrech();

private:
    QPieSeries *series = new QPieSeries();
    Ui::MainWindow *ui;
    reparation rep;
    arduino a;
    QByteArray data;
};
#endif // MAINWINDOW_H
