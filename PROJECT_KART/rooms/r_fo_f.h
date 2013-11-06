#ifndef R_FO_F_H
#define R_FO_F_H

#include <QDialog>

namespace Ui {
class r_fo_f;
}

class r_fo_f : public QDialog
{
    Q_OBJECT
    
public:
    explicit r_fo_f(QWidget *parent = 0);
    ~r_fo_f();
    
private:
    Ui::r_fo_f *ui;
};

#endif // R_FO_F_H
