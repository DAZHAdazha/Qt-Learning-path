#include <QtWidgets>

int main(int argc, char* argv[])
{
 QApplication app(argc, argv);

 QWidget* window = new QWidget();
 window->setWindowTitle("QHBoxLayout Test");

 QPushButton* button1 = new QPushButton("search");
// QPushButton* button2 = new QPushButton();
// QPushButton* button3 = new QPushButton();

 QHBoxLayout* layout = new QHBoxLayout();

// layout->addWidget(button2);
// layout->addWidget(button3);

 QLabel* label = new QLabel("name:");
 QLineEdit* le = new QLineEdit();

 layout->addWidget(label);
 layout->addWidget(le);

 //addStretch这行代码在label add组件之间的位置有区别！！！
 // 1 为minimum size
 layout->addStretch(1);

 layout->addWidget(button1);

 window->setLayout(layout);

 window->show();

 return app.exec();
}
