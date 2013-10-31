#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "g.h"

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
