#include <iostream>
#include <QApplication>
#include "calculatormainwindow.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    CalculatorMainWindow window;

    window.resize(280, 440);
    window.show();
    return app.exec();
}
