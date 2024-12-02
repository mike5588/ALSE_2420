#ifndef DIA_DIV_H
#define DIA_DIV_H

#include <QDialog>

namespace Ui {
class dia_div;
}

class dia_div : public QDialog
{
    Q_OBJECT

public:
    explicit dia_div(QWidget *parent = nullptr);
    ~dia_div();

private:
    Ui::dia_div *ui;
};

#endif // DIA_DIV_H
