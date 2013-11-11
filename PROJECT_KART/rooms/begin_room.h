#ifndef BEGIN_ROOM_H
#define BEGIN_ROOM_H

#include <QDialog>
#include <QPixmap>
#include <vector>
#include <string>
#include <QtCore>


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

private:
    int index;
    int index2;
    Ui::begin_room *ui;
    vector<vector<QPixmap> > images;
    void loadImages();


    const int I_MAX = 3;
    const int G_MAX_ROOMS = 19;
};

#endif // BEGIN_ROOM_H
