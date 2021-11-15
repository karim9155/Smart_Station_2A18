#include "login.h"
#include <QWidget>
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     login l;
     QFile file("C:\\Users\\azert\\Desktop\\2eme\\Projet C++\\Smart_Station_2A18-Gestion-des-bus\\SMART STATION\\SpyBot.qss");
         file.open(QFile::ReadOnly);

         QString styleSheet { QLatin1String(file.readAll()) };

         //setup stylesheet
         a.setStyleSheet(styleSheet);

    l.show();
    return a.exec();
}
