#include "mywidget.h"

// QApplication应用程序类
// Qt头文件没有.h
// 头文件和类名一样
#include <QApplication>



int main(int argc, char *argv[])
{
    // 有且只有一个应用程序类的对象
    QApplication a(argc, argv);

    // MyWidget 继承于QWidget, QWidget 是一个窗口基类
    // 所以MyWidget 也是窗口类
    // w就算一个窗口
    MyWidget w;

    // 窗口默认是隐藏 需要用show()来显示
    w.show();

    // return a.exec()
    // <=>
    // a.exec();
    // return 0;

    // 让程序一直执行，等待用户操作
    // 等待事件的发生
    return a.exec();
}
