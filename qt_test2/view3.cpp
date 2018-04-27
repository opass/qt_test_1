#include "view3.h"

#include <iostream>
#include <QDebug>



using namespace std;

VIEW3::VIEW3(QWidget *parent)
    : QWidget(parent)
{
  ui.setupUi(this);
}

VIEW3::~VIEW3()
{

}

void VIEW3::on_btn_1_clicked() {
  cout << "clicked" << endl;
  emit leave();
}