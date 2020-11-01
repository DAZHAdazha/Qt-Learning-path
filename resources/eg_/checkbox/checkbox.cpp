// Example of using QCheckBox
// (NDE, 2015-10-01)

#include <QtWidgets>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  // Create some checkboxes

  QCheckBox* apple = new QCheckBox("Apple");
  QCheckBox* banana = new QCheckBox("Banana");
  QCheckBox* kiwi = new QCheckBox("Kiwi");

  // Arrange them vertically

  QVBoxLayout* layout = new QVBoxLayout();
  layout->addWidget(apple);
  layout->addWidget(banana);
  layout->addWidget(kiwi);
  // 控制控件是否挨在一起
  layout->addStretch(1);    // see what happens if you comment this out

  // Create an enclosing box with title (not essential)

  QGroupBox* window = new QGroupBox("Fruit");
  window->setCheckable(true); //因为是父控件，所以取消fruit会使其他disable
  window->setLayout(layout);
  window->setMinimumWidth(200);
  window->show();

  return app.exec();
}
