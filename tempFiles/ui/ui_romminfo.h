/********************************************************************************
** Form generated from reading UI file 'romminfo.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROMMINFO_H
#define UI_ROMMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RommInfo
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *RommInfo)
    {
        if (RommInfo->objectName().isEmpty())
            RommInfo->setObjectName(QString::fromUtf8("RommInfo"));
        RommInfo->resize(628, 506);
        verticalLayout_4 = new QVBoxLayout(RommInfo);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_3 = new QGroupBox(RommInfo);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        groupBox_3->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(180, 120));
        label_4->setMaximumSize(QSize(180, 120));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/image/room/single room.jpg);"));

        horizontalLayout->addWidget(label_4);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(48, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox = new QGroupBox(RommInfo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(180, 120));
        label_5->setMaximumSize(QSize(180, 120));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/image/room/double room.jpg);"));

        horizontalLayout_2->addWidget(label_5);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(RommInfo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(180, 120));
        label_6->setMaximumSize(QSize(180, 120));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/image/room/Deluxe Suite.jpg);"));

        horizontalLayout_4->addWidget(label_6);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(78, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(groupBox_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(RommInfo);

        QMetaObject::connectSlotsByName(RommInfo);
    } // setupUi

    void retranslateUi(QWidget *RommInfo)
    {
        RommInfo->setWindowTitle(QCoreApplication::translate("RommInfo", "Form", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("RommInfo", "\345\215\225\344\272\272\351\227\264", nullptr));
        label_4->setText(QString());
        label->setText(QCoreApplication::translate("RommInfo", " \345\215\225\344\272\272\351\227\264: \351\253\230\347\272\247\345\244\247\345\272\212 \347\251\272\350\260\203\347\224\265\350\247\206 \346\227\240\347\272\277\344\270\212\347\275\221,\n"
" \347\213\254\347\253\213\345\215\253\346\265\264", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RommInfo", "\345\217\214\344\272\272\351\227\264", nullptr));
        label_5->setText(QString());
        label_2->setText(QCoreApplication::translate("RommInfo", "\345\217\214\344\272\272\351\227\264: \350\210\222\351\200\202\345\245\227\345\272\212 \346\227\240\347\272\277\344\270\212\347\275\221 \347\213\254\347\253\213\345\215\253\346\265\264 \n"
"\347\251\272\350\260\203\347\224\265\350\247\206 \345\205\215\350\264\271\346\227\251\351\244\220", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RommInfo", "\350\261\252\345\215\216\345\245\227\351\227\264", nullptr));
        label_6->setText(QString());
        label_3->setText(QCoreApplication::translate("RommInfo", "\350\261\252\345\215\216\345\245\227\351\227\264: \350\261\252\345\215\216\350\256\276\346\226\275 \347\251\272\350\260\203\347\224\265\350\247\206 \346\227\240\347\272\277\344\270\212\347\275\221 \347\213\254\347\253\213\345\215\253\346\265\264 \n"
"\345\201\245\350\272\253\350\256\276\346\226\275 \347\211\271\346\256\212\346\234\215\345\212\241 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RommInfo: public Ui_RommInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROMMINFO_H
