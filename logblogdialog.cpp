#include "logblogdialog.h"
#include "ui_logblogdialog.h"

#include "app/myapp.h"

LogBlogDialog::LogBlogDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogBlogDialog)
{
    ui->setupUi(this);
    this->InitForm();
}

LogBlogDialog::~LogBlogDialog()
{
    delete ui;
}

void LogBlogDialog::InitForm()
{
    //初始化表格列名和列宽
    ColumnNames[0] = tr("时间");
    ColumnNames[1] = tr("出发的动作");
    ColumnNames[2] = tr("内容");
    ColumnNames[3] = tr("操作员名字");

    ColumnWidths[0] = 220;
    ColumnWidths[1] = 120;
    ColumnWidths[2] = 180;
    ColumnWidths[3] = 120;

    ui->ckTriggerType->setChecked(false);
    ui->ckUserName->setChecked(false);

    ui->dateStart->setEnabled(false);
    ui->dateEnd->setEnabled(false);
    ui->cboxUserName->setEnabled(false);
    ui->cboxTriggerType->setEditable(false);

    this->MyBindTable("logblog"," ",ui->tableView,ColumnNames,ColumnWidths);

    ui->dateStart->setDate(QDate::currentDate());
    ui->dateEnd->setDate(QDate::currentDate());

    if(Myapp::LastLoginter !="admin")
    {
        ui->btnDelete->setEnabled(false);
    }
}

void LogBlogDialog::MyBindTable(QString tableName, QString where,QTableView *tableView, QString columnNames[], int columnWidths[])
{
    QueryModel = new QSqlQueryModel(this);
    TableView = tableView;
    QString sql = "SELECT * FROM " + tableName+where;
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

/*
 *函数功能：按条件查询
*/
void LogBlogDialog::on_btnSelect_clicked()
{
    QString sql = " where 1 = 1";

    if(ui->ckUserName->isChecked())
    {
        sql+=" and TriggerUser='"+ui->cboxUserName->currentText()+"'";
    }
    if(ui->ckTriggerType->isChecked())
    {
        sql+=" and Trigger ='"+ui->cboxTriggerType->currentText();
    }
    if(ui->ckTriggerTime->isChecked())
    {
        if (ui->dateStart->date() > ui->dateEnd->date())
        {
            myHelper::ShowMessageBoxError(tr("开始时间不能大于结束时间!"));
            return;
        }
        sql+=" and date(TriggerTimer) >='"+ui->dateStart->date().toString("yyyy-MM-dd")+"'";
        sql+=" and date(TriggerTimer) <='"+ui->dateEnd->date().toString("yyyy-MM-dd")+"'";
    }

    this->MyBindTable("logblog",sql,ui->tableView,ColumnNames,ColumnWidths);
}


/*
 *函数功能：打印功能
 *说明：将当前的数据打印输出

*/
void LogBlogDialog::on_btnPrint_clicked()
{
}

void LogBlogDialog::on_ckTriggerTime_clicked(bool checked)
{
    ui->dateEnd->setEnabled(checked);
    ui->dateStart->setEnabled(checked);
}


void LogBlogDialog::on_ckTriggerType_clicked(bool checked)
{
    ui->cboxTriggerType->setEditable(checked);
}



void LogBlogDialog::on_ckUserName_clicked(bool checked)
{
    ui->cboxUserName->setEnabled(checked);
}

void LogBlogDialog::on_btnDelete_clicked()
{
    if(Myapp::CurrentUserName != "管理员")
    {
        myHelper::ShowMessageBoxError(tr("你没有权限删除记录"));
        return;
    }
}
