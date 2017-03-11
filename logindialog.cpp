#include "logindialog.h"
#include "ui_logindialog.h"
#include "app/iconhelper.h"
#include "app/myapp.h"



LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    this->InitForm();
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::InitForm()
{
    total = 0;
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->txtUserPwd->setFocus();

    customewidget = new CustomerWindget;


    //mysql->BindData("StaffName","Staff",ui->txtUserName);
    location = this->geometry();
    mousePressed = false;
    //安装事件监听器,让标题栏识别鼠标双击
    ui->lab_Title->installEventFilter(this);

    IconHelper::Instance()->SetIcon(ui->btnMenu_Close, QChar(0xf00d), 10);
    IconHelper::Instance()->SetIcon(ui->btnMenu_Min, QChar(0xf068), 10);
    IconHelper::Instance()->SetIcon(ui->btnMenu, QChar(0xf0c9), 10);
    IconHelper::Instance()->SetIcon(ui->lab_Ico, QChar(0xf015), 12);
    ui->labCompany->setText(tr("技术支持：太原工业学院--计算机工程系"));
    //ui->radioButtonAdmin->setCheckable(true);

    ui->btnLogin->setToolTip(tr("登录"));
    ui->btnresgister->setToolTip(tr("注册"));
    ui->radioButtonAdmin->setToolTip(tr("管理员"));
    ui->radioButtonCustomer->setToolTip(tr("客户"));
}

/*
 *函数功能：保存当前用户名和类型
 *输入参数：数据表名，用户名，用户类型，用户密码
 *说明：在插入时总会先判断，若有数值，进行删除在插入
*/
void LoginDialog::WriteCurrentUser(QString tablename, QString username, QString usertype, QString userpwd)
{
    if(FindTableIsEmpty("currentuser") != 0)
    {
        //deldete table
        this->DeleteTableContent("currentuser");
        qDebug() <<"deltet table ok";
    }
    else
    {
        QSqlQuery query;
        QString sql = "insert into "+tablename+" values(:UserName,:UserType,:UserPwd)";
        qDebug() <<sql;
        query.prepare(sql);
        query.bindValue(":UserName",username);
        query.bindValue(":UserType",usertype);
        query.bindValue(":UserPwd",userpwd);
        query.setForwardOnly(true);
        query.exec();
        qDebug() <<"insert into table ok";
    }
}

/*
 *函数功能：检查某个表是否空表
 *输入参数：表名称
 *返回值：表中的字段值，根据返回值可以判断是否为空
*/
int LoginDialog::FindTableIsEmpty(QString tablename)
{
    int value = 0;
    QString sql = "select count(*) from "+tablename+";";
    qDebug() <<sql;
    QSqlQuery query;
    query.exec(sql);
    if(query.next())
    {
        value = query.value(0).toInt();
        qDebug() <<"in "<<value;
    }
    qDebug()<<"out "<<value;
    return value;
}

/*
 *函数功能：删除表中的内容
 *
*/
void LoginDialog::DeleteTableContent(QString tablename)
{
    QString sql ="delete from "+tablename+";";
    qDebug() <<sql;
    QSqlQuery query;
    query.exec(sql);
}

void LoginDialog::on_btnLogin_clicked()
{
    QString UserName = ui->txtUserName->text().trimmed();
    QString UserPwd = ui->txtUserPwd->text().trimmed();
    ui->txtUserPwd->setFocus();
    //管理员登录
    if(ui->radioButtonAdmin->isChecked())
    {
        if(UserPwd.isEmpty()&&UserName.isEmpty())
        {
            myHelper::ShowMessageBoxError(tr("用户名或密码不能为空,请重新输入!"));
        }
        else
        {
            QSqlTableModel model;
            model.setTable("Staff");
            model.setFilter(QObject::tr("StaffName = '%1' and StaffPassword ='%2'")
                            .arg(UserName).arg(UserPwd));
            model.select();

            if(model.rowCount() == 1)
            {
                Myapp::LastLoginter = ui->txtUserName->text();
                Myapp::CurrentUserName = Myapp::LastLoginter;
                Myapp::CurrentUserPwd = ui->txtUserPwd->text();
                Myapp::CurrentUserType = tr("管理员");
                Myapp::WriteConfig();           //写进配置文件

                myHelper::MyLoginBlog("logblog","登录","登录系统","管理员");     //写入系统日志
                qDebug() <<UserName<<""<<UserPwd;
                //accept();
                mainwidget = new Widget;
                mainwidget->show();
                this->close();
            }
            else
            {
                myHelper::ShowMessageBoxError(tr("密码错误，请重新输入!"));
                ui->txtUserPwd->clear();
                ui->txtUserPwd->setFocus();
            }
        }
    }
    else if(ui->radioButtonCustomer->isChecked())
    {
        //顾客登录
        if(UserPwd.isEmpty()&&UserName.isEmpty())
        {
            myHelper::ShowMessageBoxError(tr("用户名或密码不能为空,请重新输入!"));
        }
        else
        {
            QSqlQuery query;
            QString sql = "select customerPassword from customer where CustomerName='"+UserName+"';";
            qDebug() <<sql;
            query.exec(sql);
            query.next();
            QString customePwd = query.value(0).toString();
            if(customePwd == UserPwd)
            {
                Myapp::LastLoginter = ui->txtUserName->text();
                Myapp::CurrentUserName = Myapp::LastLoginter;
                Myapp::CurrentUserPwd = ui->txtUserPwd->text();
                Myapp::CurrentUserType = tr("一般用户");
                Myapp::WriteConfig();           //写进配置文件
                myHelper::MyLoginBlog("logblog","登录系统","顾客",ui->txtUserName->text());     //写入系统日志
                customewidget->show();
                this->close();
            }
            else
            {
                total++;
                myHelper::ShowMessageBoxError(tr("密码错误，请重新输入!"));
                ui->txtUserPwd->clear();
                ui->txtUserPwd->setFocus();

                if(total == 3)
                {
                    myHelper::ShowMessageBoxError(tr("系统检测您已连续三次输错密码，若忘记密码请联系管理员！"));
                    qApp->quit();
                }
            }

        }
    }
    else
    {
        myHelper::ShowMessageBoxError(tr("请选择登录身份后在登录!"));
    }

}

bool LoginDialog::eventFilter(QObject *obj, QEvent *event)
{
    //用户按下回车键,触发登录信号.
    if (event->type() == QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);

        if (keyEvent->key() == Qt::Key_Return || keyEvent->key()==Qt::Key_Enter)
        {
            this->on_btnLogin_clicked();
            return true;
        }
    }
    return QObject::eventFilter(obj,event);
}

void LoginDialog::mouseMoveEvent(QMouseEvent *e)
{
    if(mousePressed && (e->buttons()) && Qt::LeftButton)
    {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void LoginDialog::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void LoginDialog::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

void LoginDialog::on_btnMenu_Min_clicked()
{
    this->showMinimized();
}

void LoginDialog::on_btnMenu_Close_clicked()
{
    this->close();
}

void LoginDialog::on_btnresgister_clicked()
{
    registerdialog = new RegisterDialog();
    registerdialog->exec();
}

void LoginDialog::on_radioButtonCustomer_clicked()
{
    ui->txtUserName->setText("张超");
    ui->txtUserPwd->setText("123456");
}

void LoginDialog::on_radioButtonAdmin_clicked()
{
    ui->txtUserName->setText("admin");
    ui->txtUserPwd->setText("admin");
}
