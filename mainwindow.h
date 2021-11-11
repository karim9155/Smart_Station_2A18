#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "employe.h"
#include <QMainWindow>
#include "smtp.h"

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
    void sendMail();
    void mailSent(QString);
    void on_bt_Ajouter_clicked();

    void on_Supp_Button_clicked();

    void on_bt_Ajouter_md_clicked();

   // void on_bt_Modifier_2_clicked();
    
private:
    Ui::MainWindow *ui;
 employe C ;
};

#endif // MAINWINDOW_H
