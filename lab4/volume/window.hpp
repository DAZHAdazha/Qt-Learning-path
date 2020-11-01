// Volume control simulation in Qt
// (NDE, 2015-06-17)

#pragma once

#include <QWidget>

class QLCDNumber;
class QSlider;

class VolumeControl: public QWidget
{
    Q_OBJECT
  public:
    VolumeControl();

  private:
    void createWidgets();
    void arrangeWidgets();
    // declare makeConnections method here
    void makeConnections();

    QLCDNumber* number;
    QSlider* slider;
  private slots:
    void numberColour(int);
};
