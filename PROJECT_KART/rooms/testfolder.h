#ifndef TESTFOLDER_H
#define TESTFOLDER_H

#include <QDialog>

namespace Ui {
class testFolder;
}

class testFolder : public QDialog
{
    Q_OBJECT
    
public:
    explicit testFolder(QWidget *parent = 0);
    ~testFolder();
    
private:
    Ui::testFolder *ui;
};

#endif // TESTFOLDER_H
