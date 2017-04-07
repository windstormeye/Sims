#include "inputstumsg.h"
#include "ui_inputstumsg.h"
#include "student.h"
#include <iostream>
#include "homewindow.h"
#include <QDialog>
#include <QLabel>

extern QList<Student> lst;

inputStuMsg::inputStuMsg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::inputStuMsg)
{
    ui->setupUi(this);

    connect(ui->finishBtn,              SIGNAL(clicked(bool)),  this,   SLOT(getStuMsg()));
}

inputStuMsg::~inputStuMsg()
{
    delete ui;
}


void inputStuMsg::getStuMsg()
{

    QByteArray a =ui->stuIdLineText->text().toLatin1();
    QByteArray b = ui->stuNameLineText->text().toLatin1();
    char* str1 = a.data();
    char* str2 = b.data();
    int n = ui->stuScore1LineText->text().toInt();
    int m = ui->stuScore2LineText->text().toInt();
    Student stu(str2, str1, n, m);
    lst.push_back(stu);

    this->close();
}
