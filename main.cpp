#include "bitreemainwindow.h"
#include <QApplication>

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BitreeMainWindow w;
    w.show();

    return a.exec();
}
