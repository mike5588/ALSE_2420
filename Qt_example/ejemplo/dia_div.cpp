#include "dia_div.h"
#include "ui_dia_div.h"

dia_div::dia_div(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dia_div)
{
    ui->setupUi(this);
}

dia_div::~dia_div()
{
    delete ui;
}
