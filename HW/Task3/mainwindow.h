#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include "ui_remoteCtrl.h"

class RemoteMainWindow : public QMainWindow
{
Q_OBJECT;

public:
    Ui::MainWindow remoteUi;

    RemoteMainWindow(QWidget *parent = nullptr) : QMainWindow(parent)
    {
        remoteUi.setupUi(this);
        remoteUi.lineEdit->setText(QString::number(0));
        remoteUi.lineEdit_2->setText(QString::number(0));
    }

private:

    int volume = 0;
    int channel = 0;
    QLineEdit lineEdit_2;

    void setChannel(QString num)
    {
        remoteUi.lineEdit->setText(num);
        channel = num.QString::toInt();
    }

    void setVolume()
    {
        remoteUi.lineEdit_2->setText(QString::number(volume));
    }

public slots:
    void add0() { setChannel("0"); }
    void add1() { setChannel("1"); }
    void add2() { setChannel("2"); }
    void add3() { setChannel("3"); }
    void add4() { setChannel("4"); }
    void add5() { setChannel("5"); }
    void add6() { setChannel("6"); }
    void add7() { setChannel("7"); }
    void add8() { setChannel("8"); }
    void add9() { setChannel("9"); }

    void channelFWD() {
        channel++;
        if (channel > 9) {
            channel = 0;
        }
        setChannel(QString::number(channel));
    }
    void channelBWD() {
        channel--;
        if (channel < 0) {
            channel = 9;
        }
        setChannel(QString::number(channel));
    }

    void volumeUp() {
        volume+=10;
        if (volume > 100) {
            volume = 100;
        }
        setVolume();
    }
    void volumeDown() {
        volume-=10;
        if (volume < 0) {
            volume = 0;
        }
        setVolume();
    }
};


#endif // MAINWINDOW_H


/*
 QLineEdit *lineEdit;
 QLineEdit *lineEdit_2;
*/
