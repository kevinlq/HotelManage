/********************************************************************************
** Form generated from reading UI file 'modifypwddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYPWDDIALOG_H
#define UI_MODIFYPWDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_ModifyPwdDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelUserName;
    QLabel *labelUserType;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLineEdit *lineEditReNewPwd;
    QLabel *label;
    QLineEdit *lineEditNewPwd;
    QLineEdit *lineEditOldPed;
    QLabel *label_2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pbnModifyPwd;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbnCancel;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ModifyPwdDialog)
    {
        if (ModifyPwdDialog->objectName().isEmpty())
            ModifyPwdDialog->setObjectName(QString::fromUtf8("ModifyPwdDialog"));
        ModifyPwdDialog->resize(628, 443);
        verticalLayout_4 = new QVBoxLayout(ModifyPwdDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(ModifyPwdDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(ModifyPwdDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        labelUserName = new QLabel(ModifyPwdDialog);
        labelUserName->setObjectName(QString::fromUtf8("labelUserName"));
        sizePolicy.setHeightForWidth(labelUserName->sizePolicy().hasHeightForWidth());
        labelUserName->setSizePolicy(sizePolicy);
        labelUserName->setFont(font1);

        horizontalLayout_2->addWidget(labelUserName);

        labelUserType = new QLabel(ModifyPwdDialog);
        labelUserType->setObjectName(QString::fromUtf8("labelUserType"));

        horizontalLayout_2->addWidget(labelUserType);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        groupBox = new QGroupBox(ModifyPwdDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(440, 240));
        groupBox->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 20, -1, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 2);

        lineEditReNewPwd = new QLineEdit(groupBox);
        lineEditReNewPwd->setObjectName(QString::fromUtf8("lineEditReNewPwd"));
        lineEditReNewPwd->setMinimumSize(QSize(0, 30));
        lineEditReNewPwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditReNewPwd, 2, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 3, 0, 1, 3);

        lineEditNewPwd = new QLineEdit(groupBox);
        lineEditNewPwd->setObjectName(QString::fromUtf8("lineEditNewPwd"));
        lineEditNewPwd->setMinimumSize(QSize(0, 30));
        lineEditNewPwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditNewPwd, 1, 2, 1, 1);

        lineEditOldPed = new QLineEdit(groupBox);
        lineEditOldPed->setObjectName(QString::fromUtf8("lineEditOldPed"));
        lineEditOldPed->setMinimumSize(QSize(0, 30));
        lineEditOldPed->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditOldPed, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pbnModifyPwd = new QPushButton(groupBox);
        pbnModifyPwd->setObjectName(QString::fromUtf8("pbnModifyPwd"));
        pbnModifyPwd->setMinimumSize(QSize(100, 0));
        pbnModifyPwd->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(pbnModifyPwd);

        horizontalSpacer_3 = new QSpacerItem(120, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pbnCancel = new QPushButton(groupBox);
        pbnCancel->setObjectName(QString::fromUtf8("pbnCancel"));
        pbnCancel->setMinimumSize(QSize(100, 30));
        pbnCancel->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(pbnCancel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_4->addWidget(groupBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        retranslateUi(ModifyPwdDialog);

        QMetaObject::connectSlotsByName(ModifyPwdDialog);
    } // setupUi

    void retranslateUi(QDialog *ModifyPwdDialog)
    {
        ModifyPwdDialog->setWindowTitle(QCoreApplication::translate("ModifyPwdDialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("ModifyPwdDialog", "\343\200\220\344\270\252\344\272\272\344\270\255\345\277\203\343\200\221--\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("ModifyPwdDialog", "\346\202\250\345\275\223\345\211\215\347\232\204\347\231\273\345\275\225\345\220\215\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        labelUserName->setToolTip(QCoreApplication::translate("ModifyPwdDialog", "\346\202\250\347\232\204\347\231\273\345\275\225\345\220\215", nullptr));
#endif // QT_CONFIG(tooltip)
        labelUserName->setText(QCoreApplication::translate("ModifyPwdDialog", "\345\275\223\345\211\215\347\224\250\346\210\267\345\220\215", nullptr));
        labelUserType->setText(QCoreApplication::translate("ModifyPwdDialog", "\347\261\273\345\236\213", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ModifyPwdDialog", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_7->setText(QCoreApplication::translate("ModifyPwdDialog", "\345\206\215\346\254\241\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        lineEditReNewPwd->setPlaceholderText(QCoreApplication::translate("ModifyPwdDialog", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("ModifyPwdDialog", "         (\345\257\206\347\240\201\345\217\257\344\273\245\346\230\2576~16\344\275\215\346\225\260\345\255\227\343\200\201\345\255\227\346\257\215\357\274\214\344\270\215\350\203\275\345\214\205\345\220\253\344\270\213\345\210\222\347\272\277\347\255\211\347\211\271\346\256\212\345\255\227\347\254\246)", nullptr));
        lineEditNewPwd->setPlaceholderText(QCoreApplication::translate("ModifyPwdDialog", "\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        lineEditOldPed->setPlaceholderText(QCoreApplication::translate("ModifyPwdDialog", "\350\257\267\350\276\223\345\205\245\346\227\247\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("ModifyPwdDialog", "\346\227\247\345\257\206\347\240\201 \357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("ModifyPwdDialog", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        pbnModifyPwd->setToolTip(QCoreApplication::translate("ModifyPwdDialog", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnModifyPwd->setText(QCoreApplication::translate("ModifyPwdDialog", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
#if QT_CONFIG(tooltip)
        pbnCancel->setToolTip(QCoreApplication::translate("ModifyPwdDialog", "\345\217\226\346\266\210", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnCancel->setText(QCoreApplication::translate("ModifyPwdDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyPwdDialog: public Ui_ModifyPwdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPWDDIALOG_H
