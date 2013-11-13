#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    setTimer(200);
    qDebug() << "weeee!";
    displayCounter=0;
}

void About::test() {
    ui->progressBar->setValue(ui->progressBar->value()+1);
    if(ui->progressBar->value() == 100) {
        ui->progressBar->setValue(0);
    }
    if(ui->progressBar->value()%5) {

        switch(displayCounter) {
            case 0:
            ui->lcdNumber->display("1");
                displayCounter++;
                break;
            case 1:
            ui->lcdNumber->display("10");
                displayCounter++;
                break;
        case 2:
            ui->lcdNumber->display("100");
            displayCounter++;
            break;
        case 3:
            ui->lcdNumber->display("1000");
            displayCounter++;
            break;
        case 4:
            ui->lcdNumber->display("10000");
            displayCounter = 0;
            break;
        }


    }
}

void About::setTimer(int ms) {
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(test()));
    timer->start(ms);
   // QTimer::singleShot(200,this, SLOT(test()));

}

About::~About()
{
    delete ui;
    timer->stop();

    //problem in the next line.
   //fixed now? //TODO: FIX THIS LINE//delete timer;
}

void About::on_pushButton_2_clicked()
{
    this->close();
    //this->~About(); //how to properly close the window?
    //if just close is called, the windows would still in memory and the thread would keep runing. is this a ok behavior?
    //it is strange to me to manually call de destructor.
    //this->destroy();
}
