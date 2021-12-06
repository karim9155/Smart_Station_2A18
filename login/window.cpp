#include "window.h"
#include "ui_window.h"
#include <QMessageBox>

Window::Window(QWidget *parent)
    : QWidget(parent)
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
           // QMessageBox::information(this, "Login", "Username and password is correct");
           // hide();
            secDialog = new MainDialog(this);
            secDialog->show();
        }
        else {
            QMessageBox::warning(this,"Login", "Username and password is not correct");
        }
}
