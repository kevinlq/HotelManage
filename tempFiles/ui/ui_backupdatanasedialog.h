/********************************************************************************
** Form generated from reading UI file 'backupdatanasedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKUPDATANASEDIALOG_H
#define UI_BACKUPDATANASEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BackupDatanaseDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QPlainTextEdit *plainTextEdit;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pbnSearch;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbnOk;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelBackInfo;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *BackupDatanaseDialog)
    {
        if (BackupDatanaseDialog->objectName().isEmpty())
            BackupDatanaseDialog->setObjectName(QString::fromUtf8("BackupDatanaseDialog"));
        BackupDatanaseDialog->resize(552, 437);
        verticalLayout_4 = new QVBoxLayout(BackupDatanaseDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(BackupDatanaseDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(30, 0));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/image/database/database.png);"));

        horizontalLayout->addWidget(label_4);

        label_3 = new QLabel(BackupDatanaseDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_3->addItem(verticalSpacer_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        groupBox = new QGroupBox(BackupDatanaseDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(15);
        label->setFont(font1);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_8 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy2);
        plainTextEdit->setMaximumSize(QSize(320, 90));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        plainTextEdit->setFont(font2);
        plainTextEdit->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_6->addWidget(plainTextEdit);

        horizontalSpacer_9 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(230, 0));
        lineEdit->setSizeIncrement(QSize(0, 0));
        lineEdit->setFont(font2);

        horizontalLayout_2->addWidget(lineEdit);

        pbnSearch = new QPushButton(groupBox);
        pbnSearch->setObjectName(QString::fromUtf8("pbnSearch"));
        pbnSearch->setMinimumSize(QSize(90, 30));
        pbnSearch->setFont(font2);

        horizontalLayout_2->addWidget(pbnSearch);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pbnOk = new QPushButton(groupBox);
        pbnOk->setObjectName(QString::fromUtf8("pbnOk"));
        pbnOk->setMinimumSize(QSize(90, 30));

        horizontalLayout_3->addWidget(pbnOk);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        labelBackInfo = new QLabel(groupBox);
        labelBackInfo->setObjectName(QString::fromUtf8("labelBackInfo"));
        labelBackInfo->setFont(font2);

        verticalLayout->addWidget(labelBackInfo);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(BackupDatanaseDialog);

        QMetaObject::connectSlotsByName(BackupDatanaseDialog);
    } // setupUi

    void retranslateUi(QDialog *BackupDatanaseDialog)
    {
        BackupDatanaseDialog->setWindowTitle(QCoreApplication::translate("BackupDatanaseDialog", "Dialog", nullptr));
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("BackupDatanaseDialog", "\343\200\220\347\263\273\347\273\237\350\256\276\347\275\256\343\200\221--\346\225\260\346\215\256\345\244\207\344\273\275", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("BackupDatanaseDialog", "\345\244\207\344\273\275\350\257\264\346\230\216", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("BackupDatanaseDialog", "\345\244\207\344\273\275\346\225\260\346\215\256\345\272\223\346\227\266\357\274\214\351\246\226\345\205\210\351\200\211\346\213\251\350\246\201\345\244\207\344\273\275\347\232\204\347\233\256\345\275\225\357\274\214\347\202\271\345\207\273\346\265\217\350\247\210\346\214\211\351\222\256\357\274\214\345\217\257\344\273\245\350\275\254\345\210\260\344\275\240\346\203\263\350\246\201\347\232\204\347\233\230\347\254\246\343\200\202", nullptr));
        label_2->setText(QCoreApplication::translate("BackupDatanaseDialog", "\345\244\207\344\273\275\345\210\260\357\274\232", nullptr));
        pbnSearch->setText(QCoreApplication::translate("BackupDatanaseDialog", "\346\265\217\350\247\210", nullptr));
        pbnOk->setText(QCoreApplication::translate("BackupDatanaseDialog", "\347\241\256\350\256\244\345\244\207\344\273\275", nullptr));
        labelBackInfo->setText(QCoreApplication::translate("BackupDatanaseDialog", "\346\255\243\345\234\250\345\244\207\344\273\275\342\200\246\342\200\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BackupDatanaseDialog: public Ui_BackupDatanaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKUPDATANASEDIALOG_H
