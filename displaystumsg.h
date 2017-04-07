#ifndef DISPLAYSTUMSG_H
#define DISPLAYSTUMSG_H

#include <QWidget>

class Student;

namespace Ui {
class displayStuMsg;
}

class displayStuMsg : public QWidget
{
    Q_OBJECT

public:
    explicit displayStuMsg(QWidget *parent = 0);
    ~displayStuMsg();
    static bool  compareAveScore(const Student &a, const Student &b);

private:
    Ui::displayStuMsg *ui;

public slots:
    void dispStuMsg();
    void sortWithStuAve();
};

#endif // DISPLAYSTUMSG_H
