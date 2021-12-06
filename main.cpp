#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include <QTranslator>
#include <QInputDialog>
//namespace DuarteCorporation ;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile styleSheetFile("C:\\Users\\Ahmed Karaborni\\Downloads\\Atelier_Connexion\\Fibers.qss");
            styleSheetFile.open(QFile::ReadOnly);
            QString styleSheet = QLatin1String(styleSheetFile.readAll());
            a.setStyleSheet(styleSheet);



   /* dumessengerserver server;
    if(!server.startserver(3333)){
        qDebug() <<"Erreur:"<< server.errorString();
        return 1;
    }
    qDebug() <<"Server Started...";
    */
    QTranslator t;
    QStringList languages;
    languages <<"English"<<"French"<<"espagnol";
    const QString lang=QInputDialog::getItem(NULL,"select language","language",languages);
    if(lang=="English"){
        t.load(":/english.qm");

    }else if(lang=="Espagnol"){
        t.load(":/espagnol.qm");
    }

    else if(lang!="french"){
       a.installTranslator(&t);

    }

    Connection c;
    bool test=c.createconnect();
     MainWindow w;

    if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
