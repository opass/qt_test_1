#include "view1.h"
#include "view3.h"
#include <QtWidgets/QApplication>
#include <QLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VIEW1 w;

    QHBoxLayout *layout = new QHBoxLayout;
    w.setLayout(layout);

    w.show();
    return a.exec();
}
