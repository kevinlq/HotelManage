/********************************************************************************
** Form generated from reading UI file 'logblogdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGBLOGDIALOG_H
#define UI_LOGBLOGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogBlogDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *gboxTop;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QCheckBox *ckTriggerTime;
    QLabel *labTimeStart;
    QDateEdit *dateStart;
    QLabel *labTimeEnd;
    QDateEdit *dateEnd;
    QGridLayout *gridLayout_2;
    QCheckBox *ckTriggerType;
    QComboBox *cboxTriggerType;
    QCheckBox *ckUserName;
    QComboBox *cboxUserName;
    QGridLayout *gridLayout_3;
    QPushButton *btnSelect;
    QPushButton *btnDelete;
    QPushButton *btnPrint;
    QPushButton *btnExcel;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;

    void setupUi(QDialog *LogBlogDialog)
    {
        if (LogBlogDialog->objectName().isEmpty())
            LogBlogDialog->setObjectName(QString::fromUtf8("LogBlogDialog"));
        LogBlogDialog->resize(696, 466);
        verticalLayout_3 = new QVBoxLayout(LogBlogDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gboxTop = new QGroupBox(LogBlogDialog);
        gboxTop->setObjectName(QString::fromUtf8("gboxTop"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        gboxTop->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(gboxTop);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ckTriggerTime = new QCheckBox(gboxTop);
        ckTriggerTime->setObjectName(QString::fromUtf8("ckTriggerTime"));

        gridLayout->addWidget(ckTriggerTime, 0, 0, 1, 1);

        labTimeStart = new QLabel(gboxTop);
        labTimeStart->setObjectName(QString::fromUtf8("labTimeStart"));

        gridLayout->addWidget(labTimeStart, 0, 1, 1, 1);

        dateStart = new QDateEdit(gboxTop);
        dateStart->setObjectName(QString::fromUtf8("dateStart"));
        dateStart->setEnabled(true);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setKerning(true);
        dateStart->setFont(font1);
        dateStart->setFocusPolicy(Qt::WheelFocus);
        dateStart->setContextMenuPolicy(Qt::DefaultContextMenu);
        dateStart->setInputMethodHints(Qt::ImhPreferNumbers);
        dateStart->setFrame(true);
        dateStart->setAccelerated(false);
        dateStart->setKeyboardTracking(true);
        dateStart->setCalendarPopup(true);

        gridLayout->addWidget(dateStart, 0, 2, 1, 1);

        labTimeEnd = new QLabel(gboxTop);
        labTimeEnd->setObjectName(QString::fromUtf8("labTimeEnd"));

        gridLayout->addWidget(labTimeEnd, 1, 1, 1, 1);

        dateEnd = new QDateEdit(gboxTop);
        dateEnd->setObjectName(QString::fromUtf8("dateEnd"));
        dateEnd->setFont(font1);
        dateEnd->setCalendarPopup(true);

        gridLayout->addWidget(dateEnd, 1, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ckTriggerType = new QCheckBox(gboxTop);
        ckTriggerType->setObjectName(QString::fromUtf8("ckTriggerType"));

        gridLayout_2->addWidget(ckTriggerType, 0, 0, 1, 1);

        cboxTriggerType = new QComboBox(gboxTop);
        cboxTriggerType->addItem(QString());
        cboxTriggerType->addItem(QString());
        cboxTriggerType->setObjectName(QString::fromUtf8("cboxTriggerType"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        cboxTriggerType->setFont(font2);

        gridLayout_2->addWidget(cboxTriggerType, 0, 1, 1, 1);

        ckUserName = new QCheckBox(gboxTop);
        ckUserName->setObjectName(QString::fromUtf8("ckUserName"));

        gridLayout_2->addWidget(ckUserName, 1, 0, 1, 1);

        cboxUserName = new QComboBox(gboxTop);
        cboxUserName->addItem(QString());
        cboxUserName->addItem(QString());
        cboxUserName->setObjectName(QString::fromUtf8("cboxUserName"));
        cboxUserName->setFont(font2);

        gridLayout_2->addWidget(cboxUserName, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btnSelect = new QPushButton(gboxTop);
        btnSelect->setObjectName(QString::fromUtf8("btnSelect"));
        btnSelect->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/select.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSelect->setIcon(icon);
        btnSelect->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(btnSelect, 0, 0, 1, 1);

        btnDelete = new QPushButton(gboxTop);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDelete->setIcon(icon1);
        btnDelete->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(btnDelete, 0, 1, 1, 1);

        btnPrint = new QPushButton(gboxTop);
        btnPrint->setObjectName(QString::fromUtf8("btnPrint"));
        btnPrint->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPrint->setIcon(icon2);
        btnPrint->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(btnPrint, 1, 0, 1, 1);

        btnExcel = new QPushButton(gboxTop);
        btnExcel->setObjectName(QString::fromUtf8("btnExcel"));
        btnExcel->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/excel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExcel->setIcon(icon3);
        btnExcel->setIconSize(QSize(20, 20));

        gridLayout_3->addWidget(btnExcel, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);


        horizontalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addWidget(gboxTop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(LogBlogDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 20, -1, -1);
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addWidget(groupBox);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(LogBlogDialog);

        QMetaObject::connectSlotsByName(LogBlogDialog);
    } // setupUi

    void retranslateUi(QDialog *LogBlogDialog)
    {
        LogBlogDialog->setWindowTitle(QCoreApplication::translate("LogBlogDialog", "Dialog", nullptr));
        gboxTop->setTitle(QString());
        ckTriggerTime->setText(QCoreApplication::translate("LogBlogDialog", "\346\227\266\351\227\264", nullptr));
        labTimeStart->setText(QCoreApplication::translate("LogBlogDialog", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        dateStart->setDisplayFormat(QCoreApplication::translate("LogBlogDialog", "yyyy\345\271\264M\346\234\210d\346\227\245", nullptr));
        labTimeEnd->setText(QCoreApplication::translate("LogBlogDialog", "\347\273\223\346\235\237\346\227\266\351\227\264", nullptr));
        dateEnd->setDisplayFormat(QCoreApplication::translate("LogBlogDialog", "yyyy\345\271\264M\346\234\210d\346\227\245", nullptr));
        ckTriggerType->setText(QCoreApplication::translate("LogBlogDialog", "\347\261\273\345\236\213", nullptr));
        cboxTriggerType->setItemText(0, QCoreApplication::translate("LogBlogDialog", "\351\241\276\345\256\242", nullptr));
        cboxTriggerType->setItemText(1, QCoreApplication::translate("LogBlogDialog", "\347\256\241\347\220\206\345\221\230", nullptr));

        ckUserName->setText(QCoreApplication::translate("LogBlogDialog", "\346\223\215\344\275\234\345\221\230", nullptr));
        cboxUserName->setItemText(0, QCoreApplication::translate("LogBlogDialog", "admin", nullptr));
        cboxUserName->setItemText(1, QCoreApplication::translate("LogBlogDialog", "\347\256\241\347\220\206\345\221\230", nullptr));

        btnSelect->setText(QCoreApplication::translate("LogBlogDialog", "\346\237\245\350\257\242(&S)", nullptr));
        btnDelete->setText(QCoreApplication::translate("LogBlogDialog", "\345\210\240\351\231\244(&D)", nullptr));
        btnPrint->setText(QCoreApplication::translate("LogBlogDialog", "\346\211\223\345\215\260(&P)", nullptr));
#if QT_CONFIG(tooltip)
        btnExcel->setToolTip(QCoreApplication::translate("LogBlogDialog", "\345\212\237\350\203\275\345\274\200\345\217\221\344\270\255", nullptr));
#endif // QT_CONFIG(tooltip)
        btnExcel->setText(QCoreApplication::translate("LogBlogDialog", "\345\257\274\345\207\272(&E)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LogBlogDialog", "\346\223\215\344\275\234\346\227\245\345\277\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogBlogDialog: public Ui_LogBlogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGBLOGDIALOG_H
