#ifndef INSETSTU_H
#define INSETSTU_H

#include <QWidget>

namespace Ui {
class insetStu;
}

class insetStu : public QWidget
{
    Q_OBJECT

public:
    explicit insetStu(QWidget *parent = 0);
    ~insetStu();

private:
    Ui::insetStu *ui;

public slots:
    void insertStu();
};

#endif // INSETSTU_H
