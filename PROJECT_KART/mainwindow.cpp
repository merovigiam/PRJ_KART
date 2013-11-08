#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_aboutButton_clicked()
{
    About *aboutWindow = new About(this);
    aboutWindow->show();

    //delete(aboutWindow);
}

void MainWindow::on_pushButton_3_clicked()
{

}

void MainWindow::on_pushButton_clicked()
{
    close();
}

void MainWindow::on_dreamRealityButton_clicked()
{
    // Change text to either dream or reality
    // dreamReal = 1/2
    // change image names to (roomName + dreamReal)

}
