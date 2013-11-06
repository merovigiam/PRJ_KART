#include "startwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    startWindow s;
    s.exec();
    
    return a.exec();
}
