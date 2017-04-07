#ifndef BYEBYE_H
#define BYEBYE_H

#include <QWidget>

namespace Ui {
class byebye;
}

class byebye : public QWidget
{
    Q_OBJECT

public:
    explicit byebye(QWidget *parent = 0);
    ~byebye();

private:
    Ui::byebye *ui;
};

#endif // BYEBYE_H
