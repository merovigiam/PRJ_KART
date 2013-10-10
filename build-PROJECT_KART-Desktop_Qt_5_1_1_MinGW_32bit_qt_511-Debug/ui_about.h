/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QPlainTextEdit *plainTextEdit;
    QScrollBar *horizontalScrollBar;
    QScrollBar *verticalScrollBar;
    QScrollBar *horizontalScrollBar_2;
    QScrollBar *verticalScrollBar_2;
    QLCDNumber *lcdNumber;
    QProgressBar *progressBar;
    QPushButton *pushButton_2;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(400, 384);
        plainTextEdit = new QPlainTextEdit(About);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setEnabled(false);
        plainTextEdit->setGeometry(QRect(120, 180, 261, 161));
        horizontalScrollBar = new QScrollBar(About);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(10, 10, 381, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        verticalScrollBar = new QScrollBar(About);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(10, 30, 16, 341));
        verticalScrollBar->setOrientation(Qt::Vertical);
        horizontalScrollBar_2 = new QScrollBar(About);
        horizontalScrollBar_2->setObjectName(QStringLiteral("horizontalScrollBar_2"));
        horizontalScrollBar_2->setGeometry(QRect(30, 30, 361, 16));
        horizontalScrollBar_2->setOrientation(Qt::Horizontal);
        verticalScrollBar_2 = new QScrollBar(About);
        verticalScrollBar_2->setObjectName(QStringLiteral("verticalScrollBar_2"));
        verticalScrollBar_2->setGeometry(QRect(30, 50, 16, 321));
        verticalScrollBar_2->setOrientation(Qt::Vertical);
        lcdNumber = new QLCDNumber(About);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(330, 50, 64, 23));
        progressBar = new QProgressBar(About);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(50, 50, 281, 23));
        progressBar->setValue(24);
        pushButton_2 = new QPushButton(About);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 350, 75, 23));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Dialog", 0));
        plainTextEdit->setPlainText(QApplication::translate("About", "University of Limerick\n"
"CS4076 - 2013\n"
"Students:\n"
"\n"
"ID: ,\n"
"ID: ,\n"
"ID: ,\n"
"ID: 13102966, Tiago Elias Vicente\n"
"", 0));
#ifndef QT_NO_ACCESSIBILITY
        lcdNumber->setAccessibleName(QApplication::translate("About", "lcd", 0));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        progressBar->setAccessibleName(QApplication::translate("About", "pBar", 0));
#endif // QT_NO_ACCESSIBILITY
        pushButton_2->setText(QApplication::translate("About", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
