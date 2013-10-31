#include "g.h"

G::G()
{
}

void G::messageDialog(string title, string text, QWidget* form) {
    QMessageBox *msgBox = new QMessageBox(form);
    msgBox->setText(title);
    msgBox->setWindowModality(Qt::NonModal);
    msgBox->setInformativeText(text);
    //msgBox->setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox->setStandardButtons(QMessageBox::Ok);
    msgBox->setDefaultButton(QMessageBox::Ok);
    int ret = msgBox->exec();
}

static bool askYesNo(string title, string message, QWidget* form){
    QMessageBox *msgBox = new QMessageBox(form);
    msgBox->setText(title);
    msgBox->setWindowModality(Qt::NonModal);
    msgBox->setInformativeText(text);
    msgBox->setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox->setStandardButtons(QMessageBox::Ok);
    msgBox->setDefaultButton(QMessageBox::Ok);
    int ret = msgBox->exec();
    if(ret == QMessageBox::Yes)
        return true;
    else
        return false;


}
