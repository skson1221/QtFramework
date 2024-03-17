#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtDesktopFramework.h"

namespace skframework
{
    class QtDesktopFramework : public QMainWindow
    {
        Q_OBJECT

    public:
        QtDesktopFramework(QWidget* parent = nullptr);
        ~QtDesktopFramework();

    private:
        Ui::QtDesktopFrameworkClass ui;
    };
}
