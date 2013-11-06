#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QDialog>
#include "rooms/begin_room.h"
#include "about.h"
#include "mainwindow.h"

namespace Ui {
class startWindow;
}

class startWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit startWindow(QWidget *parent = 0);
    ~startWindow();
    
private slots:
    void on_aboutButton_clicked();

    void on_altButton_clicked();

    void on_kButton_clicked();

    void on_aButton_clicked();

    void on_rButton_clicked();

    void on_tButton_clicked();

    void on_startButton_clicked();

private:
    Ui::startWindow *ui;
};

#endif // STARTWINDOW_H
