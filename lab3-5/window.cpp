#include <QtWidgets> // include all widgets, including push-buttons
#include "window.h"

MyWindow::MyWindow()
{
 createWidgets();
 arrangeWidgets();
 setWindowTitle("My Window");
 setMinimumSize(320, 200);
}

void MyWindow::createWidgets()
{
 // Create widgets using new

    aButton = new QPushButton("push me, i dare you");
}

void MyWindow::arrangeWidgets()
{
   // Create layout for widgets here
   QHBoxLayout* layout = new QHBoxLayout();

    layout->addWidget(aButton);

    setLayout(layout);
}

int main(int argc, char* argv[])
{
 QApplication app(argc, argv);

 MyWindow window;
 window.show();

 return app.exec();
}
