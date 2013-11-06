/********************************************************************************
** Form generated from reading UI file 'newmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMAINWINDOW_H
#define UI_NEWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *startButton;
    QProgressBar *healthBar;
    QProgressBar *magicBar;
    QPushButton *rButton;
    QPushButton *aboutButton;
    QPushButton *altButton;
    QLabel *label_7;
    QProgressBar *physicalBar;
    QPushButton *aButton;
    QPushButton *kButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *tButton;
    QPushButton *pushButton;

    void setupUi(QMainWindow *NewMainWindow)
    {
        if (NewMainWindow->objectName().isEmpty())
            NewMainWindow->setObjectName(QStringLiteral("NewMainWindow"));
        NewMainWindow->resize(632, 421);
        centralwidget = new QWidget(NewMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(340, 80, 201, 141));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 120, 191, 16));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(470, 340, 131, 51));
        healthBar = new QProgressBar(centralwidget);
        healthBar->setObjectName(QStringLiteral("healthBar"));
        healthBar->setGeometry(QRect(140, 150, 118, 23));
        healthBar->setValue(24);
        magicBar = new QProgressBar(centralwidget);
        magicBar->setObjectName(QStringLiteral("magicBar"));
        magicBar->setGeometry(QRect(140, 180, 118, 23));
        magicBar->setValue(24);
        rButton = new QPushButton(centralwidget);
        rButton->setObjectName(QStringLiteral("rButton"));
        rButton->setGeometry(QRect(180, 20, 41, 41));
        aboutButton = new QPushButton(centralwidget);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        aboutButton->setGeometry(QRect(20, 320, 75, 31));
        altButton = new QPushButton(centralwidget);
        altButton->setObjectName(QStringLiteral("altButton"));
        altButton->setGeometry(QRect(20, 350, 75, 31));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 30, 321, 21));
        physicalBar = new QProgressBar(centralwidget);
        physicalBar->setObjectName(QStringLiteral("physicalBar"));
        physicalBar->setGeometry(QRect(140, 210, 118, 23));
        physicalBar->setValue(24);
        aButton = new QPushButton(centralwidget);
        aButton->setObjectName(QStringLiteral("aButton"));
        aButton->setGeometry(QRect(140, 20, 41, 41));
        kButton = new QPushButton(centralwidget);
        kButton->setObjectName(QStringLiteral("kButton"));
        kButton->setGeometry(QRect(100, 20, 41, 41));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 150, 85, 81));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        tButton = new QPushButton(centralwidget);
        tButton->setObjectName(QStringLiteral("tButton"));
        tButton->setGeometry(QRect(220, 20, 41, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 310, 75, 23));
        NewMainWindow->setCentralWidget(centralwidget);

        retranslateUi(NewMainWindow);

        QMetaObject::connectSlotsByName(NewMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NewMainWindow)
    {
        NewMainWindow->setWindowTitle(QApplication::translate("NewMainWindow", "MainWindow", 0));
        label_6->setText(QApplication::translate("NewMainWindow", "             Character Image here", 0));
        label_4->setText(QApplication::translate("NewMainWindow", "Class:", 0));
        label_5->setText(QApplication::translate("NewMainWindow", "class type", 0));
        startButton->setText(QApplication::translate("NewMainWindow", "START", 0));
        rButton->setText(QApplication::translate("NewMainWindow", "R", 0));
        aboutButton->setText(QApplication::translate("NewMainWindow", "About", 0));
        altButton->setText(QApplication::translate("NewMainWindow", "Alt", 0));
        label_7->setText(QApplication::translate("NewMainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Known as </span><span style=\" font-size:12pt; font-weight:600;\">CART</span><span style=\" font-size:12pt;\">!</span> // Only show label if alt button is clicked</p></body></html>", 0));
        aButton->setText(QApplication::translate("NewMainWindow", "A", 0));
        kButton->setText(QApplication::translate("NewMainWindow", "K", 0));
        label->setText(QApplication::translate("NewMainWindow", "Health:", 0));
        label_2->setText(QApplication::translate("NewMainWindow", "Magical damage:", 0));
        label_3->setText(QApplication::translate("NewMainWindow", "Physical damage:", 0));
        tButton->setText(QApplication::translate("NewMainWindow", "T", 0));
        pushButton->setText(QApplication::translate("NewMainWindow", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class NewMainWindow: public Ui_NewMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMAINWINDOW_H
