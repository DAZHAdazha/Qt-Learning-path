// QFormLayout example
// (NDE, 2015-10-08)

#include <QtWidgets>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  //写好子控件
  QLineEdit* name = new QLineEdit();
  QFont font("DejaVu Sans", 14);
  name->setFont(font);

  QSpinBox* age = new QSpinBox();
  age->setRange(1, 100);
  age->setFont(font);
  //age->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);

  //再写父layouth
  QFormLayout* layout = new QFormLayout();
  //addRow()方法，&类似scanf?
  layout->addRow("&Name:", name);
  layout->addRow("&Age:", age);
  layout->labelForField(name)->setFont(font);
  layout->labelForField(age)->setFont(font);

  //在最外面加一个QWidget的基类对象用来显示
  QWidget* window = new QWidget();
  window->setWindowTitle("QFormLayout Example");

  window->setLayout(layout);
  window->setMinimumWidth(320);
  window->show();

  return app.exec();
}
