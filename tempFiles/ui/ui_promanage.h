/********************************************************************************
** Form generated from reading UI file 'promanage.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMANAGE_H
#define UI_PROMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProManage
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *Datetimelabel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox;
    QComboBox *comboBoxRoomStatus;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_2;
    QComboBox *comboBoxRoomfloor;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_3;
    QComboBox *comboBoxRoomType;
    QLabel *labelRoomNo;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ProManage)
    {
        if (ProManage->objectName().isEmpty())
            ProManage->setObjectName(QString::fromUtf8("ProManage"));
        ProManage->resize(676, 426);
        verticalLayout_4 = new QVBoxLayout(ProManage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(ProManage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        groupBox->setFont(font);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(7, 18, -1, -1);
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->verticalHeader()->setMinimumSectionSize(20);
        tableView->verticalHeader()->setDefaultSectionSize(30);

        horizontalLayout->addWidget(tableView);


        verticalLayout_3->addWidget(groupBox);


        horizontalLayout_5->addLayout(verticalLayout_3);

        groupBox_2 = new QGroupBox(ProManage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(130, 0));
        groupBox_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 20, 12, -1);
        Datetimelabel = new QLabel(groupBox_2);
        Datetimelabel->setObjectName(QString::fromUtf8("Datetimelabel"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        Datetimelabel->setFont(font1);

        verticalLayout_2->addWidget(Datetimelabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(checkBox);

        comboBoxRoomStatus = new QComboBox(groupBox_2);
        comboBoxRoomStatus->addItem(QString());
        comboBoxRoomStatus->addItem(QString());
        comboBoxRoomStatus->addItem(QString());
        comboBoxRoomStatus->addItem(QString());
        comboBoxRoomStatus->addItem(QString());
        comboBoxRoomStatus->setObjectName(QString::fromUtf8("comboBoxRoomStatus"));
        comboBoxRoomStatus->setMinimumSize(QSize(120, 35));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        comboBoxRoomStatus->setFont(font2);
        comboBoxRoomStatus->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(comboBoxRoomStatus);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        sizePolicy.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(checkBox_2);

        comboBoxRoomfloor = new QComboBox(groupBox_2);
        comboBoxRoomfloor->addItem(QString());
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/roomnum/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomfloor->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/roomnum/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomfloor->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/roomnum/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomfloor->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/roomnum/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomfloor->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/roomnum/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomfloor->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/roomnum/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomfloor->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/roomnum/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomfloor->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/roomnum/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomfloor->addItem(icon7, QString());
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/roomnum/9.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomfloor->addItem(icon8, QString());
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/roomnum/layout.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomfloor->addItem(icon9, QString());
        comboBoxRoomfloor->setObjectName(QString::fromUtf8("comboBoxRoomfloor"));
        comboBoxRoomfloor->setMinimumSize(QSize(120, 35));
        comboBoxRoomfloor->setFont(font2);
        comboBoxRoomfloor->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(comboBoxRoomfloor);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBox_3 = new QCheckBox(groupBox_2);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        sizePolicy.setHeightForWidth(checkBox_3->sizePolicy().hasHeightForWidth());
        checkBox_3->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(checkBox_3);

        comboBoxRoomType = new QComboBox(groupBox_2);
        comboBoxRoomType->addItem(QString());
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/image/roomtype/signal.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomType->addItem(icon10, QString());
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/image/roomtype/double.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomType->addItem(icon11, QString());
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/image/roomtype/luxury.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomType->addItem(icon12, QString());
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/image/roomtype/president.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxRoomType->addItem(icon13, QString());
        comboBoxRoomType->setObjectName(QString::fromUtf8("comboBoxRoomType"));
        comboBoxRoomType->setMinimumSize(QSize(120, 35));
        comboBoxRoomType->setFont(font2);
        comboBoxRoomType->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_4->addWidget(comboBoxRoomType);


        verticalLayout->addLayout(horizontalLayout_4);

        labelRoomNo = new QLabel(groupBox_2);
        labelRoomNo->setObjectName(QString::fromUtf8("labelRoomNo"));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        labelRoomNo->setFont(font3);
        labelRoomNo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelRoomNo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_5->addWidget(groupBox_2);


        verticalLayout_4->addLayout(horizontalLayout_5);


        retranslateUi(ProManage);

        QMetaObject::connectSlotsByName(ProManage);
    } // setupUi

    void retranslateUi(QWidget *ProManage)
    {
        ProManage->setWindowTitle(QCoreApplication::translate("ProManage", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ProManage", "\346\210\277\351\227\264\347\212\266\346\200\201\346\200\201\345\233\276", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ProManage", "\350\257\264\346\230\216", nullptr));
        Datetimelabel->setText(QString());
        checkBox->setText(QString());
        comboBoxRoomStatus->setItemText(0, QCoreApplication::translate("ProManage", "\344\270\215\351\231\220\346\210\277\346\200\201", nullptr));
        comboBoxRoomStatus->setItemText(1, QCoreApplication::translate("ProManage", "\351\231\220\347\251\272\346\210\277", nullptr));
        comboBoxRoomStatus->setItemText(2, QCoreApplication::translate("ProManage", "\351\231\220\344\275\217\345\256\242\346\210\277", nullptr));
        comboBoxRoomStatus->setItemText(3, QCoreApplication::translate("ProManage", "\351\231\220\347\273\264\344\277\256\346\210\277", nullptr));
        comboBoxRoomStatus->setItemText(4, QCoreApplication::translate("ProManage", "\351\231\220\344\277\235\347\225\231\346\210\277", nullptr));

        checkBox_2->setText(QString());
        comboBoxRoomfloor->setItemText(0, QCoreApplication::translate("ProManage", "\346\211\200\346\234\211\346\245\274\345\261\202", nullptr));
        comboBoxRoomfloor->setItemText(1, QCoreApplication::translate("ProManage", "1\345\261\202", nullptr));
        comboBoxRoomfloor->setItemText(2, QCoreApplication::translate("ProManage", "2\345\261\202", nullptr));
        comboBoxRoomfloor->setItemText(3, QCoreApplication::translate("ProManage", "3\345\261\202", nullptr));
        comboBoxRoomfloor->setItemText(4, QCoreApplication::translate("ProManage", "4\345\261\202", nullptr));
        comboBoxRoomfloor->setItemText(5, QCoreApplication::translate("ProManage", "5\345\261\202", nullptr));
        comboBoxRoomfloor->setItemText(6, QCoreApplication::translate("ProManage", "6\345\261\202", nullptr));
        comboBoxRoomfloor->setItemText(7, QCoreApplication::translate("ProManage", "7\345\261\202", nullptr));
        comboBoxRoomfloor->setItemText(8, QCoreApplication::translate("ProManage", "8\345\261\202", nullptr));
        comboBoxRoomfloor->setItemText(9, QCoreApplication::translate("ProManage", "9\345\261\202", nullptr));
        comboBoxRoomfloor->setItemText(10, QCoreApplication::translate("ProManage", "10\345\261\202", nullptr));

        checkBox_3->setText(QString());
        comboBoxRoomType->setItemText(0, QCoreApplication::translate("ProManage", "\346\211\200\346\234\211\346\210\277\345\236\213", nullptr));
        comboBoxRoomType->setItemText(1, QCoreApplication::translate("ProManage", "\345\215\225\344\272\272\351\227\264", nullptr));
        comboBoxRoomType->setItemText(2, QCoreApplication::translate("ProManage", "\345\217\214\344\272\272\351\227\264", nullptr));
        comboBoxRoomType->setItemText(3, QCoreApplication::translate("ProManage", "\350\261\252\345\215\216\345\245\227\351\227\264", nullptr));
        comboBoxRoomType->setItemText(4, QCoreApplication::translate("ProManage", "\346\200\273\347\273\237\345\245\227\346\210\277", nullptr));

        labelRoomNo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProManage: public Ui_ProManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMANAGE_H
