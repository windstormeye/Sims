#include "byebye.h"
#include "ui_byebye.h"

byebye::byebye(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::byebye)
{
    ui->setupUi(this);
}

byebye::~byebye()
{
    delete ui;
}
