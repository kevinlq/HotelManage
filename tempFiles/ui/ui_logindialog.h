/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMenu;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Close;
    QGroupBox *groupBox;
    QLabel *labUserName;
    QLabel *labUserPwd;
    QLineEdit *txtUserPwd;
    QPushButton *btnLogin;
    QPushButton *btnresgister;
    QLabel *labCompany;
    QRadioButton *radioButtonCustomer;
    QRadioButton *radioButtonAdmin;
    QLineEdit *txtUserName;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(450, 282);
        widget_title = new QWidget(LoginDialog);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        widget_title->setGeometry(QRect(0, 0, 451, 33));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(100, 33));
        widget_title->setMouseTracking(false);
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        lab_Ico = new QLabel(widget_title);
        lab_Ico->setObjectName(QString::fromUtf8("lab_Ico"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Ico->sizePolicy().hasHeightForWidth());
        lab_Ico->setSizePolicy(sizePolicy1);
        lab_Ico->setMinimumSize(QSize(30, 0));
        lab_Ico->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lab_Ico);

        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QString::fromUtf8("lab_Title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lab_Title->setFont(font);
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
        btnMenu = new QPushButton(widget_menu);
        btnMenu->setObjectName(QString::fromUtf8("btnMenu"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnMenu->sizePolicy().hasHeightForWidth());
        btnMenu->setSizePolicy(sizePolicy3);
        btnMenu->setMinimumSize(QSize(31, 0));
        btnMenu->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu->setFocusPolicy(Qt::NoFocus);
        btnMenu->setFlat(true);

        horizontalLayout->addWidget(btnMenu);

        btnMenu_Min = new QPushButton(widget_menu);
        btnMenu_Min->setObjectName(QString::fromUtf8("btnMenu_Min"));
        sizePolicy3.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy3);
        btnMenu_Min->setMinimumSize(QSize(31, 0));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);
        btnMenu_Min->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Min);

        btnMenu_Close = new QPushButton(widget_menu);
        btnMenu_Close->setObjectName(QString::fromUtf8("btnMenu_Close"));
        sizePolicy3.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy3);
        btnMenu_Close->setMinimumSize(QSize(40, 0));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Close);


        horizontalLayout_2->addWidget(widget_menu);

        groupBox = new QGroupBox(LoginDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 70, 421, 181));
        labUserName = new QLabel(groupBox);
        labUserName->setObjectName(QString::fromUtf8("labUserName"));
        labUserName->setGeometry(QRect(20, 20, 71, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        labUserName->setFont(font1);
        labUserPwd = new QLabel(groupBox);
        labUserPwd->setObjectName(QString::fromUtf8("labUserPwd"));
        labUserPwd->setGeometry(QRect(20, 60, 71, 31));
        labUserPwd->setFont(font1);
        txtUserPwd = new QLineEdit(groupBox);
        txtUserPwd->setObjectName(QString::fromUtf8("txtUserPwd"));
        txtUserPwd->setGeometry(QRect(120, 60, 161, 28));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        txtUserPwd->setFont(font2);
        txtUserPwd->setEchoMode(QLineEdit::Password);
        txtUserPwd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(300, 20, 101, 28));
        btnLogin->setFont(font1);
        btnLogin->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLogin->setIcon(icon);
        btnLogin->setIconSize(QSize(20, 20));
        btnresgister = new QPushButton(groupBox);
        btnresgister->setObjectName(QString::fromUtf8("btnresgister"));
        btnresgister->setGeometry(QRect(300, 60, 101, 28));
        btnresgister->setFont(font1);
        btnresgister->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnresgister->setIcon(icon1);
        btnresgister->setIconSize(QSize(20, 20));
        labCompany = new QLabel(groupBox);
        labCompany->setObjectName(QString::fromUtf8("labCompany"));
        labCompany->setGeometry(QRect(20, 133, 381, 31));
        labCompany->setFont(font1);
        radioButtonCustomer = new QRadioButton(groupBox);
        radioButtonCustomer->setObjectName(QString::fromUtf8("radioButtonCustomer"));
        radioButtonCustomer->setGeometry(QRect(130, 110, 89, 16));
        radioButtonCustomer->setFont(font2);
        radioButtonAdmin = new QRadioButton(groupBox);
        radioButtonAdmin->setObjectName(QString::fromUtf8("radioButtonAdmin"));
        radioButtonAdmin->setGeometry(QRect(234, 110, 89, 16));
        radioButtonAdmin->setFont(font2);
        txtUserName = new QLineEdit(groupBox);
        txtUserName->setObjectName(QString::fromUtf8("txtUserName"));
        txtUserName->setGeometry(QRect(120, 19, 161, 28));
        txtUserName->setFont(font1);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        lab_Ico->setText(QString());
        lab_Title->setText(QCoreApplication::translate("LoginDialog", "\345\244\247\344\274\227\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        btnMenu->setToolTip(QCoreApplication::translate("LoginDialog", "\350\217\234\345\215\225", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Min->setToolTip(QCoreApplication::translate("LoginDialog", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Min->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Close->setToolTip(QCoreApplication::translate("LoginDialog", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Close->setText(QString());
        groupBox->setTitle(QString());
        labUserName->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225\345\220\215:", nullptr));
        labUserPwd->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225\345\257\206\347\240\201\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        txtUserPwd->setToolTip(QCoreApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
#endif // QT_CONFIG(tooltip)
        txtUserPwd->setText(QString());
        txtUserPwd->setPlaceholderText(QCoreApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        btnLogin->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225(&L)", nullptr));
#if QT_CONFIG(tooltip)
        btnresgister->setToolTip(QCoreApplication::translate("LoginDialog", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnresgister->setWhatsThis(QCoreApplication::translate("LoginDialog", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnresgister->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214(&R)", nullptr));
        labCompany->setText(QCoreApplication::translate("LoginDialog", "\346\212\200\346\234\257\346\224\257\346\214\201:", nullptr));
        radioButtonCustomer->setText(QCoreApplication::translate("LoginDialog", "\351\241\276\345\256\242", nullptr));
        radioButtonAdmin->setText(QCoreApplication::translate("LoginDialog", "\347\256\241\347\220\206\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
