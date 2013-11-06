#ifndef R_FO_C_H
#define R_FO_C_H

#include <QDialog>

namespace Ui {
class r_fo_c;
}

class r_fo_c : public QDialog
{
    Q_OBJECT
    
public:
    explicit r_fo_c(QWidget *parent = 0);
    ~r_fo_c();
    
private:
    Ui::r_fo_c *ui;
};

#endif // R_FO_C_H
