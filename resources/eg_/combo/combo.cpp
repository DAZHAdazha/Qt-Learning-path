// Example of using QComboBox
// (NDE, 2015-10-01)

#include <QtWidgets>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  // Create and populate combo box

  QStringList text;
  // 注意这里的写法
  text << "Apple" << "Banana" << "Kiwi" << "Orange";

  QComboBox* combo = new QComboBox();
  combo->setFont(QFont("DejaVu Sans", 18));
  // 增加QStringList对象
  combo->addItems(text);

  // Display combo box

  combo->setMinimumWidth(200);
  combo->show();

  return app.exec();
}
