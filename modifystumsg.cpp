#include "modifystumsg.h"
#include "ui_modifystumsg.h"
#include "student.h"

extern QList<Student> lst;

modifyStuMsg::modifyStuMsg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifyStuMsg)
{
    ui->setupUi(this);

    connect(ui->pushButton,            SIGNAL(clicked(bool)),  this,   SLOT(modifyMsg()));
}

modifyStuMsg::~modifyStuMsg()
{
    delete ui;
}


void modifyStuMsg::modifyMsg()
{
    QList<Student>::iterator it;
    QByteArray b = ui->newIDlineEdit->text().toLatin1();
    QByteArray c = ui->newNamelineEdit->text().toLatin1();
    char *newID = b.data();
    char *newName = c.data();
    QString oldID =  ui->modifyIDlineEdit->text();

    for(it = lst.begin(); it != lst.end(); ++it)
    {
        if(it->ID == oldID)
        {
            strcpy(it->ID,newID);
            strcpy(it->name,newName);
//            it->ID = b.data();
//            it->name = c.data();       //最后指向的内容是垃圾，因为s对象被析构，其内容被处理
            it->score1 = ui->newScore1lineEdit->text().toInt();
            it->score2 = ui->newScore2lineEdit->text().toInt();

            break;
        }
    }
    this->close();
}
