/********************************************************************************
** Form generated from reading UI file 'testfolder.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTFOLDER_H
#define UI_TESTFOLDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_testFolder
{
public:

    void setupUi(QDialog *testFolder)
    {
        if (testFolder->objectName().isEmpty())
            testFolder->setObjectName(QStringLiteral("testFolder"));
        testFolder->resize(400, 300);

        retranslateUi(testFolder);

        QMetaObject::connectSlotsByName(testFolder);
    } // setupUi

    void retranslateUi(QDialog *testFolder)
    {
        testFolder->setWindowTitle(QApplication::translate("testFolder", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class testFolder: public Ui_testFolder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTFOLDER_H
