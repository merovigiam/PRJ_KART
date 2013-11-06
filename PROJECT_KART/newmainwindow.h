#ifndef NEWMAINWINDOW_H
#define NEWMAINWINDOW_H

#include <QMainWindow>
#include "mainwindow.h"
#include "about.h"
#include "rooms/begin_room.h"

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

private:
    Ui::NewMainWindow *ui;
};

#endif // NEWMAINWINDOW_H
