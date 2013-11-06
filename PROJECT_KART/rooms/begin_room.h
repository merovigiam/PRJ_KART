#ifndef BEGIN_ROOM_H
#define BEGIN_ROOM_H

#include <QDialog>

namespace Ui {
class begin_room;
}

class begin_room : public QDialog
{
    Q_OBJECT
    
public:
    explicit begin_room(QWidget *parent = 0);
    ~begin_room();
    
private:
    Ui::begin_room *ui;
};

#endif // BEGIN_ROOM_H
