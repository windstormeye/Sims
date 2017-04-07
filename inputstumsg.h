#ifndef INPUTSTUMSG_H
#define INPUTSTUMSG_H

#include <QWidget>

class Student;
namespace Ui {
class inputStuMsg;
}

class inputStuMsg : public QWidget
{
    Q_OBJECT

public:
    explicit inputStuMsg(QWidget *parent = 0);
    ~inputStuMsg();

private:
    Ui::inputStuMsg *ui;

public slots:
    void getStuMsg();

};

#endif // INPUTSTUMSG_H
