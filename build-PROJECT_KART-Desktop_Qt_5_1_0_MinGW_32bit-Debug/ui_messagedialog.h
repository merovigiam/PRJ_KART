/********************************************************************************
** Form generated from reading UI file 'messagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEDIALOG_H
#define UI_MESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_MessageDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *MessageDialog)
    {
        if (MessageDialog->objectName().isEmpty())
            MessageDialog->setObjectName(QStringLiteral("MessageDialog"));
        MessageDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(MessageDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(MessageDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 46, 13));

        retranslateUi(MessageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MessageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MessageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MessageDialog);
    } // setupUi

    void retranslateUi(QDialog *MessageDialog)
    {
        MessageDialog->setWindowTitle(QApplication::translate("MessageDialog", "Dialog", 0));
        label->setText(QApplication::translate("MessageDialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MessageDialog: public Ui_MessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEDIALOG_H
