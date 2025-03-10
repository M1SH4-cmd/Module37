#ifndef NOTE1_CLION_CALLERMAINWINDOW_H
#define NOTE1_CLION_CALLERMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include "ui_caller.h" // Подключаем сгенерированный интерфейс

class CallerMainWindow : public QMainWindow
{
Q_OBJECT

public:
    QLineEdit* lineEdit = nullptr; // Указатель на QLineEdit
    Ui::MainWindow callerUi; // Объект интерфейса

    CallerMainWindow(QWidget *parent = nullptr) : QMainWindow(parent)
    {
        // Настраиваем интерфейс
        callerUi.setupUi(this);
        lineEdit = callerUi.lineEdit; // Инициализируем lineEdit

        // Подключаем кнопки к слотам
        connect(callerUi.pushButton, &QPushButton::clicked, this, &CallerMainWindow::add1);
        connect(callerUi.pushButton_6, &QPushButton::clicked, this, &CallerMainWindow::add2);
        connect(callerUi.pushButton_9, &QPushButton::clicked, this, &CallerMainWindow::add3);
        connect(callerUi.pushButton_10, &QPushButton::clicked, this, &CallerMainWindow::add4);
        connect(callerUi.pushButton_8, &QPushButton::clicked, this, &CallerMainWindow::add5);
        connect(callerUi.pushButton_7, &QPushButton::clicked, this, &CallerMainWindow::add6);
        connect(callerUi.pushButton_5, &QPushButton::clicked, this, &CallerMainWindow::add7);
        connect(callerUi.pushButton_4, &QPushButton::clicked, this, &CallerMainWindow::add8);
        connect(callerUi.pushButton_3, &QPushButton::clicked, this, &CallerMainWindow::add9);
        connect(callerUi.pushButton_2, &QPushButton::clicked, this, &CallerMainWindow::add0);
        connect(callerUi.pushButton_11, &QPushButton::clicked, this, &CallerMainWindow::makeCall);
    }

public slots:
    void add0() { lineEdit->setText(lineEdit->text() + "0"); }
    void add1() { lineEdit->setText(lineEdit->text() + "1"); }
    void add2() { lineEdit->setText(lineEdit->text() + "2"); }
    void add3() { lineEdit->setText(lineEdit->text() + "3"); }
    void add4() { lineEdit->setText(lineEdit->text() + "4"); }
    void add5() { lineEdit->setText(lineEdit->text() + "5"); }
    void add6() { lineEdit->setText(lineEdit->text() + "6"); }
    void add7() { lineEdit->setText(lineEdit->text() + "7"); }
    void add8() { lineEdit->setText(lineEdit->text() + "8"); }
    void add9() { lineEdit->setText(lineEdit->text() + "9"); }
    void makeCall() { lineEdit->setText("Calling..."); }
};

#endif // NOTE1_CLION_CALLERMAINWINDOW_H