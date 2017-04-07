#ifndef HOMEWINDOW_H
#define HOMEWINDOW_H

#include <QMainWindow>
#include <student.h>


namespace Ui {
class homeWindow;
}

class homeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit homeWindow(QWidget *parent = 0);
    ~homeWindow();
private:
    Ui::homeWindow *ui;

public slots:
    void readStuMsgFormFile();
    void disStuMsg();
    void inpStuMsg();
    void sortStuAve();
    void search();
    void insert();
    void modify();
    void write();
    void byeBye();
};



#endif // HOMEWINDOW_H
