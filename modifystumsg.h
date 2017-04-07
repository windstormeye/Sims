#ifndef MODIFYSTUMSG_H
#define MODIFYSTUMSG_H

#include <QWidget>

namespace Ui {
class modifyStuMsg;
}

class modifyStuMsg : public QWidget
{
    Q_OBJECT

public:
    explicit modifyStuMsg(QWidget *parent = 0);
    ~modifyStuMsg();
private:
    Ui::modifyStuMsg *ui;

public slots:
    void modifyMsg();

};

#endif // MODIFYSTUMSG_H
