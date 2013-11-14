#ifndef BEGIN_ROOM_H
#define BEGIN_ROOM_H

#include <QDialog>
#include <QPixmap>
#include <vector>
#include <string>
#include <QtCore>
#include "Room.h"
#include <QMessageBox>
#include "inventory.h"
#include "player.h"
#include "item.h"
#include "minigame1.h"

enum I_INDEX{MAP=0,BKG1=1,BKG2=2};

using namespace std;
namespace Ui {
class begin_room;
}

class begin_room : public QDialog
{
    Q_OBJECT
    
public:
    explicit begin_room(Player *player, QWidget *parent = 0);
    ~begin_room();

    void updateInventoryDisplay(Inventory *inv);
    

    enum ROOM_NU { RN_B=0, RN_C=1, RN_D=2, RN_E=3, RN_F=4, RN_G=5, RN_H=6, RN_I=7, RN_J, RN_K, RN_L, RN_M, RN_N, RN_O, RN_P, RN_Q, RN_R, RN_S, RN_T };
private slots:
    void on_pushButton_9_clicked();

    void on_pushButton_clicked();

    void on_northButton_clicked();

    void on_southButton_clicked();

    void on_eastButton_clicked();

    void on_westButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    int index, index2;
    int layer;
    Ui::begin_room *ui;
    vector<Room *> rooms;
    Room* currentRoom;
    vector<vector<QPixmap> > images;
    Player* player;

    void TESTchangePictures();
    void loadImages();
    string go(string direction);
    void roomCreation();
    void clearLayout(QLayout* layout, bool deleteWidgets);




    const int I_MAX = 3;
    const int G_MAX_ROOMS = 19;
};

#endif // BEGIN_ROOM_H
