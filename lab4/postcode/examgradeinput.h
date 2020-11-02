#ifndef EXAMGRADEINPUT_H
#define EXAMGRADEINPUT_H

#pragma once

#include <QtWidgets>

class ExamGradeInput: public QSpinBox
{
    Q_OBJECT
  public:
    ExamGradeInput(QWidget* parent = 0);
    getGrade();
  private slots:
    void setColor(int);
};

#endif // EXAMGRADEINPUT_H
