#include "modiftroomprice.h"
#include "ui_modiftroomprice.h"
#include "app/myhelper.h"

#include <QDebug>
#include <QSqlRecord>
#include <QSqlQuery>

ModiftRoomPrice::ModiftRoomPrice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModiftRoomPrice)
{
    ui->setupUi(this);
    this->initForm();

}

ModiftRoomPrice::~ModiftRoomPrice()
{
    delete ui;
}

void ModiftRoomPrice::initForm()
{
    //初始化表格列名和列宽
    ColumnNames[0] = tr("房间类型编号");
    ColumnNames[1] = tr("房间名称");
    ColumnNames[2] = tr("房间价格");

    ColumnWidths[0] = 100;
    ColumnWidths[1] = 120;
    ColumnWidths[2] = 120;

    MyBindTable("roomtype",ui->tableView,ColumnNames,ColumnWidths);
    this->connect(ui->tableView,SIGNAL(clicked(QModelIndex)),SLOT(showRoomInfo()));

    //初始化
    ui->lineEditNo->setEnabled(false);
    ui->lineEditName->setEnabled(false);
    ui->lineEditPrice->setEnabled(false);

    ui->pbnSave->setEnabled(false);
    ui->pbnCancel->setEnabled(false);


}

void ModiftRoomPrice::MyBindTable(QString tableName, QTableView *tableView, QString columnNames[], int columnWidths[])
{
    QueryModel = new QSqlQueryModel(this);

    TableView = tableView;
    QString sql = "SELECT * FROM " + tableName;
    QueryModel->setQuery(sql);
    TableView->setModel(QueryModel);

    //依次设置列标题、列宽等
    for (int i = 0;i<TableView->model()->columnCount();i++)
    {
        QueryModel->setHeaderData(i,Qt::Horizontal,columnNames[i]);     //设置列标题
        TableView->setColumnWidth(i,columnWidths[i]);                   //设置列宽
    }

    TableView->horizontalHeader()->setHighlightSections(false);         //点击表头时不对表头光亮
    TableView->setSelectionMode(QAbstractItemView::ContiguousSelection);//选中模式为多行选中
    TableView->setSelectionBehavior(QAbstractItemView::SelectRows);     //选中整行
    TableView->setStyleSheet( "QTableView::item:hover{background-color:rgb(92,188,227,200)}"
                              "QTableView::item:selected{background-color:#1B89A1}");
}

void ModiftRoomPrice::on_pbnAdd_clicked()
{
    //清空控件中的内容
    ui->lineEditNo->clear();
    ui->lineEditName->clear();
    ui->lineEditPrice->clear();

    ui->lineEditNo->setEnabled(true);
    ui->lineEditName->setEnabled(true);
    ui->lineEditPrice->setEnabled(true);

    ui->pbnAdd->setEnabled(false);//添加按钮不可用
    ui->pbnModify->setEnabled(false);
    ui->pbnSave->setEnabled(true);
    ui->pbnCancel->setEnabled(true);
}

void ModiftRoomPrice::on_pbnModify_clicked()
{
    //控件内容可以进行输入
    ui->lineEditNo->setEnabled(true);
    ui->lineEditName->setEnabled(true);
    ui->lineEditPrice->setEnabled(true);

    ui->pbnModify->setEnabled(false);//修改按钮不可用
    ui->pbnAdd->setEnabled(false);

    ui->pbnSave->setEnabled(true);
    ui->pbnCancel->setEnabled(true);
}

void ModiftRoomPrice::on_pbnSave_clicked()
{
    QString roomtypeNo = ui->lineEditNo->text();
    QString roomtypeName = ui->lineEditName->text();
    QString roomtypePrice = ui->lineEditPrice->text();

    if(roomtypeNo.isEmpty() &&roomtypeName.isEmpty() && roomtypePrice.isEmpty())
    {
        myHelper::ShowMessageBoxInfo(tr("必须填满所有字段！"));
    }
    else
    {
        QSqlQuery query;
        bool ok = query.prepare("INSERT INTO roomtype (Id, Typename,TypePrice)"
                                "VALUES (:Id,:Typename,:TypePrice)");
        query.bindValue(":Id",roomtypeNo);
        query.bindValue(":Typename",roomtypeName);
        query.bindValue(":TypePrice",roomtypePrice);
        query.setForwardOnly(true);
        query.exec();

        if(ok)
        {
            myHelper::ShowMessageBoxInfo(tr("保存客房信息成功!"));

            myHelper::MyLoginBlog("logblog","修改房间价格",+"房间价格改为"+roomtypePrice,"管理员");
        }
    }
}

void ModiftRoomPrice::on_pbnCancel_clicked()
{
    ui->lineEditNo->setEnabled(false);
    ui->lineEditName->setEnabled(false);
    ui->lineEditPrice->setEnabled(false);

    ui->pbnAdd->setEnabled(true);
    ui->pbnModify->setEnabled(true);

    ui->pbnCancel->setEnabled(false);
    ui->pbnSave->setEnabled(false);
}

/*
 *函数功能：获取鼠标点击房间的值，并显示在相应的界面上
*/
void ModiftRoomPrice::showRoomInfo()
{
    ui->pbnModify->setEnabled(true);
    QSqlQueryModel userMode(ui->tableView);
    QString sql = "SELECT *FROM roomtype;";
    qDebug() <<sql;
    userMode.setQuery(QString(sql));
    int Row = ui->tableView->currentIndex().row();
    QSqlRecord record = userMode.record(Row);
    ui->lineEditNo->setText(record.value(0).toString());
    ui->lineEditName->setText(record.value(1).toString());
    ui->lineEditPrice->setText(record.value(2).toString());
}
