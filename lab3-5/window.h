#ifndef LAB3_WINDOW_H

#define LAB3_WINDOW_H

#include <QWidget> // just the supertype of all widgets

class QPushButton; // forward-declare QPushButton so we

                   // don't need to import


class MyWindow: public QWidget // extending QWidget!
{
 public:
   MyWindow();

 private:
   void createWidgets();
   void arrangeWidgets();

   // Pointers to widgets are created here

   QPushButton* aButton;
};


#endif //LAB3_WINDOW_H
