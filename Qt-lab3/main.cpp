#include<QtWidgets>

int main(int argc, char* argv[])

{

QApplication app(argc, argv);

QDoubleSpinBox* widget = new QDoubleSpinBox();

widget->setRange(0.0,1.0);

widget->setSingleStep(0.05);

widget->setFont(QFont("Times", 16, QFont::Bold));

widget->setMinimumSize(250,60);

widget->setWindowTitle("QDoubleSpinBox");

widget-> show();


return app.exec();

}
