#include "minigame2.h"
#include "ui_minigame2.h"

Minigame2::Minigame2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Minigame2)
{
    ui->setupUi(this);
    setStyleSheet("background-image:url(C:/prj_kart/lockpicking.png)");
    ui->slider1->setRange(1,10);
    ui->slider2->setRange(1,10);
    ui->slider3->setRange(1,10);
    ui->slider4->setRange(1,10);

    ui->checkBox->setEnabled(false);
    ui->checkBox_2->setEnabled(false);
    ui->checkBox_3->setEnabled(false);
    ui->checkBox_4->setEnabled(false);
}

Minigame2::~Minigame2()
{
    delete ui;
}

void Minigame2::on_slider1_valueChanged(int value)
{
    if(ui->slider1->value() == 5)
        ui->checkBox->setChecked(true) ;
    else
        ui->checkBox->setChecked(false) ;
}

void Minigame2::on_slider2_valueChanged(int value)
{
    if(ui->slider2->value() == 8)
        ui->checkBox_2->setChecked(true) ;
    else
        ui->checkBox_2->setChecked(false) ;
}

void Minigame2::on_slider3_valueChanged(int value)
{
    if(ui->slider3->value() == 3)
        ui->checkBox_3->setChecked(true) ;
    else
        ui->checkBox_3->setChecked(false) ;
}

void Minigame2::on_slider4_valueChanged(int value)
{
    if(ui->slider4->value() == 7)
        ui->checkBox_4->setChecked(true) ;
    else
        ui->checkBox_4->setChecked(false) ;
}

void Minigame2::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked() && ui->checkBox_2->isChecked() && ui->checkBox_3->isChecked() && ui->checkBox_4->isChecked()) {
        QMessageBox::information(NULL, "Congratulations!", "You have picked the lock open! You can proceed now.");
        this->close() ;
    } else {
        QMessageBox::information(NULL, "Try again.", "Nope, the door still won't open.");
    }
}
