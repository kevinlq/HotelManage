/********************************************************************************
** Form generated from reading UI file 'roompicdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMPICDIALOG_H
#define UI_ROOMPICDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RoomPicDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QDialog *RoomPicDialog)
    {
        if (RoomPicDialog->objectName().isEmpty())
            RoomPicDialog->setObjectName(QString::fromUtf8("RoomPicDialog"));
        RoomPicDialog->resize(642, 417);
        verticalLayout_2 = new QVBoxLayout(RoomPicDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(RoomPicDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        groupBox->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 15, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("image: url(:/image/house/10.jpg);"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/image/house/3.jpg);"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/image/house/4.jpg);"));

        horizontalLayout->addWidget(label_3);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(RoomPicDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 15, -1, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/image/house/5.jpg);"));

        horizontalLayout_4->addWidget(label_4);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/image/house/6.jpg);"));

        horizontalLayout_4->addWidget(label_5);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/image/house/7.jpg);"));

        horizontalLayout_4->addWidget(label_6);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(RoomPicDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        horizontalLayout_5 = new QHBoxLayout(groupBox_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 15, -1, -1);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/image/house/8.jpg);"));

        horizontalLayout_6->addWidget(label_7);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 96));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/image/house/9.jpg);"));

        horizontalLayout_6->addWidget(label_8);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("image: url(:/image/house/10.jpg);"));

        horizontalLayout_6->addWidget(label_9);


        horizontalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(groupBox_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(RoomPicDialog);

        QMetaObject::connectSlotsByName(RoomPicDialog);
    } // setupUi

    void retranslateUi(QDialog *RoomPicDialog)
    {
        RoomPicDialog->setWindowTitle(QCoreApplication::translate("RoomPicDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RoomPicDialog", "\346\210\277\351\227\264\347\205\247\347\211\207\346\265\217\350\247\2101", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("RoomPicDialog", "\346\210\277\351\227\264\347\205\247\347\211\207\346\265\217\350\247\2102", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("RoomPicDialog", "\346\210\277\351\227\264\347\205\247\347\211\207\346\265\217\350\247\2103", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RoomPicDialog: public Ui_RoomPicDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMPICDIALOG_H
