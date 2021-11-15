#include "mainwindow.h"
#include <QFile>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QFile file("C:\\Users\\azert\\Desktop\\2eme\\Projet C++\\Smart_Station_2A18-Gestion-des-bus\\SMART STATION\\SpyBot.qss");
        file.open(QFile::ReadOnly);

        QString styleSheet { QLatin1String(file.readAll()) };

        //setup stylesheet
        a.setStyleSheet(styleSheet);
    w.show();
    return a.exec();
}
