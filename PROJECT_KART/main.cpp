#include "newmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NewMainWindow s;
    s.show();
    
    return a.exec();
}
