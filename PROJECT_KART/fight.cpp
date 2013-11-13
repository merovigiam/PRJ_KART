#include "fight.h"
#include "ui_fight.h"
#include "enemy.h"
#include "player.h"
#include "newmainwindow.h"
#include <QMessageBox>
#include <QMutex>

fight::fight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fight)
{
    ui->setupUi(this);
    ui->playerLabel->setPixmap(QPixmap("C:/Users/Ross/Desktop/image.jpg", 0,Qt::AutoColor));
    ui->enemyLabel->setPixmap(QPixmap("C:/Users/Ross/Desktop/enemyImage.jpg", 0,Qt::AutoColor));

    //when calling fight put this in before you do Fight.exec.
    //Fight->setWindowFlags(Qt::Dialog | Qt::Desktop)
}

fight::~fight()
{
    delete ui;
}

void fight::on_attack3_clicked()
{
    int hp;
    hp = currEnemyHp - Player::power;
    ui->enemyHp->setValue((hp / hitPoints) * 100);
    if (currEnemyHp <= 0)
    {
        QMessageBox::information( this, tr("You have won!"), tr("You're battle is done here,\nGo on your quest!") );
        accept();
        this->close();
    } else {

        ui->actionsDoneLabel->setText("You aim for the leg!");

        QMutex mut;
        mut.tryLock(2000);
        mut.unlock();

        ui->actionsDoneLabel->setText("The enemy attacked!");

        currCharHp - Enemy::power;
        if (currCharHp <= 0)
        {
            QMessageBox::information( this, tr("You have lost! D:"), tr("You're quest has ended,\nChoose a new character\n and begin your quest again") );
            accept();
            this->close();
            NewMainWindow.close();
        }
    }
}

void fight::on_attack1_clicked()
{
    int hp;
    hp = currEnemyHp - Player::power;
    ui->enemyHp->setValue((hp / hitPoints) * 100);
    if (currEnemyHp <= 0)
    {
        QMessageBox::information( this, tr("You have won!"), tr("You're battle is done here,\nGo on your quest!") );
        accept();
        this->close();
    } else {

        ui->actionsDoneLabel->setText("You aim for the stomach!");

        QMutex mut;
        mut.tryLock(2000);
        mut.unlock();

        ui->actionsDoneLabel->setText("The enemy attacked!");

        currCharHp - Enemy::power;
        if (currCharHp <= 0)
        {
            QMessageBox::information( this, tr("You have lost! D:"), tr("You're quest has ended,\nChoose a new character\n and begin your quest again") );
            accept();
            this->close();
            NewMainWindow.close();
        }
    }
}

void fight::on_attack2_clicked()
{
    int hp;
    hp = currEnemyHp - Player::power;
    ui->enemyHp->setValue((hp / hitPoints) * 100);
    if (currEnemyHp <= 0)
    {
        QMessageBox::information( this, tr("You have won!"), tr("You're battle is done here,\nGo on your quest!") );
        accept();
        this->close();
    } else {

        ui->actionsDoneLabel->setText("You aim for the head!");

        QMutex mut;
        mut.tryLock(2000);
        mut.unlock();

        ui->actionsDoneLabel->setText("The enemy attacked!");

        currCharHp - Enemy::power;
        if (currCharHp <= 0)
        {
            QMessageBox::information( this, tr("You have lost! D:"), tr("You're quest has ended,\nChoose a new character\n and begin your quest again") );
            accept();
            this->close();
            NewMainWindow.close();
        }
    }
}

void fight::on_healButton_clicked()
{
    //Have a val in food that if there is something in the vector that foodPresent = true && how much food items are there
    if(foodPresent)
    {
        if(currCharHp + healValue > Player::hitPoints)
        {
            currCharHp = Player::hitPoints;
            ui->playerHp->setValue(100);
            amountOfFood--;
        } else {
            currCharHp + healValue;
            ui->playerHp->setValue(((currCharHp + healValue) / hitPoints) * 100);
            amountOfFood--;
        }
        QMutex mut;
        mut.tryLock(2000);
        mut.unlock();

        ui->actionsDoneLabel->setText("The enemy attacked!");
        currCharHp - Enemy::power;
        if (currCharHp <= 0)
        {
            QMessageBox::information( this, tr("You have lost! D:"), tr("You're quest has ended,\nChoose a new character\n and begin your quest again") );
            accept();
            this->close();
            NewMainWindow.close();
        }
    } else {
        QMessageBox::information( this, tr("You have no food!"), tr("Man up!\n You don't need food") );
        accept();
    }
}
