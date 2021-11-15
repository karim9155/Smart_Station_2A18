#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
//#include "mainwindow.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
       QString password = ui->lineEdit_password->text();

       if(username ==  "test" && password == "test") {
           QMessageBox::information(this, "Login", "Username and password is correct");
           //hide();
          // mainwindow = new MainWindow(this);
          // mainwindow->show();
       }
       else {
           QMessageBox::warning(this,"Login", "Username and password is not correct");
       }
}
