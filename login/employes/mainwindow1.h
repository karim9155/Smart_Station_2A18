#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H
#include "employe.h"
#include <QMainWindow>
#include "smtp.h"
#include <QPrinter>
namespace Ui {
class MainWindow1;
}

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow1(QWidget *parent = nullptr);
    ~MainWindow1();


private slots:
    void sendMail();
    void mailSent(QString);
    void on_bt_Ajouter_clicked();

    void on_Supp_Button_clicked();

    void on_bt_Ajouter_md_clicked();

   // void on_bt_Modifier_2_clicked();
    
    void on_triage_clicked();

    void on_trialphabetique_clicked();



    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_8__clicked();

    void on_stat_clicked();

private:
    Ui::MainWindow1 *ui;
 employe C ;
};

#endif // MAINWINDOW1_H
