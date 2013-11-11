#include "begin_room.h"
#include "ui_begin_room.h"

begin_room::begin_room(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::begin_room)
{
    index = 0;
    index2 = 0;
    ui->setupUi(this);
    loadImages();
    ui->minimapLabel->setPixmap(images[0][0]);
    //label->setPixmap(QPixmap("C:/Users/manolis/Desktop/data/test.png", 0, Qt::AutoColor));
}

begin_room::~begin_room()
{
    delete ui;

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
                name = (pattern0+i+pattern2);
               // file = fopen(name.c_str(),"r"); testing
                images[j][counter] = QPixmap(QString(name.c_str()), 0, Qt::AutoColor);


                break;
            case BKG1:
                name = (pattern0+i+"1"+pattern1);
                images[j][counter] = QPixmap(QString(name.c_str()), 0, Qt::AutoColor);

                break;

            case BKG2:
                name = (pattern0+i+"2"+pattern1);
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
