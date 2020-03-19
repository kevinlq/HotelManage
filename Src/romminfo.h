#ifndef ROMMINFO_H
#define ROMMINFO_H

#include <QWidget>

namespace Ui {
class RommInfo;
}

class RommInfo : public QWidget
{
    Q_OBJECT
    
public:
    explicit RommInfo(QWidget *parent = 0);
    ~RommInfo();
    
private:
    Ui::RommInfo *ui;
};

#endif // ROMMINFO_H
