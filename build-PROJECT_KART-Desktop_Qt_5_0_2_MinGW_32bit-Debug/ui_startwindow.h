/********************************************************************************
** Form generated from reading UI file 'startwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startWindow
{
public:
    QPushButton *kButton;
    QPushButton *aButton;
    QPushButton *rButton;
    QPushButton *tButton;
    QProgressBar *healthBar;
    QProgressBar *magicBar;
    QProgressBar *physicalBar;
    QLabel *label_6;
    QPushButton *aboutButton;
    QPushButton *startButton;
    QPushButton *altButton;
    QLabel *label_7;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *startWindow)
    {
        if (startWindow->objectName().isEmpty())
            startWindow->setObjectName(QStringLiteral("startWindow"));
        startWindow->resize(661, 428);
        kButton = new QPushButton(startWindow);
        kButton->setObjectName(QStringLiteral("kButton"));
        kButton->setGeometry(QRect(110, 30, 41, 41));
        aButton = new QPushButton(startWindow);
        aButton->setObjectName(QStringLiteral("aButton"));
        aButton->setGeometry(QRect(150, 30, 41, 41));
        rButton = new QPushButton(startWindow);
        rButton->setObjectName(QStringLiteral("rButton"));
        rButton->setGeometry(QRect(190, 30, 41, 41));
        tButton = new QPushButton(startWindow);
        tButton->setObjectName(QStringLiteral("tButton"));
        tButton->setGeometry(QRect(230, 30, 41, 41));
        healthBar = new QProgressBar(startWindow);
        healthBar->setObjectName(QStringLiteral("healthBar"));
        healthBar->setGeometry(QRect(150, 160, 118, 23));
        healthBar->setValue(24);
        magicBar = new QProgressBar(startWindow);
        magicBar->setObjectName(QStringLiteral("magicBar"));
        magicBar->setGeometry(QRect(150, 190, 118, 23));
        magicBar->setValue(24);
        physicalBar = new QProgressBar(startWindow);
        physicalBar->setObjectName(QStringLiteral("physicalBar"));
        physicalBar->setGeometry(QRect(150, 220, 118, 23));
        physicalBar->setValue(24);
        label_6 = new QLabel(startWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(350, 90, 201, 141));
        aboutButton = new QPushButton(startWindow);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        aboutButton->setGeometry(QRect(30, 330, 75, 31));
        startButton = new QPushButton(startWindow);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(480, 350, 131, 51));
        altButton = new QPushButton(startWindow);
        altButton->setObjectName(QStringLiteral("altButton"));
        altButton->setGeometry(QRect(30, 360, 75, 31));
        label_7 = new QLabel(startWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(290, 40, 321, 21));
        widget = new QWidget(startWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 130, 191, 16));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        widget1 = new QWidget(startWindow);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(50, 160, 85, 81));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        kButton->raise();
        aButton->raise();
        rButton->raise();
        tButton->raise();
        healthBar->raise();
        magicBar->raise();
        physicalBar->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        aboutButton->raise();
        startButton->raise();
        altButton->raise();
        label_7->raise();

        retranslateUi(startWindow);

        QMetaObject::connectSlotsByName(startWindow);
    } // setupUi

    void retranslateUi(QDialog *startWindow)
    {
        startWindow->setWindowTitle(QApplication::translate("startWindow", "Dialog", 0));
        kButton->setText(QApplication::translate("startWindow", "K", 0));
        aButton->setText(QApplication::translate("startWindow", "A", 0));
        rButton->setText(QApplication::translate("startWindow", "R", 0));
        tButton->setText(QApplication::translate("startWindow", "T", 0));
        label_6->setText(QApplication::translate("startWindow", "             Character Image here", 0));
        aboutButton->setText(QApplication::translate("startWindow", "About", 0));
        startButton->setText(QApplication::translate("startWindow", "START", 0));
        altButton->setText(QApplication::translate("startWindow", "Alt", 0));
        label_7->setText(QApplication::translate("startWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Known as </span><span style=\" font-size:12pt; font-weight:600;\">CART</span><span style=\" font-size:12pt;\">!</span> // Only show label if alt button is clicked</p></body></html>", 0));
        label_4->setText(QApplication::translate("startWindow", "Class:", 0));
        label_5->setText(QApplication::translate("startWindow", "class type", 0));
        label->setText(QApplication::translate("startWindow", "Health:", 0));
        label_2->setText(QApplication::translate("startWindow", "Magical damage:", 0));
        label_3->setText(QApplication::translate("startWindow", "Physical damage:", 0));
    } // retranslateUi

};

namespace Ui {
    class startWindow: public Ui_startWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
