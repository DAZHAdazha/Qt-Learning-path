#include<QApplication>
#include<QWidget> //窗口控件基类
#include<QPushButton> //按钮类

int main(int argc, char **argv){
    QApplication app(argc, argv);

    //创建窗口对象
    QWidget w;

    //设定标题
    w.setWindowTitle("Hello Qt"); //字符串使用双引号



    QPushButton btn;
    btn.setText("^_^");
//    btn.show(); //控件默认隐藏 需要show

    /*
    如果不指定父对象，对象和对象（窗口和窗口）没有关系，是独立的
    a指定b为它的父对象,a放在b的上面
    指定父对象，有两种方式：
        1）setParent
        2)通过构造函数传参
    指定父对象，只需要父对象显示，上面的子对象自动显示
    */

    btn.setParent(&w); // 指定父对象，用&取地址
    btn.move(100,100); //移动坐标

    // 通过构造函数传参
    QPushButton btn1(&w);
    btn1.setText("hahaha");

    //显示窗口
    w.show();
    app.exec();
    return 0;
}
