/********************************************************************************
** Form generated from reading UI file 'modiftroomprice.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFTROOMPRICE_H
#define UI_MODIFTROOMPRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModiftRoomPrice
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEditName;
    QLabel *label_3;
    QLineEdit *lineEditPrice;
    QLabel *label;
    QLineEdit *lineEditNo;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbnAdd;
    QPushButton *pbnModify;
    QPushButton *pbnSave;
    QPushButton *pbnCancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *ModiftRoomPrice)
    {
        if (ModiftRoomPrice->objectName().isEmpty())
            ModiftRoomPrice->setObjectName(QString::fromUtf8("ModiftRoomPrice"));
        ModiftRoomPrice->resize(490, 409);
        verticalLayout_4 = new QVBoxLayout(ModiftRoomPrice);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupBox = new QGroupBox(ModiftRoomPrice);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        horizontalLayout_5->addWidget(groupBox);

        label_6 = new QLabel(ModiftRoomPrice);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/image/house/1.jpg);"));

        horizontalLayout_5->addWidget(label_6);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox_2 = new QGroupBox(ModiftRoomPrice);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditName = new QLineEdit(groupBox_2);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditName->sizePolicy().hasHeightForWidth());
        lineEditName->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEditName, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(11);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditPrice = new QLineEdit(groupBox_2);
        lineEditPrice->setObjectName(QString::fromUtf8("lineEditPrice"));
        sizePolicy1.setHeightForWidth(lineEditPrice->sizePolicy().hasHeightForWidth());
        lineEditPrice->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lineEditPrice, 2, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditNo = new QLineEdit(groupBox_2);
        lineEditNo->setObjectName(QString::fromUtf8("lineEditNo"));
        sizePolicy1.setHeightForWidth(lineEditNo->sizePolicy().hasHeightForWidth());
        lineEditNo->setSizePolicy(sizePolicy1);
        lineEditNo->setMinimumSize(QSize(40, 26));

        gridLayout->addWidget(lineEditNo, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 2, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        horizontalLayout_3->addWidget(groupBox_2);


        horizontalLayout->addLayout(horizontalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbnAdd = new QPushButton(ModiftRoomPrice);
        pbnAdd->setObjectName(QString::fromUtf8("pbnAdd"));
        sizePolicy1.setHeightForWidth(pbnAdd->sizePolicy().hasHeightForWidth());
        pbnAdd->setSizePolicy(sizePolicy1);
        pbnAdd->setMinimumSize(QSize(80, 0));
        pbnAdd->setFont(font);
        pbnAdd->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnAdd);

        pbnModify = new QPushButton(ModiftRoomPrice);
        pbnModify->setObjectName(QString::fromUtf8("pbnModify"));
        sizePolicy1.setHeightForWidth(pbnModify->sizePolicy().hasHeightForWidth());
        pbnModify->setSizePolicy(sizePolicy1);
        pbnModify->setMinimumSize(QSize(80, 0));
        pbnModify->setFont(font);
        pbnModify->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnModify);

        pbnSave = new QPushButton(ModiftRoomPrice);
        pbnSave->setObjectName(QString::fromUtf8("pbnSave"));
        sizePolicy1.setHeightForWidth(pbnSave->sizePolicy().hasHeightForWidth());
        pbnSave->setSizePolicy(sizePolicy1);
        pbnSave->setMinimumSize(QSize(80, 0));
        pbnSave->setFont(font);
        pbnSave->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnSave);

        pbnCancel = new QPushButton(ModiftRoomPrice);
        pbnCancel->setObjectName(QString::fromUtf8("pbnCancel"));
        sizePolicy1.setHeightForWidth(pbnCancel->sizePolicy().hasHeightForWidth());
        pbnCancel->setSizePolicy(sizePolicy1);
        pbnCancel->setMinimumSize(QSize(80, 23));
        pbnCancel->setFont(font);
        pbnCancel->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnCancel);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(ModiftRoomPrice);

        QMetaObject::connectSlotsByName(ModiftRoomPrice);
    } // setupUi

    void retranslateUi(QWidget *ModiftRoomPrice)
    {
        ModiftRoomPrice->setWindowTitle(QCoreApplication::translate("ModiftRoomPrice", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ModiftRoomPrice", "\346\210\277\351\227\264\344\277\241\346\201\257", nullptr));
        label_6->setText(QString());
        groupBox_2->setTitle(QString());
        lineEditName->setPlaceholderText(QCoreApplication::translate("ModiftRoomPrice", "\350\257\267\350\276\223\345\205\245\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("ModiftRoomPrice", "\344\273\267\346\240\274\357\274\232", nullptr));
        lineEditPrice->setPlaceholderText(QCoreApplication::translate("ModiftRoomPrice", "\350\257\267\350\276\223\345\205\245\344\273\267\346\240\274", nullptr));
        label->setText(QCoreApplication::translate("ModiftRoomPrice", "\346\210\277\351\227\264\347\261\273\345\236\213\347\274\226\345\217\267\357\274\232", nullptr));
        lineEditNo->setPlaceholderText(QCoreApplication::translate("ModiftRoomPrice", "\350\257\267\350\276\223\345\205\245\347\261\273\345\236\213\347\274\226\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("ModiftRoomPrice", "\345\220\215\347\247\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("ModiftRoomPrice", "\347\261\273\345\236\213\347\274\226\345\217\267\344\273\216 1 \345\274\200\345\247\213", nullptr));
        label_5->setText(QCoreApplication::translate("ModiftRoomPrice", "\346\210\277\351\227\264\344\273\267\346\240\274\345\215\225\344\275\215\357\274\232\345\205\203", nullptr));
        pbnAdd->setText(QCoreApplication::translate("ModiftRoomPrice", "\346\267\273\345\212\240", nullptr));
        pbnModify->setText(QCoreApplication::translate("ModiftRoomPrice", "\344\277\256\346\224\271", nullptr));
        pbnSave->setText(QCoreApplication::translate("ModiftRoomPrice", "\344\277\235\345\255\230", nullptr));
        pbnCancel->setText(QCoreApplication::translate("ModiftRoomPrice", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModiftRoomPrice: public Ui_ModiftRoomPrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFTROOMPRICE_H
