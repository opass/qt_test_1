#ifndef VIEW1_H
#define VIEW1_H

#include <QtWidgets/QMainWindow>
#include "ui_view1.h"

class VIEW1 : public QMainWindow
{
  Q_OBJECT

public:
  VIEW1(QWidget *parent = 0);
  ~VIEW1();

public slots:
  void on_btn_a_clicked();
private:
  Ui::VIEW1Class ui;
};

#endif // VIEW1_H
