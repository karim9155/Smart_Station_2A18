#ifndef MAINWINDOW3_H
#define MAINWINDOW3_H

#include <QDate>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QTextBrowser;
QT_END_NAMESPACE

//! [0]
class MainWindow3 : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow3();

public slots:
    void setFontSize(int size);
    void setMonth(int month);
    void setYear(QDate date);

private:
    void insertCalendar();

    int fontSize;
    QDate selectedDate;
    QTextBrowser *editor;
};
//! [0]

#endif // MAINWINDOW3_H
