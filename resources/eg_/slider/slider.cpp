// Simple example of QSlider
// (NDE, 2015-10-01)

#include <QtWidgets>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QSlider* slider = new QSlider(Qt::Horizontal);

  slider->setRange(1, 100);
  //增加刻度，100格，10个为一大格
  slider->setTickPosition(QSlider::TicksBothSides);

  slider->show();

  return app.exec();
}
