// Simple QMessageBox example
// (NDE, 2015-10-07)

#include <QtWidgets>
#include <iostream>
#include <bitset>

using namespace std;

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QMessageBox box;

  //警告的图标
  box.setIcon(QMessageBox::Warning);
  box.setText("The document has been modified.");
  box.setInformativeText("Do you want to save your changes?");
  //设置三个按键 注意后面有s
  box.setStandardButtons(
    QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
  //这个按钮默认为ok 没有显示
  box.setDefaultButton(QMessageBox::Save);

  int response = box.exec();

  //处理消息
  switch (response) {
    case QMessageBox::Save:
      cout << "You clicked 'Save'" << endl;
      break;
    case QMessageBox::Discard:
      cout << "You clicked 'Discard'" << endl;
      break;
    case QMessageBox::Cancel:
      cout << "You clicked 'Cancel'" << endl;
      break;
  }

  cout << "Response code = " << response << endl;
  cout << "Bit pattern   = " << bitset<32>(response).to_string() << endl;

  return 0;
}
