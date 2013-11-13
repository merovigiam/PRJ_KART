#ifndef FIGHT_H
#define FIGHT_H

#include <QDialog>

namespace Ui {
class fight;
}

class fight : public QDialog
{
    Q_OBJECT
    
public:
    explicit fight(QWidget *parent = 0);
    ~fight();
    
private slots:
    void on_attack3_clicked();

    void on_attack1_clicked();

    void on_attack2_clicked();

    void on_healButton_clicked();

private:
    Ui::fight *ui;
    int currCharHp;
    int currEnemyHp;
    bool foodPresent;
    int amountOfFood;
};

#endif // FIGHT_H
