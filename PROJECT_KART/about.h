#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>
#include <QTimer>
#include <QDebug>
namespace Ui {
class About;
}

class About : public QDialog
{
    Q_OBJECT
    
public:
    explicit About(QWidget *parent = 0);
    ~About();

private:
    int displayCounter;
    Ui::About *ui;
    QTimer *timer;
    void setTimer(int miliseconds);
public slots:
     void test();
private slots:
     void on_pushButton_2_clicked();
};

#endif // ABOUT_H
