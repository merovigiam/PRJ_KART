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

/*Do you even pointer?
 *const int myconstant = 10
An int which can't change value. Similar to #define in C but better.
const int * myconstant
Variable pointer to a constant integer.
int const * myconstant
Same as above.
int * const myconstant
Constant pointer to a variable integer.
int const * const myconstant
Constant pointer to a constant integer.
void mymethod(QString const & myparamater)
myparamater will not be altered by the method. & means it can be altered but here we just want it to be used because it saves taking a copy.
class myclass {
void mymethod() const;
int myvariable; }
mymethod() will not alter any member variable (myvariable), this means you can call the method from a const variable.
const int*const mymethod(const int*const&)const
It will return a pointer which is constant and points to a constant integer, the method doesn't alter either the variable pointed to by the paramater or the pointer itself and it doesn't alter any of the member variables of the object the method is it.

*/
