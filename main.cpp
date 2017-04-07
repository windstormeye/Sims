#include "homewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    homeWindow w;
    w.setWindowTitle("学生信息管理系统 v1.0");
    w.show();

    return a.exec();
}
