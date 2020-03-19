#include "roompicdialog.h"
#include "ui_roompicdialog.h"

RoomPicDialog::RoomPicDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RoomPicDialog)
{
    ui->setupUi(this);
}

RoomPicDialog::~RoomPicDialog()
{
    delete ui;
}
