/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_11;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *northButton;
    QPushButton *eastButton;
    QPushButton *southButton;
    QPushButton *westButton;
    QLabel *currentRoomLabel;
    QLabel *minimapLabel;
    QLabel *label_10;
    QLabel *currentStatusLabel;
    QPushButton *aboutButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QProgressBar *currentHealthBar;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QLabel *hemetLabel;
    QLabel *chestplateLabel;
    QLabel *legsLabel;
    QLabel *bootsLabel;
    QLabel *primaryWepLabel;
    QLabel *secondaryWepLabel;
    QPushButton *pushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1079, 592);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(919, 9, 141, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(verticalLayoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);

        pushButton_12 = new QPushButton(verticalLayoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        verticalLayout->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(verticalLayoutWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        verticalLayout->addWidget(pushButton_13);

        pushButton_11 = new QPushButton(verticalLayoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout->addWidget(pushButton_11);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(920, 400, 141, 151));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(verticalLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_8 = new QPushButton(verticalLayoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(verticalLayoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);

        northButton = new QPushButton(centralWidget);
        northButton->setObjectName(QStringLiteral("northButton"));
        northButton->setGeometry(QRect(640, 259, 101, 31));
        eastButton = new QPushButton(centralWidget);
        eastButton->setObjectName(QStringLiteral("eastButton"));
        eastButton->setGeometry(QRect(690, 290, 101, 31));
        southButton = new QPushButton(centralWidget);
        southButton->setObjectName(QStringLiteral("southButton"));
        southButton->setGeometry(QRect(640, 321, 101, 31));
        westButton = new QPushButton(centralWidget);
        westButton->setObjectName(QStringLiteral("westButton"));
        westButton->setGeometry(QRect(590, 290, 101, 31));
        currentRoomLabel = new QLabel(centralWidget);
        currentRoomLabel->setObjectName(QStringLiteral("currentRoomLabel"));
        currentRoomLabel->setGeometry(QRect(540, 20, 311, 191));
        minimapLabel = new QLabel(centralWidget);
        minimapLabel->setObjectName(QStringLiteral("minimapLabel"));
        minimapLabel->setGeometry(QRect(135, 272, 171, 111));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(240, 80, 81, 16));
        currentStatusLabel = new QLabel(centralWidget);
        currentStatusLabel->setObjectName(QStringLiteral("currentStatusLabel"));
        currentStatusLabel->setGeometry(QRect(330, 80, 61, 16));
        aboutButton = new QPushButton(centralWidget);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        aboutButton->setGeometry(QRect(10, 450, 75, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 40, 151, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        currentHealthBar = new QProgressBar(layoutWidget);
        currentHealthBar->setObjectName(QStringLiteral("currentHealthBar"));
        currentHealthBar->setValue(24);

        horizontalLayout->addWidget(currentHealthBar);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 98, 110));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_3->addWidget(label_9);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(120, 30, 48, 110));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        hemetLabel = new QLabel(layoutWidget2);
        hemetLabel->setObjectName(QStringLiteral("hemetLabel"));

        verticalLayout_4->addWidget(hemetLabel);

        chestplateLabel = new QLabel(layoutWidget2);
        chestplateLabel->setObjectName(QStringLiteral("chestplateLabel"));

        verticalLayout_4->addWidget(chestplateLabel);

        legsLabel = new QLabel(layoutWidget2);
        legsLabel->setObjectName(QStringLiteral("legsLabel"));

        verticalLayout_4->addWidget(legsLabel);

        bootsLabel = new QLabel(layoutWidget2);
        bootsLabel->setObjectName(QStringLiteral("bootsLabel"));

        verticalLayout_4->addWidget(bootsLabel);

        primaryWepLabel = new QLabel(layoutWidget2);
        primaryWepLabel->setObjectName(QStringLiteral("primaryWepLabel"));

        verticalLayout_4->addWidget(primaryWepLabel);

        secondaryWepLabel = new QLabel(layoutWidget2);
        secondaryWepLabel->setObjectName(QStringLiteral("secondaryWepLabel"));

        verticalLayout_4->addWidget(secondaryWepLabel);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 480, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        eastButton->raise();
        westButton->raise();
        verticalLayoutWidget->raise();
        verticalLayoutWidget_2->raise();
        northButton->raise();
        southButton->raise();
        currentRoomLabel->raise();
        minimapLabel->raise();
        label_10->raise();
        currentStatusLabel->raise();
        aboutButton->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        pushButton->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "item", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "item", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "item", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "item", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "item", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Use", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "Drop", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Eat", 0));
        northButton->setText(QApplication::translate("MainWindow", "North", 0));
        eastButton->setText(QApplication::translate("MainWindow", "East", 0));
        southButton->setText(QApplication::translate("MainWindow", "South", 0));
        westButton->setText(QApplication::translate("MainWindow", "West", 0));
        currentRoomLabel->setText(QApplication::translate("MainWindow", "                                    Current Room Image", 0));
        minimapLabel->setText(QApplication::translate("MainWindow", "                       Minimap", 0));
        label_10->setText(QApplication::translate("MainWindow", "Current status:", 0));
        currentStatusLabel->setText(QApplication::translate("MainWindow", "Fatigued", 0));
        aboutButton->setText(QApplication::translate("MainWindow", "About", 0));
        label_3->setText(QApplication::translate("MainWindow", "Health:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Helmet:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Chestplate:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Legs:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Boots:", 0));
        label_8->setText(QApplication::translate("MainWindow", "Primary weapon:", 0));
        label_9->setText(QApplication::translate("MainWindow", "Secondary weapon:", 0));
        hemetLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        chestplateLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        legsLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        bootsLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        primaryWepLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        secondaryWepLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
