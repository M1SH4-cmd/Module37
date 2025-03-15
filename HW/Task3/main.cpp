#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RemoteMainWindow w;
    w.show();

    w.setFixedSize(240, 680);
    return a.exec();
}
