#include "r_fo_e.h"
#include "ui_r_fo_e.h"

r_fo_e::r_fo_e(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::r_fo_e)
{
    ui->setupUi(this);
}

r_fo_e::~r_fo_e()
{
    delete ui;
}
