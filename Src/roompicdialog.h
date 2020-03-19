#ifndef ROOMPICDIALOG_H
#define ROOMPICDIALOG_H

#include <QDialog>

namespace Ui {
class RoomPicDialog;
}

class RoomPicDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit RoomPicDialog(QWidget *parent = 0);
    ~RoomPicDialog();
    
private:
    Ui::RoomPicDialog *ui;
};

#endif // ROOMPICDIALOG_H
