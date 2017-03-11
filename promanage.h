#ifndef PROMANAGE_H
#define PROMANAGE_H

#include "app/mythread.h"
#include "app/mysqlapi.h"
#include <QWidget>
#include <QTimer>

namespace Ui {
class ProManage;
}

class ProManage : public QWidget
{
    Q_OBJECT
    
public:
    explicit ProManage(QWidget *parent = 0);
    ~ProManage();

    void initForm();
    //将某个表中的数据绑定到指定的TableView上
    void MyBindTable(QString tableName, QTableView *tableView,
                     QString columnNames[], int columnWidths[]);
    //将客房信息显示到tableview上
    void BindHotelInfo(QString tableName, QTableView *tableView,
                       QString columnNames[], int columnWidths[]);

    //绑定数据---带条件
    void BindDataSelect(QString tableName,QTableView *tableView,
                        QString orderColumn, QString orderType, QString where,
                        QString columnNames[], int columnWidths[]);

public slots:
    void showtimeslot();//显示时间

    void showCurrentRoomNo();//显示当前房间编号
    
private slots:

    void on_comboBoxRoomType_activated(const QString &arg1);//值改变时产生相应的动作
    void on_comboBoxRoomfloor_activated(const QString &arg1);

    void on_comboBoxRoomStatus_activated(const QString &arg1);

private:
    Ui::ProManage *ui;

    QSqlQueryModel *QueryModel;     //查询模型
    QTableView *TableView;          //显示数据的表格对象
    MysqlApi *mysql;                //数据库操作对象
    QString ColumnNames[5];         //列名数组声明
    int ColumnWidths[5];            //列宽数组声明
    //Mythread mythread;
    QTimer *timer;
};

#endif // PROMANAGE_H
