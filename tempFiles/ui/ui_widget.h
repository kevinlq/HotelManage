/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMenu;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Max;
    QPushButton *btnMenu_Close;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pbnAsk;
    QPushButton *pbnCheck;
    QPushButton *pbnCheckOut;
    QPushButton *pbnHint;
    QPushButton *pbnHint_2;
    QPushButton *pbnHint_3;
    QWidget *page_9;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pbnRoomInfo;
    QPushButton *pbnRoomLock;
    QPushButton *pbnModify;
    QWidget *page_6;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pbnRegisterInfo;
    QWidget *page;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *page_2;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pbnBackDatabase;
    QPushButton *pbnHelp;
    QWidget *page_3;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pbnModiftPwd;
    QPushButton *pbnLonBlog;
    QStackedWidget *stackedWidget;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *page_8;
    QGroupBox *groupBox_Down;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbnbackhome;
    QLabel *label_CurrentUser;
    QLabel *label_SoftTime;
    QLabel *label_CurrentTime;
    QLabel *label_CompanyName;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(607, 535);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_title = new QWidget(Widget);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
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

        btnMenu_Max = new QPushButton(widget_menu);
        btnMenu_Max->setObjectName(QString::fromUtf8("btnMenu_Max"));
        sizePolicy3.setHeightForWidth(btnMenu_Max->sizePolicy().hasHeightForWidth());
        btnMenu_Max->setSizePolicy(sizePolicy3);
        btnMenu_Max->setMinimumSize(QSize(31, 0));
        btnMenu_Max->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Max->setFocusPolicy(Qt::NoFocus);
        btnMenu_Max->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Max);

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


        verticalLayout_3->addWidget(widget_title);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, -1, -1, -1);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy4);
        groupBox->setMinimumSize(QSize(110, 0));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 3, 3, 6);
        toolBox = new QToolBox(groupBox);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        sizePolicy4.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy4);
        toolBox->setMinimumSize(QSize(93, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        toolBox->setFont(font1);
        toolBox->setCursor(QCursor(Qt::ArrowCursor));
        toolBox->setStyleSheet(QString::fromUtf8(""));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 110, 258));
        layoutWidget = new QWidget(page_5);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 101, 231));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        pbnAsk = new QPushButton(layoutWidget);
        pbnAsk->setObjectName(QString::fromUtf8("pbnAsk"));
        pbnAsk->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        pbnAsk->setFont(font2);
        pbnAsk->setCursor(QCursor(Qt::OpenHandCursor));
        pbnAsk->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_7->addWidget(pbnAsk);

        pbnCheck = new QPushButton(layoutWidget);
        pbnCheck->setObjectName(QString::fromUtf8("pbnCheck"));
        pbnCheck->setMinimumSize(QSize(0, 30));
        pbnCheck->setFont(font2);
        pbnCheck->setCursor(QCursor(Qt::OpenHandCursor));
        pbnCheck->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_7->addWidget(pbnCheck);

        pbnCheckOut = new QPushButton(layoutWidget);
        pbnCheckOut->setObjectName(QString::fromUtf8("pbnCheckOut"));
        pbnCheckOut->setMinimumSize(QSize(0, 30));
        pbnCheckOut->setFont(font2);
        pbnCheckOut->setCursor(QCursor(Qt::OpenHandCursor));
        pbnCheckOut->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_7->addWidget(pbnCheckOut);

        pbnHint = new QPushButton(layoutWidget);
        pbnHint->setObjectName(QString::fromUtf8("pbnHint"));
        pbnHint->setMinimumSize(QSize(0, 30));
        pbnHint->setFont(font2);
        pbnHint->setCursor(QCursor(Qt::OpenHandCursor));
        pbnHint->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_7->addWidget(pbnHint);

        pbnHint_2 = new QPushButton(layoutWidget);
        pbnHint_2->setObjectName(QString::fromUtf8("pbnHint_2"));
        pbnHint_2->setMinimumSize(QSize(0, 30));
        pbnHint_2->setFont(font2);
        pbnHint_2->setCursor(QCursor(Qt::OpenHandCursor));
        pbnHint_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_7->addWidget(pbnHint_2);

        pbnHint_3 = new QPushButton(layoutWidget);
        pbnHint_3->setObjectName(QString::fromUtf8("pbnHint_3"));
        pbnHint_3->setMinimumSize(QSize(0, 30));
        pbnHint_3->setFont(font2);
        pbnHint_3->setCursor(QCursor(Qt::OpenHandCursor));
        pbnHint_3->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_7->addWidget(pbnHint_3);

        toolBox->addItem(page_5, QString::fromUtf8("\344\270\232\345\212\241\347\256\241\347\220\206"));
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        page_9->setGeometry(QRect(0, 0, 110, 258));
        layoutWidget1 = new QWidget(page_9);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 15, 101, 121));
        verticalLayout_10 = new QVBoxLayout(layoutWidget1);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        pbnRoomInfo = new QPushButton(layoutWidget1);
        pbnRoomInfo->setObjectName(QString::fromUtf8("pbnRoomInfo"));
        pbnRoomInfo->setMinimumSize(QSize(0, 30));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        pbnRoomInfo->setFont(font3);
        pbnRoomInfo->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_10->addWidget(pbnRoomInfo);

        pbnRoomLock = new QPushButton(layoutWidget1);
        pbnRoomLock->setObjectName(QString::fromUtf8("pbnRoomLock"));
        pbnRoomLock->setMinimumSize(QSize(0, 30));
        pbnRoomLock->setFont(font3);
        pbnRoomLock->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_10->addWidget(pbnRoomLock);

        pbnModify = new QPushButton(layoutWidget1);
        pbnModify->setObjectName(QString::fromUtf8("pbnModify"));
        pbnModify->setMinimumSize(QSize(0, 30));
        pbnModify->setFont(font3);
        pbnModify->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_10->addWidget(pbnModify);

        toolBox->addItem(page_9, QString::fromUtf8("\345\256\242\346\210\277\344\277\241\346\201\257\347\256\241\347\220\206"));
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        page_6->setGeometry(QRect(0, 0, 110, 258));
        layoutWidget2 = new QWidget(page_6);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 100, 131));
        verticalLayout_8 = new QVBoxLayout(layoutWidget2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 30));
        pushButton_5->setFont(font3);
        pushButton_5->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_8->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(0, 30));
        pushButton_6->setFont(font3);
        pushButton_6->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_8->addWidget(pushButton_6);

        pbnRegisterInfo = new QPushButton(layoutWidget2);
        pbnRegisterInfo->setObjectName(QString::fromUtf8("pbnRegisterInfo"));
        pbnRegisterInfo->setMinimumSize(QSize(0, 30));
        pbnRegisterInfo->setFont(font3);
        pbnRegisterInfo->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_8->addWidget(pbnRegisterInfo);

        toolBox->addItem(page_6, QString::fromUtf8("\345\256\242\346\210\267\347\256\241\347\220\206"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 110, 258));
        layoutWidget3 = new QWidget(page);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 20, 91, 131));
        verticalLayout_9 = new QVBoxLayout(layoutWidget3);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 30));
        pushButton_3->setFont(font3);
        pushButton_3->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_9->addWidget(pushButton_3);

        pushButton_7 = new QPushButton(layoutWidget3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(0, 30));
        pushButton_7->setFont(font3);
        pushButton_7->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_9->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(0, 30));
        pushButton_8->setFont(font3);
        pushButton_8->setCursor(QCursor(Qt::ClosedHandCursor));

        verticalLayout_9->addWidget(pushButton_8);

        toolBox->addItem(page, QString::fromUtf8("\346\234\215\345\212\241\347\256\241\347\220\206"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 110, 258));
        layoutWidget4 = new QWidget(page_2);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 0, 101, 121));
        verticalLayout_5 = new QVBoxLayout(layoutWidget4);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pbnBackDatabase = new QPushButton(layoutWidget4);
        pbnBackDatabase->setObjectName(QString::fromUtf8("pbnBackDatabase"));
        pbnBackDatabase->setMinimumSize(QSize(0, 30));
        pbnBackDatabase->setFont(font3);
        pbnBackDatabase->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_5->addWidget(pbnBackDatabase);

        pbnHelp = new QPushButton(layoutWidget4);
        pbnHelp->setObjectName(QString::fromUtf8("pbnHelp"));
        pbnHelp->setMinimumSize(QSize(0, 30));
        pbnHelp->setFont(font3);
        pbnHelp->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_5->addWidget(pbnHelp);

        toolBox->addItem(page_2, QString::fromUtf8("\347\263\273\347\273\237\350\256\276\347\275\256"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 110, 258));
        layoutWidget5 = new QWidget(page_3);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 6, 101, 101));
        verticalLayout_6 = new QVBoxLayout(layoutWidget5);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        pbnModiftPwd = new QPushButton(layoutWidget5);
        pbnModiftPwd->setObjectName(QString::fromUtf8("pbnModiftPwd"));
        pbnModiftPwd->setMinimumSize(QSize(0, 30));
        pbnModiftPwd->setFont(font3);
        pbnModiftPwd->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_6->addWidget(pbnModiftPwd);

        pbnLonBlog = new QPushButton(layoutWidget5);
        pbnLonBlog->setObjectName(QString::fromUtf8("pbnLonBlog"));
        pbnLonBlog->setMinimumSize(QSize(0, 30));
        pbnLonBlog->setFont(font3);
        pbnLonBlog->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout_6->addWidget(pbnLonBlog);

        toolBox->addItem(page_3, QString::fromUtf8("\344\270\252\344\272\272\344\270\255\345\277\203"));

        verticalLayout->addWidget(toolBox);


        horizontalLayout_4->addWidget(groupBox);

        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        verticalLayout_2 = new QVBoxLayout(page_7);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(page_7);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/image/room/back.jpg);"));

        verticalLayout_2->addWidget(label);

        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        stackedWidget->addWidget(page_8);

        horizontalLayout_4->addWidget(stackedWidget);


        verticalLayout_3->addLayout(horizontalLayout_4);

        groupBox_Down = new QGroupBox(Widget);
        groupBox_Down->setObjectName(QString::fromUtf8("groupBox_Down"));
        sizePolicy.setHeightForWidth(groupBox_Down->sizePolicy().hasHeightForWidth());
        groupBox_Down->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(groupBox_Down);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 11, 0, 0);
        horizontalSpacer = new QSpacerItem(8, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbnbackhome = new QPushButton(groupBox_Down);
        pbnbackhome->setObjectName(QString::fromUtf8("pbnbackhome"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pbnbackhome->sizePolicy().hasHeightForWidth());
        pbnbackhome->setSizePolicy(sizePolicy5);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(12);
        pbnbackhome->setFont(font4);
        pbnbackhome->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(pbnbackhome);

        label_CurrentUser = new QLabel(groupBox_Down);
        label_CurrentUser->setObjectName(QString::fromUtf8("label_CurrentUser"));
        QFont font5;
        font5.setPointSize(12);
        label_CurrentUser->setFont(font5);

        horizontalLayout_3->addWidget(label_CurrentUser);

        label_SoftTime = new QLabel(groupBox_Down);
        label_SoftTime->setObjectName(QString::fromUtf8("label_SoftTime"));
        label_SoftTime->setFont(font5);

        horizontalLayout_3->addWidget(label_SoftTime);

        label_CurrentTime = new QLabel(groupBox_Down);
        label_CurrentTime->setObjectName(QString::fromUtf8("label_CurrentTime"));
        label_CurrentTime->setFont(font5);

        horizontalLayout_3->addWidget(label_CurrentTime);

        label_CompanyName = new QLabel(groupBox_Down);
        label_CompanyName->setObjectName(QString::fromUtf8("label_CompanyName"));
        label_CompanyName->setFont(font5);

        horizontalLayout_3->addWidget(label_CompanyName);


        verticalLayout_3->addWidget(groupBox_Down);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(Widget);

        toolBox->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lab_Ico->setText(QString());
        lab_Title->setText(QCoreApplication::translate("Widget", "\345\244\247\344\274\227\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        btnMenu->setToolTip(QCoreApplication::translate("Widget", "\350\217\234\345\215\225", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Min->setToolTip(QCoreApplication::translate("Widget", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Min->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Max->setToolTip(QCoreApplication::translate("Widget", "\346\234\200\345\244\247\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Max->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Close->setToolTip(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Close->setText(QString());
        groupBox->setTitle(QString());
#if QT_CONFIG(tooltip)
        pbnAsk->setToolTip(QCoreApplication::translate("Widget", "\345\211\215\345\217\260\344\270\255\345\277\203", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnAsk->setText(QCoreApplication::translate("Widget", "\345\211\215\345\217\260\344\270\255\345\277\203", nullptr));
#if QT_CONFIG(tooltip)
        pbnCheck->setToolTip(QCoreApplication::translate("Widget", "\346\235\245\345\256\242\347\231\273\350\256\260", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnCheck->setText(QCoreApplication::translate("Widget", "\346\235\245\345\256\242\347\231\273\350\256\260", nullptr));
#if QT_CONFIG(tooltip)
        pbnCheckOut->setToolTip(QCoreApplication::translate("Widget", "\345\256\242\345\212\241\344\270\255\345\277\203", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnCheckOut->setText(QCoreApplication::translate("Widget", "\351\241\276\345\256\242\351\200\200\346\210\277", nullptr));
#if QT_CONFIG(tooltip)
        pbnHint->setToolTip(QCoreApplication::translate("Widget", "\345\212\237\350\203\275\345\274\200\345\217\221\344\270\255", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnHint->setText(QCoreApplication::translate("Widget", "\350\264\242\345\212\241\347\274\264\350\264\271", nullptr));
#if QT_CONFIG(tooltip)
        pbnHint_2->setToolTip(QCoreApplication::translate("Widget", "\345\212\237\350\203\275\345\274\200\345\217\221\344\270\255", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnHint_2->setText(QCoreApplication::translate("Widget", "\351\242\204\345\256\232\347\256\241\347\220\206", nullptr));
#if QT_CONFIG(tooltip)
        pbnHint_3->setToolTip(QCoreApplication::translate("Widget", "\345\212\237\350\203\275\345\274\200\345\217\221\344\270\255", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnHint_3->setText(QCoreApplication::translate("Widget", "\344\272\244\346\216\245\347\217\255", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QCoreApplication::translate("Widget", "\344\270\232\345\212\241\347\256\241\347\220\206", nullptr));
        pbnRoomInfo->setText(QCoreApplication::translate("Widget", "\346\210\277\351\227\264\344\273\213\347\273\215", nullptr));
        pbnRoomLock->setText(QCoreApplication::translate("Widget", "\346\210\277\351\227\264\346\254\243\350\265\217", nullptr));
        pbnModify->setText(QCoreApplication::translate("Widget", "\346\210\277\351\227\264\350\260\203\346\225\264", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_9), QCoreApplication::translate("Widget", "\345\256\242\346\210\277\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "\346\234\252\347\273\223\350\264\246\345\256\242\345\215\225", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "\345\267\262\347\273\223\350\264\246\345\256\242\345\215\225", nullptr));
        pbnRegisterInfo->setText(QCoreApplication::translate("Widget", "\346\263\250\345\206\214\347\224\250\346\210\267", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_6), QCoreApplication::translate("Widget", "\345\256\242\346\210\267\347\256\241\347\220\206", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("Widget", "\345\212\237\350\203\275\345\274\200\345\217\221\344\270\255", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QCoreApplication::translate("Widget", "\351\244\220\351\245\256\346\234\215\345\212\241", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_7->setToolTip(QCoreApplication::translate("Widget", "\345\212\237\350\203\275\345\274\200\345\217\221\344\270\255", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_7->setText(QCoreApplication::translate("Widget", "\346\264\227\346\266\244\346\234\215\345\212\241", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_8->setToolTip(QCoreApplication::translate("Widget", "\345\212\237\350\203\275\345\274\200\345\217\221\344\270\255", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_8->setText(QCoreApplication::translate("Widget", "\345\205\266\344\273\226\346\234\215\345\212\241", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("Widget", "\346\234\215\345\212\241\347\256\241\347\220\206", nullptr));
#if QT_CONFIG(tooltip)
        pbnBackDatabase->setToolTip(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\345\272\223\345\244\207\344\273\275", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnBackDatabase->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\345\244\207\344\273\275", nullptr));
#if QT_CONFIG(tooltip)
        pbnHelp->setToolTip(QCoreApplication::translate("Widget", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnHelp->setText(QCoreApplication::translate("Widget", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("Widget", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        pbnModiftPwd->setToolTip(QCoreApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnModiftPwd->setText(QCoreApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
#if QT_CONFIG(tooltip)
        pbnLonBlog->setToolTip(QCoreApplication::translate("Widget", "\346\223\215\344\275\234\346\227\245\345\277\227", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnLonBlog->setText(QCoreApplication::translate("Widget", "\346\223\215\344\275\234\346\227\245\345\277\227", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("Widget", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        label->setText(QString());
        groupBox_Down->setTitle(QString());
#if QT_CONFIG(tooltip)
        pbnbackhome->setToolTip(QCoreApplication::translate("Widget", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
#endif // QT_CONFIG(tooltip)
        pbnbackhome->setText(QCoreApplication::translate("Widget", "\350\277\224\345\233\236\344\270\273\351\241\265", nullptr));
        label_CurrentUser->setText(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\347\224\250\346\210\267", nullptr));
        label_SoftTime->setText(QCoreApplication::translate("Widget", "\347\263\273\347\273\237\350\277\220\350\241\214\346\227\266\351\227\264", nullptr));
        label_CurrentTime->setText(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\346\227\266\351\227\264", nullptr));
        label_CompanyName->setText(QCoreApplication::translate("Widget", "\345\205\254\345\217\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
