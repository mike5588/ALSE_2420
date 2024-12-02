#include "ejemplopp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ejemploPp w;
    w.show();
    return a.exec();
}
