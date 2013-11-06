#include "startwindow.h"
#include "ui_startwindow.h"

//#include "mainwindow.h"

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

    //i do not think we are able to do such conversion, because there are too many changes needed to convert inbetween those two classes
    //i had to recreate everything, not sucessfull trying to do that.
    //and now the program properly closes after exit. (the process was open after everything was closed, for some reason, and the change in exec to show
    //is the main reason that to happen.
}
