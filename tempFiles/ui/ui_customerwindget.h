/********************************************************************************
** Form generated from reading UI file 'customerwindget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERWINDGET_H
#define UI_CUSTOMERWINDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerWindget
{
public:
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnMenu;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Max;
    QPushButton *btnMenu_Close;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pbnroomPicture;
    QPushButton *punroom;
    QPushButton *pbnGuest;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_14;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableViewRoomInfo;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *letNo;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *letprice;
    QLabel *label_5;
    QLabel *label_3;
    QDateEdit *dateRfrom;
    QLabel *label_6;
    QDateEdit *dateRto;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbnROK;
    QPushButton *pbnRoomCancle;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *radioButtonOk;
    QRadioButton *radioButtonNo;
    QComboBox *comboBoxRoomType;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableViewCustomeInfo;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLineEdit *letusename;
    QLabel *label_11;
    QLineEdit *letsex;
    QLabel *label_8;
    QLineEdit *letpossword;
    QLabel *label_12;
    QLineEdit *letphone;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_13;
    QLineEdit *letaddress;
    QLabel *label_10;
    QLineEdit *letGnote;
    QLabel *label_9;
    QDateEdit *dateCustomeIn;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pbnmodify;
    QPushButton *pbuModifyOk;
    QPushButton *pbnCancle;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *CustomerWindget)
    {
        if (CustomerWindget->objectName().isEmpty())
            CustomerWindget->setObjectName(QString::fromUtf8("CustomerWindget"));
        CustomerWindget->resize(605, 488);
        verticalLayout_13 = new QVBoxLayout(CustomerWindget);
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        widget_title = new QWidget(CustomerWindget);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(100, 33));
        widget_title->setMouseTracking(false);
        horizontalLayout_5 = new QHBoxLayout(widget_title);
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        lab_Ico = new QLabel(widget_title);
        lab_Ico->setObjectName(QString::fromUtf8("lab_Ico"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Ico->sizePolicy().hasHeightForWidth());
        lab_Ico->setSizePolicy(sizePolicy1);
        lab_Ico->setMinimumSize(QSize(30, 0));
        lab_Ico->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lab_Ico);

        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QString::fromUtf8("lab_Title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy2);
        lab_Title->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lab_Title);

        widget_menu = new QWidget(widget_title);
        widget_menu->setObjectName(QString::fromUtf8("widget_menu"));
        sizePolicy1.setHeightForWidth(widget_menu->sizePolicy().hasHeightForWidth());
        widget_menu->setSizePolicy(sizePolicy1);
        horizontalLayout_6 = new QHBoxLayout(widget_menu);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
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

        horizontalLayout_6->addWidget(btnMenu);

        btnMenu_Min = new QPushButton(widget_menu);
        btnMenu_Min->setObjectName(QString::fromUtf8("btnMenu_Min"));
        sizePolicy3.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy3);
        btnMenu_Min->setMinimumSize(QSize(31, 0));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);
        btnMenu_Min->setFlat(true);

        horizontalLayout_6->addWidget(btnMenu_Min);

        btnMenu_Max = new QPushButton(widget_menu);
        btnMenu_Max->setObjectName(QString::fromUtf8("btnMenu_Max"));
        sizePolicy3.setHeightForWidth(btnMenu_Max->sizePolicy().hasHeightForWidth());
        btnMenu_Max->setSizePolicy(sizePolicy3);
        btnMenu_Max->setMinimumSize(QSize(31, 0));
        btnMenu_Max->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Max->setFocusPolicy(Qt::NoFocus);
        btnMenu_Max->setFlat(true);

        horizontalLayout_6->addWidget(btnMenu_Max);

        btnMenu_Close = new QPushButton(widget_menu);
        btnMenu_Close->setObjectName(QString::fromUtf8("btnMenu_Close"));
        sizePolicy3.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy3);
        btnMenu_Close->setMinimumSize(QSize(40, 0));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setFlat(true);

        horizontalLayout_6->addWidget(btnMenu_Close);


        horizontalLayout_5->addWidget(widget_menu);


        verticalLayout_12->addWidget(widget_title);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_9 = new QSpacerItem(6, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox = new QGroupBox(CustomerWindget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        groupBox->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 20, -1, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pbnroomPicture = new QPushButton(groupBox);
        pbnroomPicture->setObjectName(QString::fromUtf8("pbnroomPicture"));
        pbnroomPicture->setMinimumSize(QSize(90, 40));
        pbnroomPicture->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(pbnroomPicture);

        punroom = new QPushButton(groupBox);
        punroom->setObjectName(QString::fromUtf8("punroom"));
        punroom->setMinimumSize(QSize(90, 40));
        punroom->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(punroom);

        pbnGuest = new QPushButton(groupBox);
        pbnGuest->setObjectName(QString::fromUtf8("pbnGuest"));
        pbnGuest->setMinimumSize(QSize(90, 40));
        pbnGuest->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(pbnGuest);

        verticalSpacer_2 = new QSpacerItem(28, 60, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_14->setFont(font1);
        label_14->setTextFormat(Qt::PlainText);
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_14);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_4->addWidget(groupBox);

        stackedWidget = new QStackedWidget(CustomerWindget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_11 = new QVBoxLayout(page);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableViewRoomInfo = new QTableView(groupBox_2);
        tableViewRoomInfo->setObjectName(QString::fromUtf8("tableViewRoomInfo"));

        verticalLayout_3->addWidget(tableViewRoomInfo);


        verticalLayout_5->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_3 = new QGroupBox(page);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 20, -1, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        letNo = new QLineEdit(groupBox_3);
        letNo->setObjectName(QString::fromUtf8("letNo"));

        gridLayout->addWidget(letNo, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        letprice = new QLineEdit(groupBox_3);
        letprice->setObjectName(QString::fromUtf8("letprice"));
        letprice->setEnabled(false);

        gridLayout->addWidget(letprice, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 3, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        dateRfrom = new QDateEdit(groupBox_3);
        dateRfrom->setObjectName(QString::fromUtf8("dateRfrom"));
        dateRfrom->setEnabled(false);
        dateRfrom->setCalendarPopup(true);

        gridLayout->addWidget(dateRfrom, 2, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        dateRto = new QDateEdit(groupBox_3);
        dateRto->setObjectName(QString::fromUtf8("dateRto"));
        dateRto->setCalendarPopup(true);

        gridLayout->addWidget(dateRto, 2, 4, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        pbnROK = new QPushButton(groupBox_3);
        pbnROK->setObjectName(QString::fromUtf8("pbnROK"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pbnROK->sizePolicy().hasHeightForWidth());
        pbnROK->setSizePolicy(sizePolicy4);
        pbnROK->setMinimumSize(QSize(80, 30));
        pbnROK->setCursor(QCursor(Qt::OpenHandCursor));

        gridLayout->addWidget(pbnROK, 3, 1, 1, 1);

        pbnRoomCancle = new QPushButton(groupBox_3);
        pbnRoomCancle->setObjectName(QString::fromUtf8("pbnRoomCancle"));
        sizePolicy4.setHeightForWidth(pbnRoomCancle->sizePolicy().hasHeightForWidth());
        pbnRoomCancle->setSizePolicy(sizePolicy4);
        pbnRoomCancle->setMinimumSize(QSize(80, 30));
        pbnRoomCancle->setCursor(QCursor(Qt::OpenHandCursor));

        gridLayout->addWidget(pbnRoomCancle, 3, 3, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 5, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 3, 2, 1, 1);

        radioButtonOk = new QRadioButton(groupBox_3);
        radioButtonOk->setObjectName(QString::fromUtf8("radioButtonOk"));

        gridLayout->addWidget(radioButtonOk, 1, 4, 1, 1);

        radioButtonNo = new QRadioButton(groupBox_3);
        radioButtonNo->setObjectName(QString::fromUtf8("radioButtonNo"));
        sizePolicy4.setHeightForWidth(radioButtonNo->sizePolicy().hasHeightForWidth());
        radioButtonNo->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(radioButtonNo, 1, 5, 1, 1);

        comboBoxRoomType = new QComboBox(groupBox_3);
        comboBoxRoomType->addItem(QString());
        comboBoxRoomType->addItem(QString());
        comboBoxRoomType->addItem(QString());
        comboBoxRoomType->addItem(QString());
        comboBoxRoomType->setObjectName(QString::fromUtf8("comboBoxRoomType"));

        gridLayout->addWidget(comboBoxRoomType, 0, 4, 1, 2);


        verticalLayout_4->addLayout(gridLayout);


        horizontalLayout->addWidget(groupBox_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_11->addLayout(verticalLayout_5);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_10 = new QVBoxLayout(page_2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        groupBox_4 = new QGroupBox(page_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font);
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tableViewCustomeInfo = new QTableView(groupBox_4);
        tableViewCustomeInfo->setObjectName(QString::fromUtf8("tableViewCustomeInfo"));

        verticalLayout_6->addWidget(tableViewCustomeInfo);


        verticalLayout_9->addWidget(groupBox_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFont(font);
        verticalLayout_8 = new QVBoxLayout(groupBox_5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 20, -1, -1);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        letusename = new QLineEdit(groupBox_5);
        letusename->setObjectName(QString::fromUtf8("letusename"));
        letusename->setEnabled(false);

        gridLayout_2->addWidget(letusename, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 0, 2, 1, 1);

        letsex = new QLineEdit(groupBox_5);
        letsex->setObjectName(QString::fromUtf8("letsex"));

        gridLayout_2->addWidget(letsex, 0, 3, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        letpossword = new QLineEdit(groupBox_5);
        letpossword->setObjectName(QString::fromUtf8("letpossword"));

        gridLayout_2->addWidget(letpossword, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 1, 2, 1, 1);

        letphone = new QLineEdit(groupBox_5);
        letphone->setObjectName(QString::fromUtf8("letphone"));

        gridLayout_2->addWidget(letphone, 1, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 2, 1, 2);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 3, 0, 1, 1);

        letaddress = new QLineEdit(groupBox_5);
        letaddress->setObjectName(QString::fromUtf8("letaddress"));

        gridLayout_2->addWidget(letaddress, 3, 1, 1, 3);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        letGnote = new QLineEdit(groupBox_5);
        letGnote->setObjectName(QString::fromUtf8("letGnote"));
        letGnote->setMinimumSize(QSize(0, 50));

        gridLayout_2->addWidget(letGnote, 4, 1, 1, 3);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        dateCustomeIn = new QDateEdit(groupBox_5);
        dateCustomeIn->setObjectName(QString::fromUtf8("dateCustomeIn"));
        dateCustomeIn->setEnabled(true);
        dateCustomeIn->setCalendarPopup(true);

        gridLayout_2->addWidget(dateCustomeIn, 2, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        pbnmodify = new QPushButton(groupBox_5);
        pbnmodify->setObjectName(QString::fromUtf8("pbnmodify"));
        pbnmodify->setMinimumSize(QSize(80, 30));
        pbnmodify->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnmodify);

        pbuModifyOk = new QPushButton(groupBox_5);
        pbuModifyOk->setObjectName(QString::fromUtf8("pbuModifyOk"));
        pbuModifyOk->setMinimumSize(QSize(80, 30));
        pbuModifyOk->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbuModifyOk);

        pbnCancle = new QPushButton(groupBox_5);
        pbnCancle->setObjectName(QString::fromUtf8("pbnCancle"));
        pbnCancle->setMinimumSize(QSize(80, 30));
        pbnCancle->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_2->addWidget(pbnCancle);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_7->addLayout(horizontalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_7);


        horizontalLayout_3->addWidget(groupBox_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_9->addLayout(horizontalLayout_3);


        verticalLayout_10->addLayout(verticalLayout_9);

        stackedWidget->addWidget(page_2);

        horizontalLayout_4->addWidget(stackedWidget);


        horizontalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout_12->addLayout(horizontalLayout_7);


        verticalLayout_13->addLayout(verticalLayout_12);


        retranslateUi(CustomerWindget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CustomerWindget);
    } // setupUi

    void retranslateUi(QWidget *CustomerWindget)
    {
        CustomerWindget->setWindowTitle(QCoreApplication::translate("CustomerWindget", "Form", nullptr));
        lab_Ico->setText(QString());
        lab_Title->setText(QCoreApplication::translate("CustomerWindget", "\345\244\247\344\274\227\351\205\222\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237\345\256\242\346\210\267\347\253\257", nullptr));
#if QT_CONFIG(tooltip)
        btnMenu->setToolTip(QCoreApplication::translate("CustomerWindget", "\350\217\234\345\215\225", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Min->setToolTip(QCoreApplication::translate("CustomerWindget", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Min->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Max->setToolTip(QCoreApplication::translate("CustomerWindget", "\346\234\200\345\244\247\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Max->setText(QString());
#if QT_CONFIG(tooltip)
        btnMenu_Close->setToolTip(QCoreApplication::translate("CustomerWindget", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMenu_Close->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("CustomerWindget", "\344\277\241\346\201\257", nullptr));
        pbnroomPicture->setText(QCoreApplication::translate("CustomerWindget", "\351\205\222\345\272\227\346\210\277\351\227\264", nullptr));
        punroom->setText(QCoreApplication::translate("CustomerWindget", "\346\210\277\351\227\264\344\277\241\346\201\257", nullptr));
        pbnGuest->setText(QCoreApplication::translate("CustomerWindget", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_14->setText(QCoreApplication::translate("CustomerWindget", "\345\244\247\n"
"\344\274\227\n"
"\351\205\222\n"
"\345\272\227\n"
"\346\254\242\n"
"\350\277\216\n"
"\346\202\250\n"
"", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("CustomerWindget", "\346\210\277\351\227\264\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("CustomerWindget", "\346\210\277\345\217\267", nullptr));
        letNo->setPlaceholderText(QCoreApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\346\210\277\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("CustomerWindget", "\347\261\273\345\236\213", nullptr));
        label_2->setText(QCoreApplication::translate("CustomerWindget", "\344\273\267\346\240\274", nullptr));
        letprice->setPlaceholderText(QCoreApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\344\273\267\346\240\274", nullptr));
        label_5->setText(QCoreApplication::translate("CustomerWindget", "\345\234\250\347\272\277\346\224\257\344\273\230\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("CustomerWindget", "\350\265\267\345\247\213\346\227\266\351\227\264", nullptr));
        label_6->setText(QCoreApplication::translate("CustomerWindget", "\351\200\200\346\210\277\346\227\266\351\227\264", nullptr));
        pbnROK->setText(QCoreApplication::translate("CustomerWindget", "\351\242\204\345\256\232", nullptr));
        pbnRoomCancle->setText(QCoreApplication::translate("CustomerWindget", "\345\217\226\346\266\210", nullptr));
        radioButtonOk->setText(QCoreApplication::translate("CustomerWindget", "\346\230\257", nullptr));
        radioButtonNo->setText(QCoreApplication::translate("CustomerWindget", "\345\220\246", nullptr));
        comboBoxRoomType->setItemText(0, QCoreApplication::translate("CustomerWindget", "\345\215\225\344\272\272\351\227\264", nullptr));
        comboBoxRoomType->setItemText(1, QCoreApplication::translate("CustomerWindget", "\345\217\214\344\272\272\351\227\264", nullptr));
        comboBoxRoomType->setItemText(2, QCoreApplication::translate("CustomerWindget", "\350\261\252\345\215\216\345\245\227\351\227\264", nullptr));
        comboBoxRoomType->setItemText(3, QCoreApplication::translate("CustomerWindget", "\346\200\273\347\273\237\345\245\227\351\227\264", nullptr));

        groupBox_4->setTitle(QString());
        groupBox_5->setTitle(QCoreApplication::translate("CustomerWindget", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_7->setText(QCoreApplication::translate("CustomerWindget", "\347\224\250\346\210\267\345\220\215*", nullptr));
        letusename->setPlaceholderText(QCoreApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        label_11->setText(QCoreApplication::translate("CustomerWindget", "\346\200\247\345\210\253", nullptr));
        letsex->setPlaceholderText(QCoreApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\346\200\247\345\210\253", nullptr));
        label_8->setText(QCoreApplication::translate("CustomerWindget", "\345\257\206\347\240\201*", nullptr));
        letpossword->setPlaceholderText(QCoreApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_12->setText(QCoreApplication::translate("CustomerWindget", "\347\224\265\350\257\235*", nullptr));
        letphone->setPlaceholderText(QCoreApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\347\224\265\350\257\235", nullptr));
        label_13->setText(QCoreApplication::translate("CustomerWindget", "\345\234\260\345\235\200*", nullptr));
        letaddress->setPlaceholderText(QCoreApplication::translate("CustomerWindget", "\350\257\267\350\276\223\345\205\245\350\257\246\347\273\206\345\234\260\345\235\200", nullptr));
        label_10->setText(QCoreApplication::translate("CustomerWindget", "\345\244\207\346\263\250", nullptr));
        letGnote->setPlaceholderText(QCoreApplication::translate("CustomerWindget", "\345\217\257\344\273\245\344\270\215\345\241\253", nullptr));
        label_9->setText(QCoreApplication::translate("CustomerWindget", "\345\205\245\344\275\217\346\227\266\351\227\264", nullptr));
        pbnmodify->setText(QCoreApplication::translate("CustomerWindget", "\344\277\256\346\224\271", nullptr));
        pbuModifyOk->setText(QCoreApplication::translate("CustomerWindget", "\347\241\256\345\256\232", nullptr));
        pbnCancle->setText(QCoreApplication::translate("CustomerWindget", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerWindget: public Ui_CustomerWindget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWINDGET_H
