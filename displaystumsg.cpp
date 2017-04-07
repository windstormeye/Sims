#include "displaystumsg.h"
#include "ui_displaystumsg.h"
#include "homewindow.h"
#include "student.h"

extern QList<Student> lst;

displayStuMsg::displayStuMsg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::displayStuMsg)
{
    ui->setupUi(this);

    connect(ui->finishBtn,               SIGNAL(clicked(bool)),  this,   SLOT(close()));
}

displayStuMsg::~displayStuMsg()
{
    delete ui;
}


void displayStuMsg::dispStuMsg()
{
    QList<Student>::iterator it;
    ui->textBrowser->setText("学生信息如下：");

    for(it = lst.begin(); it != lst.end(); it++)
    {
            ui->textBrowser->append(it->name);
            ui->textBrowser->append(it->ID);
            ui->textBrowser->append(QString::number(it->score1));
            ui->textBrowser->append(QString::number(it->score2));
    }

    ui->textBrowser->append("显示完毕！");
}

bool displayStuMsg::compareAveScore(const Student &a,const Student &b)
{
    return (a.score1+a.score2) > (b.score1 + b.score2);
}

void displayStuMsg::sortWithStuAve()
{
    QList<Student>::iterator it;
    qSort(lst.begin(),lst.end(), compareAveScore);
    ui->textBrowser->setText("学生信息如下：");

    for(it = lst.begin(); it != lst.end(); it++)
    {
            ui->textBrowser->append(it->ID);
            ui->textBrowser->append(it->name);
            ui->textBrowser->append(QString::number(it->score1));
            ui->textBrowser->append(QString::number(it->score2));
    }

    ui->textBrowser->append("显示完毕！");

}
