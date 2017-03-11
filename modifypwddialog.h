#ifndef MODIFYPWDDIALOG_H
#define MODIFYPWDDIALOG_H

#include <QDialog>
#include <QTableView>
#include <QSqlQueryModel>

namespace Ui {
class ModifyPwdDialog;
}

class ModifyPwdDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ModifyPwdDialog(QWidget *parent = 0);
    ~ModifyPwdDialog();

    void InitForm();

    //返回表中某一个字段值
    QString SearchTableValue(QString tablename, QString targetvalue);
    
private slots:
    void on_pbnModifyPwd_clicked();

    void on_pbnCancel_clicked();

private:
    Ui::ModifyPwdDialog *ui;
};

#endif // MODIFYPWDDIALOG_H
