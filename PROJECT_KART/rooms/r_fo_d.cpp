#include "r_fo_d.h"
#include "ui_r_fo_d.h"

r_fo_d::r_fo_d(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::r_fo_d)
{
    ui->setupUi(this);
}

r_fo_d::~r_fo_d()
{
    delete ui;
}
