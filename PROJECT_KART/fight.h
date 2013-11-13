#ifndef FIGHT_H
#define FIGHT_H

#include <QMessageBox>
#include <QMutex>
#include <QDialog>
#include "newmainwindow.h"
#include "player.h"
#include "enemy.h"

namespace Ui {
class fight;
}

class fight : public QDialog
{
    Q_OBJECT
    
public:
    explicit fight(Player *player, Enemy *enemy, QWidget *parent = 0);
    ~fight();
    
private slots:
    void on_attack3_clicked();

    void on_attack1_clicked();

    void on_attack2_clicked();

    void on_healButton_clicked();

private:
    Ui::fight *ui;
    Player *currentPlayer ;
    Enemy *currentEnemy ;
};

#endif // FIGHT_H
