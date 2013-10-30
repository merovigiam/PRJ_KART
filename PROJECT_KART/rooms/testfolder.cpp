#include "testfolder.h"
#include "ui_testfolder.h"

testFolder::testFolder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testFolder)
{
    ui->setupUi(this);
}

testFolder::~testFolder()
{
    delete ui;
}
