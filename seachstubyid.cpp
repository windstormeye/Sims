#include "seachstubyid.h"
#include "ui_seachstubyid.h"
#include "student.h"
#include <iostream>
#include <string.h>

extern QList<Student> lst;

seachStuById::seachStuById(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seachStuById)
{
    ui->setupUi(this);

    connect(ui->pushButton,                 SIGNAL(clicked(bool)),  this,   SLOT(close()));
    connect(ui->sureBtn,                    SIGNAL(clicked(bool)),  this,   SLOT(searchStuById()));
}

seachStuById::~seachStuById()
{
    delete ui;
}

void seachStuById::searchStuById()
{
    bool flag = false;
    QByteArray a = ui->lineEdit->text().toLatin1();
    char *tID = a.data();
    QList<Student>::iterator it;
    QString str2 = QString(QLatin1String(tID));     //C++中的compare在Qt中无效，采用QString的方法
    for(it = lst.begin(); it != lst.end(); ++it)
    {
        QString str1 = QString(QLatin1String(it->ID));
        if (QString::compare(str1,str2))
               {
                   ui->textBrowser->setText("查找到该学生的信息如下：");
                   ui->textBrowser->append(it->name);
                   ui->textBrowser->append(it->ID);
                   ui->textBrowser->append(QString::number(it->score1));
                   ui->textBrowser->append(QString::number(it->score2));
                   flag = true;
               }
    }
    if(!flag)
    {
        ui->textBrowser->setText("未找到该学生信息!");
    }
}

