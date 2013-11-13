#include "begin_room.h"
#include "ui_begin_room.h"

begin_room::begin_room(Player* player, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::begin_room)
{
    this->player = player;
    index = 0;
    index2 = 0;
    ui->setupUi(this);
    loadImages();
    ui->minimapLabel->setPixmap(images[0][0]);
    //label->setPixmap(QPixmap("C:/Users/manolis/Desktop/data/test.png", 0, Qt::AutoColor));


    void roomCreation();
}

void begin_room::roomCreation(){
    rooms.resize(G_MAX_ROOMS);
    char c = 'b';
    for(int i=0;i<G_MAX_ROOMS;i++) {
        rooms.push_back(new Room(""+c));
    }

    //                   (N, E, S, W)
    rooms[RN_B]->setExits(NULL, rooms[RN_C], NULL, NULL);
    rooms[RN_C]->setExits(rooms[RN_F], rooms[RN_D], NULL, rooms[RN_B]);
    rooms[RN_D]->setExits(NULL, NULL, rooms[RN_E], rooms[RN_C]);
    rooms[RN_E]->setExits(rooms[RN_D], NULL, NULL, NULL);
    rooms[RN_F]->setExits(rooms[RN_G], NULL , rooms[RN_C], NULL);
    rooms[RN_G]->setExits(rooms[RN_H], NULL, rooms[RN_F], NULL);
    rooms[RN_H]->setExits(rooms[RN_L], rooms[RN_I], rooms[RN_G], rooms[RN_J]);
    rooms[RN_I]->setExits(NULL,NULL,NULL, rooms[RN_H]);
    rooms[RN_J]->setExits(rooms[RN_K], rooms[RN_H], NULL,NULL);
    rooms[RN_K]->setExits(NULL,NULL, rooms[RN_J], rooms[RN_L]);
    rooms[RN_L]->setExits(NULL, rooms[RN_M], rooms[RN_H], rooms[RN_K]);
    rooms[RN_M]->setExits(rooms[RN_N], NULL,NULL, rooms[RN_L]);
    rooms[RN_N]->setExits(rooms[RN_P], rooms[RN_S], rooms[RN_M], rooms[RN_O]);
    rooms[RN_O]->setExits(NULL,NULL,NULL, rooms[RN_N]);
    rooms[RN_P]->setExits(NULL, rooms[RN_Q], rooms[RN_N], rooms[RN_R]);
    rooms[RN_Q]->setExits(NULL,NULL,NULL, rooms[RN_P]);
    rooms[RN_R]->setExits(NULL, rooms[RN_P], NULL ,NULL);
    rooms[RN_S]->setExits(NULL, rooms[RN_N], rooms[RN_T], NULL);
    rooms[RN_T]->setExits(rooms[RN_S], NULL,NULL,NULL);
    //                   (N, E, S, W)
}

begin_room::~begin_room()
{
    delete ui;

    //TODO: free rooms from memory
    //for(int i=0;i<G_MAX_ROOMS;i++)
      //  rooms[i]->

}

void begin_room::loadImages(){
    string name;

   // name = QCoreApplication::applicationDirPath().toStdString();
   // name =QDir::current().path().toStdString();
   // name =QDir::current().absolutePath().toStdString();
    FILE *file = NULL;
    string pattern1 = ".jpg";
    //must copy all the images to this directory: C:\prj_kart\rooms
    string pattern2 = ".png";
    string pattern0 =  "C:\\prj_kart\\rooms\\"; //i tryed almost everything and googleed, but no better solution found.
    if(images.size() > 0) {
        for(int i=0;i<images.size();i++) {
            images[i].clear();
        }
    }
    images.clear();
    images.resize(I_MAX);

    for(int j=0;j<I_MAX;j++) {
        images[j].resize(G_MAX_ROOMS);
        int counter=0;
        for(char i='b' ;i<= 't'; i++,counter++) {
            switch (j) {
                case MAP:
                    // system("cmd");testing
                    name = pattern0+i+pattern2;
                   // file = fopen(name.c_str(),"r"); testing
                    images[j][counter] = QPixmap(QString(name.c_str()), 0, Qt::AutoColor);
                break;
                case BKG1:
                    name = pattern0+i+"1"+pattern1;
                    images[j][counter] = QPixmap(QString(name.c_str()), 0, Qt::AutoColor);
                    break;
                case BKG2:
                    name = pattern0+i+"2"+pattern1;
                    images[j][counter] = QPixmap(QString(name.c_str()), 0, Qt::AutoColor);
                    break;
            }
        }
    }
}

void begin_room::on_pushButton_9_clicked()
{
    index2++;
    if(index2 >= G_MAX_ROOMS) {
        index2=0;
        index++;
    }
    if(index >= I_MAX) {
        index2=0;
        index=0;
    }
    ui->minimapLabel->setPixmap(images[index][index2]);
}

void begin_room::on_pushButton_clicked()
{
    this->close();
}


void begin_room::on_northButton_clicked()
{
    //north
    go("north");
    //QMessageBox::information(NULL, "Hello World!", "Hi!");
}

void begin_room::on_southButton_clicked()
{
    //south
    go("south");
}

void begin_room::on_eastButton_clicked()
{
    //east
    go("east");
}

void begin_room::on_westButton_clicked()
{
    //west
    go("west");
}

string begin_room::go(string direction) {
    Room* nextRoom = currentRoom->nextRoom(direction);
    if (nextRoom == NULL)
        return("direction null");
    else
    {
        currentRoom = nextRoom;
        return currentRoom->longDescription();
    }
}

void begin_room::TESTchangePictures()
{
    index2++;
    if(index2 >= G_MAX_ROOMS) {
        index2=0;
        index++;
    }
    if(index >= I_MAX) {
        index2=0;
        index=0;
    }
    ui->minimapLabel->setPixmap(images[index][index2]);
}

void begin_room::on_pushButton_3_clicked()
{
    TESTchangePictures();
}

void begin_room::clearLayout(QLayout* layout, bool deleteWidgets)
{
    while (QLayoutItem* item = layout->takeAt(0))
    {
        if (deleteWidgets)
        {
            if (QWidget* widget = item->widget())
                delete widget;
        }
        if (QLayout* childLayout = item->layout())
            clearLayout(childLayout, deleteWidgets);
        delete item;
    }
}

void begin_room::updateInventoryDisplay(Inventory* inv){
    int size = ui->inventoryDisplay->count();

    clearLayout(ui->inventoryDisplay->layout(),true);
    size = inv->getSizeInv();
    for(int i=0; i < size ; i++) {
        ui->inventoryDisplay->addWidget(new QPushButton(inv->getItemAt(i).getDescription().c_str(),this));
    }
}

void begin_room::on_pushButton_4_clicked()
{
    Inventory* pl = new Inventory();
    pl->addItem(new Item("x"));
    pl->addItem(new Item("y"));
    pl->addItem(new Item("z"));
    updateInventoryDisplay(pl);
    delete pl;
}

