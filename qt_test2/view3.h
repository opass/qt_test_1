#ifndef VIEW3_H
#define VIEW3_H

#include <QWidget>
#include <iostream>
#include "ui_view3.h"

class VIEW3 : public QWidget
{
  Q_OBJECT

public:
  VIEW3(QWidget *parent = 0);
  ~VIEW3();

signals:
  void leave();

public slots:
  void on_btn_1_clicked();

private:
  Ui::VIEW3 ui;
};

#endif // VIEW3_H
