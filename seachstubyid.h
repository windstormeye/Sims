#ifndef SEACHSTUBYID_H
#define SEACHSTUBYID_H

#include <QWidget>

namespace Ui {
class seachStuById;
}

class seachStuById : public QWidget
{
    Q_OBJECT

public:
    explicit seachStuById(QWidget *parent = 0);
    ~seachStuById();

private:
    Ui::seachStuById *ui;
public slots:
    void searchStuById();
};

#endif // SEACHSTUBYID_H
