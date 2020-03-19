/********************************************************************************
** Form generated from reading UI file 'checkcutomdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKCUTOMDIALOG_H
#define UI_CHECKCUTOMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CheckCutomDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLineEdit *lineEditCustomName;
    QLineEdit *lineEditCustomCash;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QDateEdit *dateEditFrom;
    QLabel *label_8;
    QDateEdit *dateEditTo;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditRoomId;
    QPushButton *pbnFindId;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *lineEditDay;
    QLabel *label_6;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditroomTypeId;
    QPushButton *pbnFindTypeId;
    QLabel *label_9;
    QLabel *label_12;
    QLineEdit *lineEditCustomPhone;
    QLineEdit *lineEditCustomIcard;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_16;
    QLabel *label_2;
    QLineEdit *lineEditCustomOrderId;
    QLineEdit *lineEditRemark;
    QLabel *label_14;
    QComboBox *comboBoxSex;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbnCheckOk;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *CheckCutomDialog)
    {
        if (CheckCutomDialog->objectName().isEmpty())
            CheckCutomDialog->setObjectName(QString::fromUtf8("CheckCutomDialog"));
        CheckCutomDialog->resize(664, 429);
        verticalLayout_4 = new QVBoxLayout(CheckCutomDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(1, 2, 2, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        label = new QLabel(CheckCutomDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 50));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        groupBox = new QGroupBox(CheckCutomDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(630, 300));
        QFont font1;
        font1.setPointSize(14);
        groupBox->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditCustomName = new QLineEdit(groupBox);
        lineEditCustomName->setObjectName(QString::fromUtf8("lineEditCustomName"));
        lineEditCustomName->setMinimumSize(QSize(0, 26));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        lineEditCustomName->setFont(font2);

        gridLayout->addWidget(lineEditCustomName, 2, 1, 1, 1);

        lineEditCustomCash = new QLineEdit(groupBox);
        lineEditCustomCash->setObjectName(QString::fromUtf8("lineEditCustomCash"));
        lineEditCustomCash->setMinimumSize(QSize(0, 26));
        lineEditCustomCash->setFont(font2);

        gridLayout->addWidget(lineEditCustomCash, 3, 4, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        horizontalLayout_2->addWidget(label_7);

        dateEditFrom = new QDateEdit(groupBox);
        dateEditFrom->setObjectName(QString::fromUtf8("dateEditFrom"));
        dateEditFrom->setFont(font2);
        dateEditFrom->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dateEditFrom->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEditFrom);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        horizontalLayout_2->addWidget(label_8);

        dateEditTo = new QDateEdit(groupBox);
        dateEditTo->setObjectName(QString::fromUtf8("dateEditTo"));
        dateEditTo->setFont(font2);
        dateEditTo->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateEditTo);


        gridLayout->addLayout(horizontalLayout_2, 1, 2, 1, 4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditRoomId = new QLineEdit(groupBox);
        lineEditRoomId->setObjectName(QString::fromUtf8("lineEditRoomId"));
        lineEditRoomId->setMinimumSize(QSize(0, 26));
        lineEditRoomId->setFont(font2);

        horizontalLayout_3->addWidget(lineEditRoomId);

        pbnFindId = new QPushButton(groupBox);
        pbnFindId->setObjectName(QString::fromUtf8("pbnFindId"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbnFindId->sizePolicy().hasHeightForWidth());
        pbnFindId->setSizePolicy(sizePolicy1);
        pbnFindId->setMaximumSize(QSize(30, 20));
        pbnFindId->setCursor(QCursor(Qt::OpenHandCursor));
        pbnFindId->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnFindId->setIcon(icon);
        pbnFindId->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(pbnFindId);


        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        horizontalLayout->addWidget(label_5);

        lineEditDay = new QLineEdit(groupBox);
        lineEditDay->setObjectName(QString::fromUtf8("lineEditDay"));
        lineEditDay->setMinimumSize(QSize(0, 26));
        lineEditDay->setFont(font2);

        horizontalLayout->addWidget(lineEditDay);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        horizontalLayout->addWidget(label_6);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);

        gridLayout->addWidget(label_10, 2, 3, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 2, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);

        gridLayout->addWidget(label_13, 4, 3, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEditroomTypeId = new QLineEdit(groupBox);
        lineEditroomTypeId->setObjectName(QString::fromUtf8("lineEditroomTypeId"));
        lineEditroomTypeId->setMinimumSize(QSize(0, 26));
        lineEditroomTypeId->setFont(font2);

        horizontalLayout_4->addWidget(lineEditroomTypeId);

        pbnFindTypeId = new QPushButton(groupBox);
        pbnFindTypeId->setObjectName(QString::fromUtf8("pbnFindTypeId"));
        sizePolicy1.setHeightForWidth(pbnFindTypeId->sizePolicy().hasHeightForWidth());
        pbnFindTypeId->setSizePolicy(sizePolicy1);
        pbnFindTypeId->setMaximumSize(QSize(30, 20));
        pbnFindTypeId->setCursor(QCursor(Qt::OpenHandCursor));
        pbnFindTypeId->setStyleSheet(QString::fromUtf8(""));
        pbnFindTypeId->setIcon(icon);
        pbnFindTypeId->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(pbnFindTypeId);


        gridLayout->addLayout(horizontalLayout_4, 0, 5, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font2);

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        lineEditCustomPhone = new QLineEdit(groupBox);
        lineEditCustomPhone->setObjectName(QString::fromUtf8("lineEditCustomPhone"));
        lineEditCustomPhone->setMinimumSize(QSize(0, 26));
        lineEditCustomPhone->setFont(font2);

        gridLayout->addWidget(lineEditCustomPhone, 4, 1, 1, 1);

        lineEditCustomIcard = new QLineEdit(groupBox);
        lineEditCustomIcard->setObjectName(QString::fromUtf8("lineEditCustomIcard"));
        lineEditCustomIcard->setMinimumSize(QSize(0, 26));
        lineEditCustomIcard->setFont(font2);

        gridLayout->addWidget(lineEditCustomIcard, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font2);

        gridLayout->addWidget(label_16, 3, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 3, 1, 2);

        lineEditCustomOrderId = new QLineEdit(groupBox);
        lineEditCustomOrderId->setObjectName(QString::fromUtf8("lineEditCustomOrderId"));
        lineEditCustomOrderId->setMinimumSize(QSize(0, 26));
        lineEditCustomOrderId->setFont(font2);
        lineEditCustomOrderId->setCursor(QCursor(Qt::BlankCursor));

        gridLayout->addWidget(lineEditCustomOrderId, 4, 4, 1, 2);

        lineEditRemark = new QLineEdit(groupBox);
        lineEditRemark->setObjectName(QString::fromUtf8("lineEditRemark"));
        lineEditRemark->setMinimumSize(QSize(0, 60));
        lineEditRemark->setFont(font2);

        gridLayout->addWidget(lineEditRemark, 5, 1, 1, 5);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font2);

        gridLayout->addWidget(label_14, 5, 0, 1, 1);

        comboBoxSex = new QComboBox(groupBox);
        comboBoxSex->addItem(QString());
        comboBoxSex->addItem(QString());
        comboBoxSex->setObjectName(QString::fromUtf8("comboBoxSex"));
        comboBoxSex->setFont(font2);

        gridLayout->addWidget(comboBoxSex, 2, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        pbnCheckOk = new QPushButton(groupBox);
        pbnCheckOk->setObjectName(QString::fromUtf8("pbnCheckOk"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pbnCheckOk->sizePolicy().hasHeightForWidth());
        pbnCheckOk->setSizePolicy(sizePolicy2);
        pbnCheckOk->setMinimumSize(QSize(90, 25));
        pbnCheckOk->setFont(font2);
        pbnCheckOk->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_6->addWidget(pbnCheckOk);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout_2->addWidget(groupBox, 0, 1, 2, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 2);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(CheckCutomDialog);

        QMetaObject::connectSlotsByName(CheckCutomDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckCutomDialog)
    {
        CheckCutomDialog->setWindowTitle(QCoreApplication::translate("CheckCutomDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CheckCutomDialog", "\346\235\245\345\256\242\344\277\241\346\201\257\347\231\273\350\256\260\350\241\250", nullptr));
        groupBox->setTitle(QString());
        lineEditCustomName->setPlaceholderText(QCoreApplication::translate("CheckCutomDialog", "\345\256\242\346\210\267\345\247\223\345\220\215", nullptr));
        lineEditCustomCash->setPlaceholderText(QCoreApplication::translate("CheckCutomDialog", "\345\256\242\346\210\267\346\212\274\351\207\221", nullptr));
        label_3->setText(QCoreApplication::translate("CheckCutomDialog", "*\345\205\245\344\275\217\346\227\266\351\227\264:", nullptr));
        label_7->setText(QCoreApplication::translate("CheckCutomDialog", "\344\273\216\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("CheckCutomDialog", "\345\210\260\357\274\232", nullptr));
        lineEditRoomId->setPlaceholderText(QCoreApplication::translate("CheckCutomDialog", "\350\257\267\350\276\223\345\205\245\346\210\277\351\227\264\347\274\226\345\217\267", nullptr));
#if QT_CONFIG(tooltip)
        pbnFindId->setToolTip(QCoreApplication::translate("CheckCutomDialog", "\346\237\245\346\211\276\346\210\277\351\227\264\347\274\226\345\217\267", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnFindId->setText(QString());
        label_5->setText(QCoreApplication::translate("CheckCutomDialog", "\345\205\261", nullptr));
        lineEditDay->setPlaceholderText(QCoreApplication::translate("CheckCutomDialog", "\345\244\251\346\225\260", nullptr));
        label_6->setText(QCoreApplication::translate("CheckCutomDialog", "\345\244\251", nullptr));
        label_10->setText(QCoreApplication::translate("CheckCutomDialog", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("CheckCutomDialog", "\350\256\242\345\215\225\345\217\267\357\274\232", nullptr));
        lineEditroomTypeId->setPlaceholderText(QCoreApplication::translate("CheckCutomDialog", "\350\257\267\350\276\223\345\205\245\346\210\277\351\227\264\347\261\273\345\236\213\347\274\226\345\217\267", nullptr));
#if QT_CONFIG(tooltip)
        pbnFindTypeId->setToolTip(QCoreApplication::translate("CheckCutomDialog", "\346\237\245\346\211\276\346\210\277\351\227\264\347\261\273\345\236\213\347\274\226\345\217\267", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnFindTypeId->setText(QString());
        label_9->setText(QCoreApplication::translate("CheckCutomDialog", "*\345\256\242\346\210\267\345\247\223\345\220\215\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("CheckCutomDialog", "*\350\272\253\344\273\275\350\257\201\357\274\232", nullptr));
        lineEditCustomPhone->setPlaceholderText(QCoreApplication::translate("CheckCutomDialog", "\345\256\242\346\210\267\347\224\265\350\257\235", nullptr));
        lineEditCustomIcard->setPlaceholderText(QCoreApplication::translate("CheckCutomDialog", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("CheckCutomDialog", "*\346\210\277\351\227\264\347\274\226\345\217\267:", nullptr));
        label_11->setText(QCoreApplication::translate("CheckCutomDialog", "\345\256\242\346\210\267\347\224\265\350\257\235\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("CheckCutomDialog", "\345\256\242\346\210\267\346\212\274\351\207\221\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("CheckCutomDialog", "*\346\210\277\351\227\264\347\261\273\345\236\213\347\274\226\345\217\267:", nullptr));
        lineEditCustomOrderId->setPlaceholderText(QCoreApplication::translate("CheckCutomDialog", "\350\207\252\345\212\250\347\224\237\346\210\220", nullptr));
        lineEditRemark->setPlaceholderText(QCoreApplication::translate("CheckCutomDialog", "\347\233\270\345\272\224\347\232\204\345\244\207\346\263\250\344\277\241\346\201\257", nullptr));
        label_14->setText(QCoreApplication::translate("CheckCutomDialog", "\345\244\207\346\263\250\357\274\232", nullptr));
        comboBoxSex->setItemText(0, QCoreApplication::translate("CheckCutomDialog", "\347\224\267", nullptr));
        comboBoxSex->setItemText(1, QCoreApplication::translate("CheckCutomDialog", "\345\245\263", nullptr));

#if QT_CONFIG(tooltip)
        pbnCheckOk->setToolTip(QCoreApplication::translate("CheckCutomDialog", "\347\231\273\350\256\260", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnCheckOk->setText(QCoreApplication::translate("CheckCutomDialog", "\347\231\273\350\256\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckCutomDialog: public Ui_CheckCutomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKCUTOMDIALOG_H
