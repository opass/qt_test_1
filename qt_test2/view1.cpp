#include "view1.h"
#include "view3.h"
#include <iostream>
#include <QLayout>

using namespace std;


VIEW1::VIEW1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

VIEW1::~VIEW1()
{

}

void VIEW1::on_btn_a_clicked() {
  cout << "clicked on V1" << endl;
  VIEW3 *inner_view = new VIEW3();
  QLayout* l = this->layout();
  l->addWidget(inner_view);

  connect(inner_view, &VIEW3::leave, this, [&inner_view]() {
    inner_view->deleteLater();
  }, Qt::QueuedConnection);
}