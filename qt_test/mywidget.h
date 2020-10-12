#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

// 按F1 + 鼠标左键可以跳转到帮助文档
class MyWidget : public QWidget
{
    Q_OBJECT //信号与槽的时候需要

public:
    MyWidget(QWidget *parent = 0);
    ~MyWidget();
};

#endif // MYWIDGET_H
