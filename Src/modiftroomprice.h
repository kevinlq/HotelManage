#ifndef MODIFTROOMPRICE_H
#define MODIFTROOMPRICE_H

#include <QWidget>
#include <QTableView>
#include <QSqlQueryModel>

namespace Ui {
class ModiftRoomPrice;
}

class ModiftRoomPrice : public QWidget
{
    Q_OBJECT
    
public:
    explicit ModiftRoomPrice(QWidget *parent = 0);
    ~ModiftRoomPrice();

    void initForm();

    //将某个表中的数据绑定到指定的TableView上
    void MyBindTable(QString tableName, QTableView *tableView,
                     QString columnNames[], int columnWidths[]);
    
private slots:
    void on_pbnAdd_clicked();

    void on_pbnModify_clicked();

    void on_pbnSave_clicked();

    void on_pbnCancel_clicked();

public slots:
    void showRoomInfo();//显示房间信息槽函数

private:
    Ui::ModiftRoomPrice *ui;

    QSqlQueryModel *QueryModel;     //查询模型
    QTableView *TableView;          //显示数据的表格对象
    QString ColumnNames[3];         //列名数组声明
    int ColumnWidths[3];            //列宽数组声明
};

#endif // MODIFTROOMPRICE_H
