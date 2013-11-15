#ifndef MINIGAME2_H
#define MINIGAME2_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class Minigame2;
}

class Minigame2 : public QDialog
{
    Q_OBJECT

public:
    explicit Minigame2(QWidget *parent = 0);
    ~Minigame2();
    inline bool getDone() {
        return done;
    }

private slots:

    void on_slider1_valueChanged(int value);

    void on_slider2_valueChanged(int value);

    void on_slider3_valueChanged(int value);

    void on_slider4_valueChanged(int value);

    void on_pushButton_clicked();

private:
    Ui::Minigame2 *ui;
    bool done;
    int targetLock1, targetLock2, targetLock3, targetLock4;
};

#endif // MINIGAME2_H
