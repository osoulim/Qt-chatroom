#include <QtWidgets/QApplication>
#include "Lgwindow.h"
#include "Chwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Lgwindow win;
    win.show();
    return app.exec();
}