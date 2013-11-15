#include "minigame1.h"
#include "ui_minigame1.h"

MiniGame1::MiniGame1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MiniGame1)
{
    ui->setupUi(this);
    buttons.push_back(ui->pushButton);
    buttons.push_back(ui->pushButton_2);
    buttons.push_back(ui->pushButton_3);
    buttons.push_back(ui->pushButton_4);
    buttons.push_back(ui->pushButton_5);
    buttons.push_back(ui->pushButton_6);
    buttons.push_back(ui->pushButton_7);
    buttons.push_back(ui->pushButton_8);
    buttons.push_back(ui->pushButton_9);
    buttons.push_back(ui->pushButton_10);
    buttons.push_back(ui->pushButton_11);
    buttons.push_back(ui->pushButton_12);
    buttons.push_back(ui->pushButton_13);
    buttons.push_back(ui->pushButton_14);
    buttons.push_back(ui->pushButton_15);
    buttons.push_back(ui->pushButton_16);
    done = false;

    QMessageBox::information(NULL, "Instructions", "Use the scroll bars to move yourself to the Exit. You are allowed to teleport between the boxes, but try to avoid them.");
}

MiniGame1::~MiniGame1()
{
    delete ui;
}

void MiniGame1::on_horizontalScrollBar_2_rangeChanged(int min, int max)
{

}

void MiniGame1::on_horizontalScroll_valueChanged(int value)
{


}

void MiniGame1::on_horizontalScroll_sliderMoved(int position)
{
    if(!checkAllColisions(position,ui->me->y()))
    {
        QRect anew  = ui->me->geometry();
        anew.moveTo(position,anew.y());
        ui->me->setGeometry(anew);
        if(checkFinish()) {
            QMessageBox::information(NULL, "Congratulations!", "You successfully finished the mini game. you may proceed now.");
            done = true;
            this->close();
        }
    }
}

void MiniGame1::on_verticalScroll_sliderMoved(int position)
{
    if(!checkAllColisions(ui->me->x(),position)) {
        QRect anew  = ui->me->geometry();
        anew.moveTo(anew.x(),position);
        ui->me->setGeometry(anew);
        if(checkFinish()) {
            QMessageBox::information(NULL, "Congratulations!", "You successfully finished the mini game. you may proceed now.");
            done = true;
            this->close();
        }
    }
}

bool MiniGame1::checkCollision(int r1x1,int r1x2,int r1y1,int r1y2,int r2x1,int r2x2,int r2y1,int r2y2) {
//    box1_x2 > box2_x1 and box1_x1 < box2_x2 and box1_y2 > box2_y1 and box1_y1 < box2_y2
    if (r1x2 > r2x1 && r1x1 < r2x2 && r1y2 > r2y1 && r1y1 < r2y2)
//                r1x1 < r2x2 && r1x2 > r2x1 && r1y1 < r2y2 && r1y2 > r2y1)
        return true;
    else
        return false;
}

bool MiniGame1::checkAllColisions(int intentionX,int intentionY){
    bool output = false;
    int r1x1,r1x2,r1y1,r1y2,r2x1,r2x2,r2y1,r2y2;
    r1x1 =  intentionX;
    r1x2 =  ui->me->geometry().width()  + intentionX;
    r1y1 =   intentionY;
    r1y2 =   ui->me->geometry().height() +  intentionY;

    for(int i=0;i < buttons.size();i++) {
        r2x1 = buttons[i]->geometry().x();
        r2x2 = buttons[i]->geometry().x() + buttons[i]->geometry().width();
        r2y1 = buttons[i]->geometry().y();
        r2y2 = buttons[i]->geometry().y() + buttons[i]->geometry().height();
        output = output|checkCollision(r1x1,r1x2,r1y1,r1y2,r2x1,r2x2,r2y1,r2y2);
    }
    return output;
}

bool MiniGame1::checkFinish(){

    int r1x1,r1x2,r1y1,r1y2,r2x1,r2x2,r2y1,r2y2;
    r1x1 = ui->me->geometry().x()                                  ;
    r1x2 = ui->me->geometry().x() + ui->me->geometry().width()  ;
    r1y1 = ui->me->geometry().y() ;
    r1y2 = ui->me->geometry().y() + ui->me->geometry().height();

    r2x1 = ui->exit->geometry().x();
    r2x2 = ui->exit->geometry().x() + ui->exit->geometry().width();
    r2y1 = ui->exit->geometry().y();
    r2y2 = ui->exit->geometry().y() + ui->exit->geometry().height();
    if(checkCollision(r1x1,r1x2,r1y1,r1y2,r2x1,r2x2,r2y1,r2y2))
        return true;
    else
        return false;
}
