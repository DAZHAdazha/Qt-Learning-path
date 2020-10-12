#include "mainwidget.h"
#include<QPushButton>

// 构造函数
MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    // 需要使用头文件新建对象，否则构造函数运行完后对象消失
    b1.setParent(this); // 指定父对象this
    b1.setText("close");
    b1.move(100,100);

    // *b2为指针,需要动态分配空间，因此需要new
    b2 = new QPushButton(this);
    b2->setText("abc"); //注意因为b2为指针所以需要用->

    //发出信号的地址，信号发出者的类作用域pressed,处理者,处理的动作
    connect(&b1, &QPushButton::pressed, this, &MainWidget::close);
    /*
     * &b1:信号发出者，指针类型
     * &QPushButton::pressed：处理的信号， &发送者的类名::信号名字
     * this: 信号接收者
     * &MainWidget::close:槽函数，信号处理函数 &接受的类名::槽函数名字

    /*
     *自定义槽，普通函数的用法
     * Qt5:任意的成员函数，普通全局函数，静态函数
     * 槽函数需要和信号一致（参数，返回值）
     * 由于信号都是没有返回值，所以槽函数一定没有返回值
    */

    //mySlot需要在header文件中声明,注意b2已经是一个指针了不用再加&
    connect(b2, &QPushButton::released, this, &MainWidget::mySlot);

    connect(b2, &QPushButton::released, &b1, &QPushButton::hide);

    /* 信号：短信
     * 槽函数：接受短信的手机
     */

}

//定义mySlot函数
void MainWidget::mySlot(){
    b2->setText("changed");
}

// 析构函数
MainWidget::~MainWidget()
{

}
