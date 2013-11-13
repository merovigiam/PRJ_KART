#ifndef MESSAGEDIALOG_H
#define MESSAGEDIALOG_H

#include <QDialog>
#include <string>

using namespace std;
namespace Ui {
class MessageDialog;
}

class MessageDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit MessageDialog( string message, QWidget *parent = 0);
    ~MessageDialog();
    
private:
    Ui::MessageDialog *ui;
};

#endif // MESSAGEDIALOG_H
