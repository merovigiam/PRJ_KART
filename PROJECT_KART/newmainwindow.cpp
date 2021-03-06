
#include "newmainwindow.h"
#include "ui_newmainwindow.h"

NewMainWindow::NewMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewMainWindow)
{
    ui->setupUi(this);
     characterChosen= false;
}

NewMainWindow::~NewMainWindow()
{
    delete ui;
}

void NewMainWindow::on_startButton_clicked()
{
    //check button pressed last. {K, A, R, T, alt}
    //player(name, hitPoints, foodLevel, armour, power);

    begin_room *begin  = new begin_room(player,this);

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
	Player("Keith", 100, 100, 20, 20);
    ui->healthBar->setValue(100);
    ui->magicBar->setValue(0);
    ui->physicalBar->setValue(80);
    ui->classLabel->setText("Warrior");
    ui->kButton->setVisible(false);
    ui->startButton->setVisible(true);
    ui->altButton->setVisible(true);
    ui->aButton->setVisible(true);
    ui->rButton->setVisible(true);
    ui->tButton->setVisible(true);
    ui->imageLabel->setPixmap(QPixmap("C:/Users/Ross/Desktop/Melee2", 0,Qt::AutoColor));
    ui->cartLabel->setText("");
    characterChosen = true;
}

void NewMainWindow::on_aButton_clicked()
{
    Player("Aaron", 100, 100, 20, 20);
    ui->healthBar->setValue(100);
    ui->magicBar->setValue(5);
    ui->physicalBar->setValue(75);
    ui->classLabel->setText("Ranged");
    ui->aButton->setVisible(false);
    ui->startButton->setVisible(true);
    ui->kButton->setVisible(true);
    ui->altButton->setVisible(true);
    ui->rButton->setVisible(true);
    ui->tButton->setVisible(true);
    ui->imageLabel->setPixmap(QPixmap("C:/Users/Ross/Desktop/Archer2", 0,Qt::AutoColor));
    ui->cartLabel->setText("");
    characterChosen = true;
}

void NewMainWindow::on_rButton_clicked()
{
    Player("Ross", 100, 100, 20, 20);
    ui->healthBar->setValue(100);
    ui->magicBar->setValue(10);
    ui->physicalBar->setValue(60);
    ui->classLabel->setText("Tank");
    ui->rButton->setVisible(false);
    ui->startButton->setVisible(true);
    ui->kButton->setVisible(true);
    ui->aButton->setVisible(true);
    ui->altButton->setVisible(true);
    ui->tButton->setVisible(true);
    ui->imageLabel->setPixmap(QPixmap("C:/Users/Ross/Desktop/Melee2", 0,Qt::AutoColor));
    ui->cartLabel->setText("");
    characterChosen = true;
}

void NewMainWindow::on_tButton_clicked()
{
    Player("Tiago" , 100, 100, 20, 20);
    ui->healthBar->setValue(100);
    ui->magicBar->setValue(60);
    ui->physicalBar->setValue(10);
    ui->classLabel->setText("Mage");
    ui->tButton->setVisible(false);
    ui->startButton->setVisible(true);
    ui->kButton->setVisible(true);
    ui->aButton->setVisible(true);
    ui->rButton->setVisible(true);
    ui->altButton->setVisible(true);
    ui->imageLabel->setPixmap(QPixmap("C:/Users/Ross/Desktop/Mage2.png", 0,Qt::AutoColor));
    ui->cartLabel->setText("");
    characterChosen = true;
}

void NewMainWindow::on_altButton_clicked()
{
    Player("Chris", 100, 100, 20, 20);
    ui->healthBar->setValue(100);
    ui->magicBar->setValue(69);
    ui->physicalBar->setValue(0);
    ui->classLabel->setText("Priest");
    ui->altButton->setVisible(false);
    ui->startButton->setVisible(true);
    ui->kButton->setVisible(true);
    ui->aButton->setVisible(true);
    ui->rButton->setVisible(true);
    ui->tButton->setVisible(true);
    ui->imageLabel->setPixmap(QPixmap("C:/Users/Ross/Desktop/chris.jpg", 0,Qt::AutoColor));
    ui->cartLabel->setText("Known as CART");
    characterChosen = true;
}

void NewMainWindow::on_exitButton_clicked()
{
    this->close();
}

void NewMainWindow::on_testMG_clicked()
{
    Minigame2 *mg = new Minigame2(this) ;
    mg->exec() ;
    delete mg ;
}
