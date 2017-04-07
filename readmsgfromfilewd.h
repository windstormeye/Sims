#ifndef READMSGFROMFILEWD_H
#define READMSGFROMFILEWD_H

#include <QWidget>

namespace Ui {
class readMsgFromFileWD;
}

class readMsgFromFileWD : public QWidget
{
    Q_OBJECT

public:
    explicit readMsgFromFileWD(QWidget *parent = 0);
    ~readMsgFromFileWD();
      void readMsgFromFile();
      void saveAsFile();

private:
    Ui::readMsgFromFileWD *ui;
};

#endif // READMSGFROMFILEWD_H
