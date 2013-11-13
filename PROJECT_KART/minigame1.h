#ifndef MINIGAME1_H
#define MINIGAME1_H

#include <QDialog>
#include <vector>
#include <QMessageBox>

using namespace std;

namespace Ui {
class MiniGame1;
}

class MiniGame1 : public QDialog
{
    Q_OBJECT

public:
    explicit MiniGame1(QWidget *parent = 0);
    ~MiniGame1();

private slots:
    void on_horizontalScrollBar_2_rangeChanged(int min, int max);

    void on_horizontalScroll_valueChanged(int value);

    void on_horizontalScroll_sliderMoved(int position);

    void on_verticalScroll_sliderMoved(int position);

private:
    Ui::MiniGame1 *ui;
    vector<QPushButton*> buttons;


    bool checkCollision(int r1x1,int r1x2,int r1y1,int r1y2,int r2x1,int r2x2,int r2y1,int r2y2);
    bool checkAllColisions(int intentionX,int intentionY);
    bool checkFinish();
};

#endif // MINIGAME1_H
