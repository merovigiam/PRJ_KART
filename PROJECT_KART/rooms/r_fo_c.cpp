#include "r_fo_c.h"
#include "ui_r_fo_c.h"

r_fo_c::r_fo_c(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::r_fo_c)
{
    ui->setupUi(this);
}

r_fo_c::~r_fo_c()
{
    delete ui;
}
