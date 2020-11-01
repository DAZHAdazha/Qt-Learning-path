// Example of using QCDNumber
// (NDE, 2015-10-01)

#include <QtWidgets>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  //设置数字最大位数
  QLCDNumber* number = new QLCDNumber(6);

  number->setSegmentStyle(QLCDNumber::Flat);
  //数字的值
  number->display(123);
  number->resize(200, 85);
  number->show();

  return app.exec();
}
