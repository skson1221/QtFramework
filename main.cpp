#include "QtDesktopFramework.h"
#include <QtWidgets/QApplication>

using namespace skframework;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtDesktopFramework w;
    w.show();
    return a.exec();
}
