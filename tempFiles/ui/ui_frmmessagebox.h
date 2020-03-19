/********************************************************************************
** Form generated from reading UI file 'frmmessagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMESSAGEBOX_H
#define UI_FRMMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMessageBox
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMenu_Close;
    QWidget *widget_main;
    QGroupBox *groupBox;
    QLabel *labIcoMain;
    QLabel *labInfo;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *frmMessageBox)
    {
        if (frmMessageBox->objectName().isEmpty())
            frmMessageBox->setObjectName(QString::fromUtf8("frmMessageBox"));
        frmMessageBox->resize(309, 171);
        verticalLayout = new QVBoxLayout(frmMessageBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_title = new QWidget(frmMessageBox);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(100, 28));
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lab_Ico = new QLabel(widget_title);
        lab_Ico->setObjectName(QString::fromUtf8("lab_Ico"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Ico->sizePolicy().hasHeightForWidth());
        lab_Ico->setSizePolicy(sizePolicy1);
        lab_Ico->setMinimumSize(QSize(31, 0));
        lab_Ico->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lab_Ico);

        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QString::fromUtf8("lab_Title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy2);
        lab_Title->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lab_Title);

        widget_menu = new QWidget(widget_title);
        widget_menu->setObjectName(QString::fromUtf8("widget_menu"));
        sizePolicy1.setHeightForWidth(widget_menu->sizePolicy().hasHeightForWidth());
        widget_menu->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget_menu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnMenu_Close = new QPushButton(widget_menu);
        btnMenu_Close->setObjectName(QString::fromUtf8("btnMenu_Close"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy3);
        btnMenu_Close->setMinimumSize(QSize(40, 0));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Close);


        horizontalLayout_2->addWidget(widget_menu);


        verticalLayout->addWidget(widget_title);

        widget_main = new QWidget(frmMessageBox);
        widget_main->setObjectName(QString::fromUtf8("widget_main"));
        widget_main->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        groupBox = new QGroupBox(widget_main);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 291, 81));
        labIcoMain = new QLabel(groupBox);
        labIcoMain->setObjectName(QString::fromUtf8("labIcoMain"));
        labIcoMain->setGeometry(QRect(10, 10, 45, 45));
        labIcoMain->setStyleSheet(QString::fromUtf8("border-image: url(:/image/info.png);"));
        labInfo = new QLabel(groupBox);
        labInfo->setObjectName(QString::fromUtf8("labInfo"));
        labInfo->setGeometry(QRect(70, 10, 211, 51));
        labInfo->setScaledContents(false);
        labInfo->setWordWrap(true);
        layoutWidget = new QWidget(widget_main);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 100, 271, 34));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOk = new QPushButton(layoutWidget);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy4);
        btnOk->setCursor(QCursor(Qt::PointingHandCursor));
        btnOk->setFocusPolicy(Qt::StrongFocus);
        btnOk->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOk->setIcon(icon);
        btnOk->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(btnOk);

        btnCancel = new QPushButton(layoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy4.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy4);
        btnCancel->setCursor(QCursor(Qt::PointingHandCursor));
        btnCancel->setFocusPolicy(Qt::StrongFocus);
        btnCancel->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(btnCancel);


        verticalLayout->addWidget(widget_main);


        retranslateUi(frmMessageBox);

        QMetaObject::connectSlotsByName(frmMessageBox);
    } // setupUi

    void retranslateUi(QDialog *frmMessageBox)
    {
        frmMessageBox->setWindowTitle(QCoreApplication::translate("frmMessageBox", "\346\217\220\347\244\272", nullptr));
        lab_Ico->setText(QString());
        lab_Title->setText(QCoreApplication::translate("frmMessageBox", "\346\217\220\347\244\272", nullptr));
#if QT_CONFIG(tooltip)
        btnMenu_Close->setToolTip(QCoreApplication::translate("frmMessageBox", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Close->setText(QString());
        groupBox->setTitle(QString());
        labIcoMain->setText(QString());
        labInfo->setText(QCoreApplication::translate("frmMessageBox", "\347\241\256\345\256\232\350\246\201\345\210\240\351\231\244\345\220\227?", nullptr));
        btnOk->setText(QCoreApplication::translate("frmMessageBox", "\347\241\256\345\256\232(&O)", nullptr));
        btnCancel->setText(QCoreApplication::translate("frmMessageBox", "\345\217\226\346\266\210(&C)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmMessageBox: public Ui_frmMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMESSAGEBOX_H
