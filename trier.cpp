#include "trier.h"
#include "ui_trier.h"

Trier::Trier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Trier)
{
    ui->setupUi(this);
}

Trier::~Trier()
{
    delete ui;
}
