#include<QtWidgets>

int main(int argc, char* argv[])

{

QApplication app(argc, argv);

QPushButton* widget = new QPushButton("Click Here");

widget->setIcon(QIcon(":/icon.png"));

widget->setFont(QFont("Times", 18, QFont::Bold));

widget->setWindowTitle("QPushButton");

widget->setMinimumSize(240,60);

//widget->setEnabled(false);

QObject::connect(widget, SIGNAL(clicked()), &app, SLOT(quit()));


widget-> show();


return app.exec();

}
