#include "QtDesktopFramework.h"

namespace skframework
{
    QtDesktopFramework::QtDesktopFramework(QWidget* parent)
        : QMainWindow(parent)
    {
        ui.setupUi(this);
        setWindowFlags(Qt::FramelessWindowHint);
    }

    QtDesktopFramework::~QtDesktopFramework()
    {}
}
