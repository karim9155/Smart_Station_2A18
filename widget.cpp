#include "widget.h"
#include "ui_widget.h"
#include "new_window.h"
#include "trier.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    new_window newwindow ;
    newwindow.setModal(true);
    newwindow.exec();
}

void Widget::on_pushButton_6_clicked()
{
    Trier tri ;
    tri.setModal(true);
    tri.exec();
}
