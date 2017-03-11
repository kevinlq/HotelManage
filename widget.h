#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <Qtimer>
#include "app/frmmessagebox.h"
#include <QMouseEvent>
#include <QDesktopWidget>
#include <QDateTime>

#include "promanage.h"                       //前台管理中心界面
#include "costomerregisterinfodialog.h"      //注册客户信息
#include "romminfo.h"                       //房间信息界面
#include "modiftroomprice.h"                //修改房间信息界面
#include "checkcutomdialog.h"               //顾客登记入住界面
#include "logblogdialog.h"                  //操作日志界面
#include "modifypwddialog.h"                //修改密码界面
#include "roompicdialog.h"                  //房间照片展示界面
#include "backupdatanasedialog.h"           //数据库备份界面
#include "checkoutdialog.h"                 //退房界面

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
protected:
    bool eventFilter(QObject *obj, QEvent *event);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);
private slots:
    void on_btnMenu_Close_clicked();

    void on_btnMenu_Max_clicked();

    void on_btnMenu_Min_clicked();

    void on_pbnAsk_clicked();

    void on_pbnError_clicked();

    void on_pbnHint_clicked();
    void on_pbnRegisterInfo_clicked();

    void on_pbnRoomInfo_clicked();

    void on_pbnModify_clicked();

    void on_pbnModiftPwd_clicked();

    void on_pbnCheck_clicked();

    void on_pbnLonBlog_clicked();

    void on_pbnRoomLock_clicked();

    void on_pbnbackhome_clicked();

    void on_pbnBackDatabase_clicked();

    void on_pbnCheckOut_clicked();

    void on_pbnHelp_clicked();

public slots:
    void showCurrentTime();
private:
    Ui::Widget *ui;
    QPoint mousePoint;
    bool mousePressed;
    bool max;
    QRect location;
    void InitStyle();

    QTimer *timer;

    ProManage *promanage;                       //前台管理
    CostomerRegisterInfoDialog *constumerInfo;  //注册客户信息界面
    RommInfo *romminfo;                         //房间信息界面
    ModiftRoomPrice *modifyRoom;                //修改房间信息
    CheckCutomDialog *checkcustom;              //顾客登记入住界面
    LogBlogDialog *logblog;                     //操作日志
    ModifyPwdDialog *modifypwd;                 //修改密码
    RoomPicDialog *roompicture;                 //房间照片展
    BackupDatanaseDialog *backdatabase;         //数据库备份界面
    CheckOutDialog *checkoutRoom;               //退房界面
};

#endif // WIDGET_H
