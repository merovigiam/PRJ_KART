#include "startwindow.h"
#include "ui_startwindow.h"
#include "about.h"
#include "mainwindow.h"

startWindow::startWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::startWindow)
{
    ui->setupUi(this);
}

startWindow::~startWindow()
{
    delete ui;
}


void startWindow::on_altButton_clicked()
{
    //Show or hide label
    //Set chris' image and stats.
}

void startWindow::on_kButton_clicked()
{
    //set player details and image
    //show start button
}

void startWindow::on_aButton_clicked()
{
    //set player details and image
    //show start button
}

void startWindow::on_rButton_clicked()
{
    //set player details and image
    //show start button
}

void startWindow::on_tButton_clicked()
{
    //set player details and image
    //show start button
}

void startWindow::on_aboutButton_clicked()
{
    About *aboutWindow = new About(this);
    aboutWindow->exec();
}

void startWindow::on_startButton_clicked()
{
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show(); // Think we have to change QMainWindow to QDialog to be able to use exec() instead of show().
    //Also could you explain any implications with changing QMainWindow to QDialog
}
