#include <QtWidgets/QApplication>
#include "client.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    client cl;
    return app.exec();
}