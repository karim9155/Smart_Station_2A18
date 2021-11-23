#include "mainwindow.h"
#include "connexion.h"
#include <QDialog>
#include <QMessageBox>
#include <QApplication>
#include "dialogticket.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Connexion c;
    bool verifConnexion = c.createconnect();
    Dialogticket w;
   /* MainWindow w;
    *
    w.resize(640, 256);*/
    if(verifConnexion){
    w.show();
    QMessageBox::information (nullptr, QObject::tr("CONNEXION"),
                QObject::tr("\n DATABASE IS OPEN  !\n"), QMessageBox::Ok);
    }
    else {
        QMessageBox::critical (nullptr, QObject::tr("CONNEXION"),
                    QObject::tr("\n DATABASE IS NOT OPEN  !\n"), QMessageBox::Ok);
    }
    return a.exec();


}
