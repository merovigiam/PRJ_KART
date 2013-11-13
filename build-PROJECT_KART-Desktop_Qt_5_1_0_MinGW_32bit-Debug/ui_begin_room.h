/********************************************************************************
** Form generated from reading UI file 'begin_room.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEGIN_ROOM_H
#define UI_BEGIN_ROOM_H

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

class Ui_begin_room
{
public:
    QLabel *minimapLabel;
    QPushButton *southButton;
    QPushButton *aboutButton;
    QLabel *currentRoomLabel;
    QLabel *label_10;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *hemetLabel;
    QLabel *chestplateLabel;
    QLabel *legsLabel;
    QLabel *bootsLabel;
    QLabel *primaryWepLabel;
    QLabel *secondaryWepLabel;
    QPushButton *pushButton;
    QLabel *currentStatusLabel;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QProgressBar *currentHealthBar;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *eastButton;
    QPushButton *northButton;
    QPushButton *westButton;

    void setupUi(QDialog *begin_room)
    {
        if (begin_room->objectName().isEmpty())
            begin_room->setObjectName(QStringLiteral("begin_room"));
        begin_room->resize(831, 567);
        minimapLabel = new QLabel(begin_room);
        minimapLabel->setObjectName(QStringLiteral("minimapLabel"));
        minimapLabel->setGeometry(QRect(30, 220, 141, 81));
        minimapLabel->setMaximumSize(QSize(231, 16777215));
        southButton = new QPushButton(begin_room);
        southButton->setObjectName(QStringLiteral("southButton"));
        southButton->setGeometry(QRect(620, 431, 101, 31));
        aboutButton = new QPushButton(begin_room);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        aboutButton->setGeometry(QRect(20, 450, 75, 23));
        currentRoomLabel = new QLabel(begin_room);
        currentRoomLabel->setObjectName(QStringLiteral("currentRoomLabel"));
        currentRoomLabel->setGeometry(QRect(470, 50, 331, 221));
        label_10 = new QLabel(begin_room);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(250, 80, 81, 16));
        layoutWidget = new QWidget(begin_room);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 30, 48, 110));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        hemetLabel = new QLabel(layoutWidget);
        hemetLabel->setObjectName(QStringLiteral("hemetLabel"));

        verticalLayout_4->addWidget(hemetLabel);

        chestplateLabel = new QLabel(layoutWidget);
        chestplateLabel->setObjectName(QStringLiteral("chestplateLabel"));

        verticalLayout_4->addWidget(chestplateLabel);

        legsLabel = new QLabel(layoutWidget);
        legsLabel->setObjectName(QStringLiteral("legsLabel"));

        verticalLayout_4->addWidget(legsLabel);

        bootsLabel = new QLabel(layoutWidget);
        bootsLabel->setObjectName(QStringLiteral("bootsLabel"));

        verticalLayout_4->addWidget(bootsLabel);

        primaryWepLabel = new QLabel(layoutWidget);
        primaryWepLabel->setObjectName(QStringLiteral("primaryWepLabel"));

        verticalLayout_4->addWidget(primaryWepLabel);

        secondaryWepLabel = new QLabel(layoutWidget);
        secondaryWepLabel->setObjectName(QStringLiteral("secondaryWepLabel"));

        verticalLayout_4->addWidget(secondaryWepLabel);

        pushButton = new QPushButton(begin_room);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 480, 75, 23));
        currentStatusLabel = new QLabel(begin_room);
        currentStatusLabel->setObjectName(QStringLiteral("currentStatusLabel"));
        currentStatusLabel->setGeometry(QRect(340, 80, 61, 16));
        layoutWidget_2 = new QWidget(begin_room);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(250, 40, 151, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        currentHealthBar = new QProgressBar(layoutWidget_2);
        currentHealthBar->setObjectName(QStringLiteral("currentHealthBar"));
        currentHealthBar->setValue(24);

        horizontalLayout->addWidget(currentHealthBar);

        layoutWidget_3 = new QWidget(begin_room);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 30, 98, 110));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_3->addWidget(label_9);

        eastButton = new QPushButton(begin_room);
        eastButton->setObjectName(QStringLiteral("eastButton"));
        eastButton->setGeometry(QRect(670, 400, 101, 31));
        northButton = new QPushButton(begin_room);
        northButton->setObjectName(QStringLiteral("northButton"));
        northButton->setGeometry(QRect(620, 369, 101, 31));
        westButton = new QPushButton(begin_room);
        westButton->setObjectName(QStringLiteral("westButton"));
        westButton->setGeometry(QRect(570, 400, 101, 31));

        retranslateUi(begin_room);

        QMetaObject::connectSlotsByName(begin_room);
    } // setupUi

    void retranslateUi(QDialog *begin_room)
    {
        begin_room->setWindowTitle(QApplication::translate("begin_room", "Dialog", 0));
        minimapLabel->setText(QString());
        southButton->setText(QApplication::translate("begin_room", "South", 0));
        aboutButton->setText(QApplication::translate("begin_room", "About", 0));
        currentRoomLabel->setText(QString());
        label_10->setText(QApplication::translate("begin_room", "Current status:", 0));
        hemetLabel->setText(QApplication::translate("begin_room", "None", 0));
        chestplateLabel->setText(QApplication::translate("begin_room", "None", 0));
        legsLabel->setText(QApplication::translate("begin_room", "None", 0));
        bootsLabel->setText(QApplication::translate("begin_room", "None", 0));
        primaryWepLabel->setText(QApplication::translate("begin_room", "None", 0));
        secondaryWepLabel->setText(QApplication::translate("begin_room", "None", 0));
        pushButton->setText(QApplication::translate("begin_room", "Exit", 0));
        currentStatusLabel->setText(QApplication::translate("begin_room", "Fatigued", 0));
        label_3->setText(QApplication::translate("begin_room", "Health:", 0));
        label_4->setText(QApplication::translate("begin_room", "<html><head/><body><p><span style=\" color:#ffffff;\">Helmet:</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("begin_room", "<html><head/><body><p><span style=\" color:#ffffff;\">Chestplate:</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("begin_room", "<html><head/><body><p><span style=\" color:#ffffff;\">Legs:</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("begin_room", "<html><head/><body><p><span style=\" color:#ffffff;\">Boots:</span></p></body></html>", 0));
        label_8->setText(QApplication::translate("begin_room", "<html><head/><body><p><span style=\" color:#ffffff;\">Primary weapon:</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("begin_room", "<html><head/><body><p><span style=\" color:#ffffff;\">Secondary weapon:</span></p></body></html>", 0));
        eastButton->setText(QApplication::translate("begin_room", "East", 0));
        northButton->setText(QApplication::translate("begin_room", "North", 0));
        westButton->setText(QApplication::translate("begin_room", "West", 0));
    } // retranslateUi

};

namespace Ui {
    class begin_room: public Ui_begin_room {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEGIN_ROOM_H
