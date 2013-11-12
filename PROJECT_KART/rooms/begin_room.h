#ifndef BEGIN_ROOM_H
#define BEGIN_ROOM_H

#include <QDialog>
#include <QPixmap>
#include <vector>
#include <string>
#include <QtCore>
#include "Room.h"
#include <QMessageBox>

enum I_INDEX{MAP=0,BKG1=1,BKG2=2};

using namespace std;
namespace Ui {
class begin_room;
}

class begin_room : public QDialog
{
    Q_OBJECT
    
public:
    explicit begin_room(QWidget *parent = 0);
    ~begin_room();
    
private slots:
    void on_pushButton_9_clicked();

    void on_pushButton_clicked();

    void on_northButton_clicked();

    void on_southButton_clicked();

    void on_eastButton_clicked();

    void on_westButton_clicked();

private:
    int index;
    int index2;
    Ui::begin_room *ui;
    vector<vector<QPixmap> > images;
    void loadImages();
    string go(string direction);
    vector<Room *> rooms;
    Room* currentRoom;

    enum ROOM_NU { RN_B=0, RN_C=1, RN_D=2, RN_E, RN_F, RN_G, RN_H, RN_I, RN_J, RN_K, RN_L, RN_N, RN_M, RN_O, RN_P, RN_Q, RN_R, RN_S, RN_T };

    void roomCreation();

    const int I_MAX = 3;
    const int G_MAX_ROOMS = 19;
};

#endif // BEGIN_ROOM_H
