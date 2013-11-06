#include "begin_room.h"
#include "ui_begin_room.h"

begin_room::begin_room(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::begin_room)
{
    ui->setupUi(this);

}

begin_room::~begin_room()
{
    delete ui;

}
