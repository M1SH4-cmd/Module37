#include <QtWidgets/QApplication>

#include "./ui_caller.h"
#include "callermainwindow.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    CallerMainWindow window;
    Ui::MainWindow caller;

    window.lineEdit = caller.lineEdit;

    window.resize(480, 640);
    caller.setupUi(&window);
    window.show();
    return app.exec();
}