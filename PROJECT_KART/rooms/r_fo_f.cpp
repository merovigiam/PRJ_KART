#include "r_fo_f.h"
#include "ui_r_fo_f.h"

r_fo_f::r_fo_f(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::r_fo_f)
{
    ui->setupUi(this);
}

r_fo_f::~r_fo_f()
{
    delete ui;
}
