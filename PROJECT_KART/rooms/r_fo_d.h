#ifndef R_FO_D_H
#define R_FO_D_H

#include <QDialog>

namespace Ui {
class r_fo_d;
}

class r_fo_d : public QDialog
{
    Q_OBJECT
    
public:
    explicit r_fo_d(QWidget *parent = 0);
    ~r_fo_d();
    
private:
    Ui::r_fo_d *ui;
};

#endif // R_FO_D_H
