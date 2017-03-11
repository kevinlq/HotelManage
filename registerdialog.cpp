#include "registerdialog.h"
#include "ui_registerdialog.h"
#include <QDate>
#include <QSqlQuery>
#include <QDebug>

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    this->InitForm();
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::InitForm()
{
    this->setWindowFlags(Qt::FramelessWindowHint);
    setWindowFlags(windowFlags()&~Qt::WindowCloseButtonHint&~Qt::WindowContextHelpButtonHint);//去掉登录框的问号
    this->InitControls();       //控件初始化
    //this->connect(ui->CustomerRePwd,SIGNAL(textChanged(QString)),SLOT(CheckPwdIsSame()));
}

/*
 *函数功能：控件初始化
 *说明：初始化界面的控件
*/
void RegisterDialog::InitControls()
{
    ui->CustomerName->setFocus();
    /*日期控件的设置*/
    ui->CustomerDateTime->setCalendarPopup(true);
    ui->CustomerDateTime->setDate(QDate::currentDate());

    location = this->geometry();
    mousePressed = false;
    //安装事件监听器,让标题栏识别鼠标双击
    ui->lab_Title->installEventFilter(this);
    IconHelper::Instance()->SetIcon(ui->btnMenu_Close, QChar(0xf00d), 10);
    IconHelper::Instance()->SetIcon(ui->lab_Ico, QChar(0xf015), 12);

    ui->btnCancel->setToolTip(tr("取消"));
    ui->btnOk->setToolTip(tr("注册"));

    //正则表达式，对输入的内容进行限制，电话号码11位
    QRegExp rxPhone("\\d{11}$");
    QRegExpValidator *regPhone = new QRegExpValidator(rxPhone,this);
    ui->CustomerPhone->setValidator(regPhone);
}

bool RegisterDialog::eventFilter(QObject *obj, QEvent *event)
{
    //用户按下回车键,触发登录信号.
    if (event->type() == QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);

        if (keyEvent->key() == Qt::Key_Return || keyEvent->key()==Qt::Key_Enter)
        {
            this->on_btnOk_clicked();
            return true;
        }
    }
    return QObject::eventFilter(obj,event);
}

void RegisterDialog::mouseMoveEvent(QMouseEvent *e)
{
    if(mousePressed && (e->buttons()) && Qt::LeftButton)
    {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void RegisterDialog::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void RegisterDialog::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

/*
 *函数功能：注册
 *说明：进行写库操作，将客户信息写进数据库
*/
void RegisterDialog::on_btnOk_clicked()
{
    int customerId = mysql->SearchMaxValue("Id","Customer") + 1;
    QString customerName = ui->CustomerName->text();
    QString customerSex = ui->comboBoxSex->currentText();
    QString customerPwd = ui->CustomerPwd->text();
    QString customerRePwd = ui->CustomerRePwd->text();
    QString customerPhone = ui->CustomerPhone->text();
    QString customerAddress = ui->CustomerAddress->text();
    QString customerRemark = ui->CustomerRemark->text();

    QString CustomerData = QDateTime::currentDateTime().toString("yyyy-MM-dd");
    if(customerName.isEmpty()&& customerPwd.isEmpty() &&customerRePwd.isEmpty())
    {
        myHelper::ShowMessageBoxInfo(tr("必须填满带 * 的内容!"));
    }
    else if(customerRePwd != customerPwd)
    {
        myHelper::ShowMessageBoxError(tr("两次密码不一致，请重新输入!"));
        ui->CustomerPwd->setFocus();
    }
    else
    {

        QSqlQuery query;
        bool ok = query.prepare("INSERT INTO Customer (Id, CustomerName,CustomerSex,CustomerPassword,"
                                "CustomerPhone,CustomerAddress,CustomerData,CustomerRemark)"
                                "VALUES (:Id,:CustomerName,:CustomerSex,:CustomerPassword,:CustomerPhone,:CustomerAddress,:CustomerData,:CustomerRemark)");
        query.bindValue(":Id",customerId);
        query.bindValue(":CustomerName",customerName);
        query.bindValue(":CustomerSex",customerSex);
        query.bindValue(":CustomerPassword",customerPwd);
        query.bindValue(":CustomerPhone",customerPhone);
        query.bindValue(":CustomerAddress",customerAddress);
        query.bindValue(":CustomerData",CustomerData);
        query.bindValue(":CustomerRemark",customerRemark);
        query.setForwardOnly(true);
        query.exec();

        if(ok)
        {
            myHelper::MyLoginBlog("logblog","注册","新用户注册",customerName);
            myHelper::ShowMessageBoxInfo(tr("注册成功!"));
        }
    }
}

void RegisterDialog::on_btnCancel_clicked()
{
    this->close();
}

void RegisterDialog::on_btnMenu_Close_clicked()
{
    this->close();
}

/*
 *函数功能：检验两次输入的密码是否一致
 *说明：若不一致，给客户提醒，要求重新输入
*/
void RegisterDialog::CheckPwdIsSame()
{
    QString pwd = ui->CustomerPwd->text();
    QString RePwd = ui->CustomerRePwd->text();
    if(pwd != RePwd)
    {
        myHelper::ShowMessageBoxError(tr("两次密码不一致，请重新输入!"));
        ui->CustomerPwd->setFocus();
        return;
    }
}
