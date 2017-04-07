#include "insetstu.h"
#include "ui_insetstu.h"
#include "student.h"
#include <iostream>

extern QList<Student> lst;

insetStu::insetStu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::insetStu)
{
    ui->setupUi(this);

    connect(ui->finishBtn,              SIGNAL(clicked(bool)),  this,   SLOT(insertStu()));
}

insetStu::~insetStu()
{
    delete ui;
}


void insetStu::insertStu()
{
    QList<Student>::iterator it;
//    QByteArray a = ui->laterStuIdLineText->text().toLatin1();
    QByteArray b = ui->stuNameLineText->text().toLatin1();
    QByteArray c = ui->stuIdLineText->text().toLatin1();
    int score1 = ui->stuScore1LineText->text().toInt();
    int score2 = ui->stuScore2LineText->text().toInt();
//    char *lID = a.data();
    QString lID = ui->laterStuIdLineText->text();
    char *tName = b.data();
    char *tID = c.data();

    Student stu(tName,tID,score1,score2);

    for(it = lst.begin(); it != lst.end(); it++)
    {
        if(it->ID == lID)
        {
            lst.insert(it, stu);
        }
            break;
    }
    this->close();
}
