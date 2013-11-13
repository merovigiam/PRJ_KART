#include "fight.h"
#include "ui_fight.h"


//NEVER INSERT THE INCLUDE DIRECTIVE IN A CPP FILE.

fight::fight(Player* player, Enemy* enemy, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fight)
  //,
   // currentPlayer(player), if we pass as a copy, the player outside this class will be the same if he lose, win, barely win, or wathever
    //currentEnemy(enemy) -// so we need the pointers for the actual player. we can only have one player intanciated, everything else is reference to the first one.
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

    currentEnemy->setHitPoints(currentEnemy->getHitPoints() - currentPlayer->getPower()) ;
    ui->actionsDoneLabel->setText("You aim for the leg!");
    if (currentEnemy->getHitPoints() <= 0)
    {
        QMessageBox::information( this, tr("You have won!"), tr("You're battle is done here,\nGo on your quest!") );
        accept();
        this->close();
    } else { 
        QMutex mut;
        mut.tryLock(2000);
        mut.unlock();

        ui->actionsDoneLabel->setText("The enemy attacked!");

        currentPlayer->setHitPoints(currentPlayer->getHitPoints() - currentEnemy->getPower()) ;
        if (currentPlayer->getHitPoints() <= 0)
        {
            QMessageBox::information( this, tr("You have lost! D:"), tr("You're quest has ended,\nChoose a new character\n and begin your quest again") );
            accept();
            this->close();
            ///static_cast<NewMainWindow*>(*parent())->close(); lets make this easier... set a flag then get the flag outside
        }
    }

}

void fight::on_attack1_clicked()
{

    currentEnemy->setHitPoints(currentEnemy->getHitPoints() - currentPlayer->getPower()) ;
    ui->actionsDoneLabel->setText("You aim for the stomach!");
    if (currentEnemy->getHitPoints() <= 0)
    {
        QMessageBox::information( this, tr("You have won!"), tr("You're battle is done here,\nGo on your quest!") );
        accept();
        this->close();
    } else {
        QMutex mut;
        mut.tryLock(2000);
        mut.unlock();

        ui->actionsDoneLabel->setText("The enemy attacked!");

        currentPlayer->setHitPoints(currentPlayer->getHitPoints() - currentEnemy->getPower()) ;
        if (currentPlayer->getHitPoints() <= 0)
        {
            QMessageBox::information( this, tr("You have lost! D:"), tr("You're quest has ended,\nChoose a new character\n and begin your quest again") );
            accept();
            this->close();
            //NewMainWindow.close(); you cant call a funciton like this
        }
    }

}

void fight::on_attack2_clicked()
{

    currentEnemy->setHitPoints(currentEnemy->getHitPoints() - currentPlayer->getPower()) ;
    ui->actionsDoneLabel->setText("You aim for the head!");
    if (currentEnemy->getHitPoints() <= 0)
    {
        QMessageBox::information( this, tr("You have won!"), tr("You're battle is done here,\nGo on your quest!") );
        accept();
        this->close();
    } else {
        QMutex mut;
        mut.tryLock(2000);
        mut.unlock();

        ui->actionsDoneLabel->setText("The enemy attacked!");

        currentPlayer->setHitPoints(currentPlayer->getHitPoints() - currentEnemy->getPower()) ;
        if (currentPlayer->getHitPoints() <= 0)
        {
            QMessageBox::information( this, tr("You have lost! D:"), tr("You're quest has ended,\nChoose a new character\n and begin your quest again") );
            accept();
            this->close();
            //NewMainWindow.close(); you cant call a function like this
        }
    }

}

void fight::on_healButton_clicked()
{
    /*
    //Have a val in food that if there is something in the vector that foodPresent = true && how much food items are there
    if(currentPlayer->getfoodPresent())
    {
        if(currentPlayer->getHitPoints() + healValue > currentPlayer->getHitPoints())
        {
            //need to store max HP in player and refer to it here
            //currCharHp = Player::hitPoints;
            ui->playerHp->setValue(100);
            amountOfFood--;
        } else {
            currentPlayer->getHitPoints() + healValue;       //hitpoints here should be player's max hp
            ui->playerHp->setValue(((currentPlayer->getHitPoints() + healValue) / hitPoints) * 100);
            amountOfFood--;
        }
        QMutex mut;
        mut.tryLock(2000);
        mut.unlock();

        ui->actionsDoneLabel->setText("The enemy attacked!");
        currentPlayer->setHitPoints(currentPlayer->getHitPoints() - currentEnemy->getPower());
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
    */
}
