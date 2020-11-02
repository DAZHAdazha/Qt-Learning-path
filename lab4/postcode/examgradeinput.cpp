#include "examgradeinput.h"

ExamGradeInput::ExamGradeInput(QWidget* parent): QSpinBox(parent)
{
    this->setRange(0,100);
    connect(this,SIGNAL(valueChanged(int)),this,SLOT(setColor(int)));
}

int ExamGradeInput::getGrade(){
    return this->text().toInt();
}

void ExamGradeInput::setColor(int value){
    if(value<40)
        this->setStyleSheet("background-color: red");
    else
        this->setStyleSheet("background-color: green");
}
