#include "modifypwddialog.h"
#include "ui_modifypwddialog.h"
#include "app/myhelper.h"
#include "app/myapp.h"

#include <QSqlQuery>
#include <QDebug>

ModifyPwdDialog::ModifyPwdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyPwdDialog)
{
    ui->setupUi(this);
    this->InitForm();
}

ModifyPwdDialog::~ModifyPwdDialog()
{
    delete ui;
}

void ModifyPwdDialog::InitForm()
{
    ui->lineEditOldPed->setFocus();
    //显示当前的用户名
    QString currentName = SearchTableValue("currentuser","UserName");
    QString currentType = SearchTableValue("currentuser","UserType");
    ui->labelUserName->setText(currentName);
    ui->labelUserType->setText(currentType);
}

/*
 *函数功能：获取表中的某一字段值
*/
QString ModifyPwdDialog::SearchTableValue(QString tablename,QString targetvalue)
{
    QSqlQuery query;
    QString value = "";
    QString sql = "select "+targetvalue+" from "+tablename+";";
    qDebug() <<sql;
    query.exec(sql);
    if(query.next())
    {
        value = query.value(0).toString();
    }
    qDebug() <<value;
    return value;

}

/*
 *函数功能：确认修改密码，进行写库操作
 *说明：在旧密码是否正确的前提下进行修改
*/
void ModifyPwdDialog::on_pbnModifyPwd_clicked()
{
    QString UserName = Myapp::CurrentUserName;
    QString UserOldPwd = Myapp::CurrentUserPwd;

    QString OldPwd = ui->lineEditOldPed->text();
    QString NewPwd = ui->lineEditNewPwd->text();
    QString ReNewPwd = ui->lineEditReNewPwd->text();

    if(OldPwd.isEmpty() ||NewPwd.isEmpty()||ReNewPwd.isEmpty())
    {
        myHelper::ShowMessageBoxInfo(tr("密码不能为空!"));
    }
    else
    {
        if(NewPwd != ReNewPwd)
        {
            myHelper::ShowMessageBoxInfo(tr("两次密码不一致!请重新输入"));
            ui->lineEditReNewPwd->setFocus();
        }
        else if(UserOldPwd == OldPwd)
        {
            QSqlQuery query;
            QString sql = "update staff set StaffPassword = '"+NewPwd+"' where StaffName='"+UserName+"';";
            qDebug() <<sql;
            query.exec(sql);
            qDebug() <<"update ok!";
            myHelper::ShowMessageBoxInfo(tr("修改密码成功!"));

            myHelper::MyLoginBlog("logblog","修改密码","修改管理员的密码","管理员");
        }
        else
        {
            myHelper::ShowMessageBoxError(tr("旧密码错误，请重新输入"));

            ui->lineEditNewPwd->clear();
            ui->lineEditReNewPwd->clear();
        }

    }

}

/*
 *函数功能：取消按钮，清空密码
*/
void ModifyPwdDialog::on_pbnCancel_clicked()
{
    ui->lineEditOldPed->clear();
    ui->lineEditNewPwd->clear();
    ui->lineEditReNewPwd->clear();
}
