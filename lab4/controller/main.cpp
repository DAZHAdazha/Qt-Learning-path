// Volume control simulation in Qt
// (NDE, 2015-06-17)

#include <QtWidgets>
#include "controller.h"

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QWidget* window = new QWidget();

  QWidget* left = new Controller("left");
  QWidget* right = new Controller("right");

  QObject::connect(left, SIGNAL(valueChanged(int)), right, SLOT(setValue(int)));
  QObject::connect(right, SIGNAL(valueChanged(int)), left, SLOT(setValue(int)));

  QHBoxLayout* layout = new QHBoxLayout();

  layout->addWidget(left);
  layout->addWidget(right);

  window->setLayout(layout);

  window->show();




  return app.exec();
}
