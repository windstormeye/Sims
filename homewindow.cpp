#include "homewindow.h"
#include "ui_homewindow.h"
#include "readmsgfromfilewd.h"
#include <QList>
#include <QDialog>
#include <iostream>
#include "student.h"
#include "displaystumsg.h"
#include "inputstumsg.h"
#include "seachstubyid.h"
#include "insetstu.h"
#include "modifystumsg.h"
#include "byebye.h"

class Student;
QList<Student> lst;  // 此处的lst放在student.h文件中就会报错


homeWindow::homeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::homeWindow)
{
    ui->setupUi(this);

    connect(ui->readByfileBtn,                    SIGNAL(clicked(bool)),  this,   SLOT(readStuMsgFormFile()));
    connect(ui->outputStudentMsgBtn,              SIGNAL(clicked(bool)),  this,   SLOT(disStuMsg()));
    connect(ui->inputStudentMsgBtn,               SIGNAL(clicked(bool)),  this,   SLOT(inpStuMsg()));
    connect(ui->sortBtn,                          SIGNAL(clicked(bool)),  this,   SLOT(sortStuAve()));
    connect(ui->findMsgWithStudentNumBtn,         SIGNAL(clicked(bool)),  this,   SLOT(search()));
    connect(ui->insertStudentMsgBtn,              SIGNAL(clicked(bool)),  this,   SLOT(insert()));
    connect(ui->modifyStudentMsgBtn,              SIGNAL(clicked(bool)),  this,   SLOT(modify()));
    connect(ui->writeAllRecordToFileBtn,          SIGNAL(clicked(bool)),  this,   SLOT(write()));
    connect(ui->exitBtn,                          SIGNAL(clicked(bool)),  this,   SLOT(byeBye()));
}

homeWindow::~homeWindow()
{
    delete ui;
}

void homeWindow::readStuMsgFormFile()
{
    readMsgFromFileWD* readWD = new readMsgFromFileWD;
    readWD->setWindowTitle("读取数据");
    readWD->show();
    readWD->readMsgFromFile();
}

void homeWindow::disStuMsg()
{

    displayStuMsg *dis = new displayStuMsg;
    dis->setWindowTitle("显示学生信息");
    dis->show();
    dis->dispStuMsg();
}

void homeWindow::inpStuMsg()
{
    inputStuMsg *inp = new inputStuMsg;
    inp->setWindowTitle("输入学生信息");
    inp->show();
}

void homeWindow::sortStuAve()
{
    displayStuMsg *dis = new displayStuMsg;
    dis->setWindowTitle("按降序对学生平均分进行排序");
    dis->show();
    dis->sortWithStuAve();
}

void homeWindow::search()
{
    seachStuById *sea = new seachStuById;
    sea->setWindowTitle("根据学号查找学生信息");
    sea->show();
}

void homeWindow::insert()
{
    insetStu *ins = new insetStu;
    ins->setWindowTitle("插入学生");
    ins->show();
}

void homeWindow::modify()
{
    modifyStuMsg *mod = new modifyStuMsg;
    mod->setWindowTitle("修改学生信息");
    mod->show();
}

void homeWindow::write()
{
    readMsgFromFileWD* readWD = new readMsgFromFileWD;
    readWD->setWindowTitle("将数据写入文件");
    readWD->show();
    readWD->saveAsFile();
}

void homeWindow::byeBye()
{
    this->hide();
    byebye *b = new byebye;
    b->setWindowTitle("学生信息管理系统");
    b->show();
}
