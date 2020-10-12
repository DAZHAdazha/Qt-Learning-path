#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("subWindow");
    b.setParent(this);
    b.setText("切换为主窗口");

}
