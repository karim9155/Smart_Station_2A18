#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include "bus.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //MainWindow w;
    Connection c;
    bool test=c.createconnect();
    MainWindow w;
    QFile file("C:\\Users\\azert\\Desktop\\2eme\\Projet C++\\Smart_Station_2A18-Gestion-des-bus\\SMART STATION\\SpyBot.qss");
        file.open(QFile::ReadOnly);

        QString styleSheet { QLatin1String(file.readAll()) };

        //setup stylesheet
        a.setStyleSheet(styleSheet);

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
