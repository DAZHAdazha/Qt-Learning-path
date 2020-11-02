// Implementation file for Find dialog
// (NDE, 2014-10-27)

#include <QtWidgets>
#include "finddialog.h"


FindDialog::FindDialog(QWidget* parent): QDialog(parent)
{
  createWidgets();
  arrangeWidgets();
  makeConnections();

  setWindowTitle("Find");
  setFixedHeight(sizeHint().height());
}


void FindDialog::createWidgets()
{
    // 注意这里不用在前面写类型，前面已经声明过了！！！
    lineEdit = new QLineEdit();
    label = new QLabel("Find &what?");
    //把label绑定给lineEdit
    label->setBuddy(lineEdit);
    caseBox = new QCheckBox("Match &case");
    backwardBox =new QCheckBox("Search &backwardBox");
    findButton = new QPushButton("&Find");
    findButton->setDefault(true);
    findButton->setEnabled(false);
    closeButton = new QPushButton("Close");


}


void FindDialog::arrangeWidgets()
{
    QHBoxLayout* top_left = new QHBoxLayout();
    top_left->addWidget(label);
    top_left->addWidget(lineEdit);

    QVBoxLayout* left = new QVBoxLayout();
    left->addLayout(top_left);
    left->addWidget(caseBox);
    left->addWidget(backwardBox);

    QVBoxLayout* right = new QVBoxLayout();
    right->addWidget(findButton);
    right->addWidget(closeButton);

    QHBoxLayout* layout = new QHBoxLayout();
    layout->addLayout(left);
    layout->addLayout(right);

    //这里很重要
    setLayout(layout);
}


void FindDialog::makeConnections()
{
    connect(lineEdit, SIGNAL(textChanged(const QString&)),
     this, SLOT(enableFindButton(const QString&)));

    connect(findButton, SIGNAL(clicked()), this, SLOT(findClicked()));
    connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
}


void FindDialog::findClicked()
{
    QString text = lineEdit->text();

    Qt::CaseSensitivity cs;
    if (caseBox->isChecked()) {
     cs = Qt::CaseSensitive;
    }
    else {
     cs = Qt::CaseInsensitive;
    }

    if (backwardBox->isChecked()) {
        //emit custom signal here!
     emit findPrevious(text, cs);
    }
    else {
        //emit custom signal here!
     emit findNext(text, cs);
    }
}


void FindDialog::enableFindButton(const QString& text)
{
    findButton->setEnabled(not text.isEmpty());


}
