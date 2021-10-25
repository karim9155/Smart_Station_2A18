#ifndef TRIER_H
#define TRIER_H

#include <QDialog>

namespace Ui {
class Trier;
}

class Trier : public QDialog
{
    Q_OBJECT

public:
    explicit Trier(QWidget *parent = nullptr);
    ~Trier();

private:
    Ui::Trier *ui;
};

#endif // TRIER_H
