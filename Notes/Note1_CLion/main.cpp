#include <QtWidgets/QApplication>
#include "callermainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    CallerMainWindow window;

    window.resize(480, 640);
    window.show();
    return app.exec();
}