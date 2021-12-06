#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "clients.h"
#include "arduino.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:

    void on_pb_ajouter_clicked();

    void on_supp_button_clicked();


    void on_modifier_button_clicked();

    void on_trialpha_clicked();

    void on_triage_clicked();

    void on_rechercher_button_clicked();

    void on_prendrephoto_clicked();

    void on_stat_button_clicked();

  /* void on_pushbtton_clicked();

    void on_pushbtton_2_clicked();

    void on_pushbtton_3_clicked();

    void on_pushbtton_4_clicked();

    void update_label();*/


    void on_chat_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    clients c;
   // QByteArray data;
    //arduino A;
};

#endif // MAINWINDOW_H
