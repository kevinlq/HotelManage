#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QEvent>
#include <QKeyEvent>

#include "registerdialog.h"
#include "app/mysqlapi.h"
#include "customerwindget.h"
#include "widget.h"             //主界面

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();
    void InitForm();

    //保存当前的用户和密码
    void WriteCurrentUser(QString tablename,QString username,
                          QString usertype,QString userpwd );

    //检查表是有内容
    int FindTableIsEmpty(QString tablename);

    //删除表中内容
    void DeleteTableContent(QString tablename);
    
private slots:
    void on_btnLogin_clicked();

    void on_btnMenu_Min_clicked();

    void on_btnMenu_Close_clicked();

    void on_btnresgister_clicked();

    void on_radioButtonCustomer_clicked();

    void on_radioButtonAdmin_clicked();

protected:
    bool eventFilter(QObject *obj, QEvent *event);//键盘事件的响应
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);

private:
    Ui::LoginDialog *ui;

    int total;
    MysqlApi *mysql;
    RegisterDialog *registerdialog;     //注册界面
    Widget *mainwidget;                 //系统主界面
    CustomerWindget *customewidget;     //顾客后主登陆界面

    QRect location;
    QPoint mousePoint;
    bool mousePressed;
};

#endif // LOGINDIALOG_H
