#include "romminfo.h"
#include "ui_romminfo.h"

RommInfo::RommInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RommInfo)
{
    ui->setupUi(this);
}

RommInfo::~RommInfo()
{
    delete ui;
}
