#ifndef R_FO_E_H
#define R_FO_E_H

#include <QDialog>

namespace Ui {
class r_fo_e;
}

class r_fo_e : public QDialog
{
    Q_OBJECT
    
public:
    explicit r_fo_e(QWidget *parent = 0);
    ~r_fo_e();
    
private:
    Ui::r_fo_e *ui;
};

#endif // R_FO_E_H
