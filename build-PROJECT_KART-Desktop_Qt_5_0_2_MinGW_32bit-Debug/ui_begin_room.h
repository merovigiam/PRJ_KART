/********************************************************************************
** Form generated from reading UI file 'begin_room.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_11;
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
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
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
        begin_room->resize(1083, 568);
        minimapLabel = new QLabel(begin_room);
        minimapLabel->setObjectName(QStringLiteral("minimapLabel"));
        minimapLabel->setGeometry(QRect(145, 272, 171, 111));
        southButton = new QPushButton(begin_room);
        southButton->setObjectName(QStringLiteral("southButton"));
        southButton->setGeometry(QRect(650, 321, 101, 31));
        aboutButton = new QPushButton(begin_room);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        aboutButton->setGeometry(QRect(20, 450, 75, 23));
        currentRoomLabel = new QLabel(begin_room);
        currentRoomLabel->setObjectName(QStringLiteral("currentRoomLabel"));
        currentRoomLabel->setGeometry(QRect(550, 20, 311, 191));
        label_10 = new QLabel(begin_room);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(250, 80, 81, 16));
        verticalLayoutWidget = new QWidget(begin_room);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(929, 9, 141, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
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
        verticalLayoutWidget_2 = new QWidget(begin_room);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(930, 400, 141, 151));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
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
        eastButton->setGeometry(QRect(700, 290, 101, 31));
        northButton = new QPushButton(begin_room);
        northButton->setObjectName(QStringLiteral("northButton"));
        northButton->setGeometry(QRect(650, 259, 101, 31));
        westButton = new QPushButton(begin_room);
        westButton->setObjectName(QStringLiteral("westButton"));
        westButton->setGeometry(QRect(600, 290, 101, 31));

        retranslateUi(begin_room);

        QMetaObject::connectSlotsByName(begin_room);
    } // setupUi

    void retranslateUi(QDialog *begin_room)
    {
        begin_room->setWindowTitle(QApplication::translate("begin_room", "Dialog", 0));
        minimapLabel->setText(QApplication::translate("begin_room", "                       Minimap", 0));
        southButton->setText(QApplication::translate("begin_room", "South", 0));
        aboutButton->setText(QApplication::translate("begin_room", "About", 0));
        currentRoomLabel->setText(QApplication::translate("begin_room", "                                    Current Room Image", 0));
        label_10->setText(QApplication::translate("begin_room", "Current status:", 0));
        pushButton_9->setText(QApplication::translate("begin_room", "item", 0));
        pushButton_10->setText(QApplication::translate("begin_room", "item", 0));
        pushButton_12->setText(QApplication::translate("begin_room", "item", 0));
        pushButton_13->setText(QApplication::translate("begin_room", "item", 0));
        pushButton_11->setText(QApplication::translate("begin_room", "item", 0));
        hemetLabel->setText(QApplication::translate("begin_room", "TextLabel", 0));
        chestplateLabel->setText(QApplication::translate("begin_room", "TextLabel", 0));
        legsLabel->setText(QApplication::translate("begin_room", "TextLabel", 0));
        bootsLabel->setText(QApplication::translate("begin_room", "TextLabel", 0));
        primaryWepLabel->setText(QApplication::translate("begin_room", "TextLabel", 0));
        secondaryWepLabel->setText(QApplication::translate("begin_room", "TextLabel", 0));
        pushButton->setText(QApplication::translate("begin_room", "Exit", 0));
        currentStatusLabel->setText(QApplication::translate("begin_room", "Fatigued", 0));
        pushButton_5->setText(QApplication::translate("begin_room", "Use", 0));
        pushButton_8->setText(QApplication::translate("begin_room", "Drop", 0));
        pushButton_7->setText(QApplication::translate("begin_room", "Eat", 0));
        label_3->setText(QApplication::translate("begin_room", "Health:", 0));
        label_4->setText(QApplication::translate("begin_room", "Helmet:", 0));
        label_5->setText(QApplication::translate("begin_room", "Chestplate:", 0));
        label_6->setText(QApplication::translate("begin_room", "Legs:", 0));
        label_7->setText(QApplication::translate("begin_room", "Boots:", 0));
        label_8->setText(QApplication::translate("begin_room", "Primary weapon:", 0));
        label_9->setText(QApplication::translate("begin_room", "Secondary weapon:", 0));
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
