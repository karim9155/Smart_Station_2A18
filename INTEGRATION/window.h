#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include "maindialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QMainWindow
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Window *ui;
    MainDialog *mainDialog;
};
#endif // WINDOW_H
