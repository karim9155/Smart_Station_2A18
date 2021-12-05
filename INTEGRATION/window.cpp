#include "window.h"
#include "ui_window.h"
#include <QMessageBox>
#include "maindialog.h"

Window::Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Window)
{
    ui->setupUi(this);
}

Window::~Window()
{
    delete ui;
}


void Window::on_pushButton_clicked()
{
    QString username = ui->lineEdit_username->text();
        QString password = ui->lineEdit_password->text();

        if(username ==  "test" && password == "test") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            mainDialog = new MainDialog(this);
            mainDialog->show();
        }
        else {
            QMessageBox::warning(this,"Login", "Username and password is not correct");
        }
}
