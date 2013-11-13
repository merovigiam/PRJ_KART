#include "messagedialog.h"
#include "ui_messagedialog.h"

MessageDialog::MessageDialog(string message, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MessageDialog)
{
    ui->setupUi(this);
    ui->label->setText(message.c_str());
}

MessageDialog::~MessageDialog()
{
    delete ui;
}
