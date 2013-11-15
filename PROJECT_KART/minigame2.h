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

private slots:

    void on_slider1_valueChanged(int value);

    void on_slider2_valueChanged(int value);

    void on_slider3_valueChanged(int value);

    void on_slider4_valueChanged(int value);

    void on_pushButton_clicked();

private:
    Ui::Minigame2 *ui;
};

#endif // MINIGAME2_H
