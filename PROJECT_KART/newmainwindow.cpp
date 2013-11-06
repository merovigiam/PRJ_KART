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
    //MainWindow *mainWindow = new MainWindow(this);
    //mainWindow->show();
    //i do not think we are able to do such conversion, because there are too many changes needed to convert inbetween those two classes
    //i had to recreate everything, not sucessfull trying to do that.
    //and now the program properly closes after exit. (the process was open after everything was closed, for some reason, and the change in exec to show
    //is the main reason that to happen.

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
