#include<QtWidgets>

int main(int argc, char* argv[])

{

QApplication app(argc, argv);

QLineEdit* widget = new QLineEdit();

widget->setMinimumSize(200,40);

// 使line的光标移到中间
widget->setAlignment(Qt::AlignCenter);

//widget->setEnabled(false);

// 类似RE限制输入的字符串
//widget->setInputMask("999");

QIntValidator* validator = new QIntValidator(1, 20);
widget->setValidator(validator);

//widget->show();

QTextEdit* widgetText = new QTextEdit();

widgetText->show();

widgetText->setWindowTitle("QTextEdit Example");

widgetText->setFont(QFont("DejaVu Sans",14));

widgetText->setTextColor(QColor("red"));

widgetText->setText("this is hahaha\n that is hehehe");

//QVBoxLayout* layout = new QVBoxLayout();

//QPushButton* small = new QPushButton();

//small->setFlat(true);

//layout->addWidget(small);

//widget->setLayout(layout);

widget->show();

return app.exec();

}
