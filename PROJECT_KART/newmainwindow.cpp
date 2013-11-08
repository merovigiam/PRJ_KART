
#include "newmainwindow.h"
#include "ui_newmainwindow.h"

NewMainWindow::NewMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewMainWindow)
{
    ui->setupUi(this);
}

NewMainWindow::~NewMainWindow()
{
    delete ui;
}

void NewMainWindow::on_startButton_clicked()
{
    //check button pressed last. {K, A, R, T, alt}
    //player(name, hitPoints, foodLevel, armour, power);

    begin_room *begin  = new begin_room(this);
     begin->exec();
     delete begin;
}

void NewMainWindow::on_pushButton_clicked()
{
    this->close();
}

void NewMainWindow::on_aboutButton_clicked()
{
    About *aboutWindow = new About(this);
    aboutWindow->exec();
    delete aboutWindow;


}

void NewMainWindow::on_kButton_clicked()
{
    //setStats(Keith, 100, 100, 20, 20);
}

void NewMainWindow::on_aButton_clicked()
{
    //setStats(Aaron, 100, 100, 20, 20);
}

void NewMainWindow::on_rButton_clicked()
{
    //setStats(Ross, 100, 100, 20, 20);
}

void NewMainWindow::on_tButton_clicked()
{
    //setStats(Tiago , 100, 100, 20, 20);
}

void NewMainWindow::on_altButton_clicked()
{
    //setStats(Chris, 100, 100, 20, 20);
}
