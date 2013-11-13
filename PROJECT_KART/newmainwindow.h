#ifndef NEWMAINWINDOW_H
#define NEWMAINWINDOW_H

#include <QMainWindow>

#include "about.h"
#include "rooms/begin_room.h"

#include "messagedialog.h"
#include "minigame1.h"
#include "player.h"

namespace Ui {
class NewMainWindow;
}

class NewMainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit NewMainWindow(QWidget *parent = 0);
    ~NewMainWindow();
    
private slots:
    void on_startButton_clicked();

    void on_pushButton_clicked();

    void on_aboutButton_clicked();

    void on_kButton_clicked();
    
    void on_aButton_clicked();
    
    void on_rButton_clicked();
    
    void on_tButton_clicked();
    
    void on_altButton_clicked();
    
    void on_exitButton_clicked();

private:
    Ui::NewMainWindow *ui;
	bool characterChosen = false;
    Player* player;
};

#endif // NEWMAINWINDOW_H
