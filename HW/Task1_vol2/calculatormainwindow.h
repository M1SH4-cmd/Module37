#ifndef TASK1_VOL2_CALCULATORMAINWINDOW_H
#define TASK1_VOL2_CALCULATORMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <array>
#include "ui_calculatorgui.h"

class CalculatorMainWindow : public QMainWindow
{
Q_OBJECT

private:

    bool allowedToDelete = false; // Грубо говоря, mutex на очистку строки

    int a = 0;
    int b = 0;
    QChar c = '0';
    int buff = 0;
    const std::array<char, 4> operators = {'+', '-', '*', '/'};

    void parseStr(const QString& str) {
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
                c = str[i];
                buff = i;
            }
        }

        QString strBufferA = "";
        QString strBufferB = "";

        for (int i = 0; i < buff; i++) {
            strBufferA += str[i];
        }
        for (int i = buff + 1; i < str.length(); i++) {
            strBufferB += str[i];
        }

        a = strBufferA.QString::toInt();
        b = strBufferB.QString::toInt();
    }

// Хотел попробовать сделать так, чтобы можно было добавлять несколько операторов в строку для сложных примеров

    // bool hasOp(const QString& str) {
    //     if (str.isEmpty()) {
    //         return false;
    //     }

    //     QChar lastChar = str[str.length() - 1];

    //     for (char op : operators) {
    //         if (lastChar == op) {
    //             return true;
    //         }
    //     }

    //     return false;
    // }


    bool hasOp(const QString& str) {
        for (char i : operators) {
            for (QChar j : str) {
                if (j == i) {
                    return true;
                }
            }
        }
        return false;
    }

    void addOperator(const QString& op) {
        if (!hasOp(calculatorUi.lineEdit->text())) {
            calculatorUi.lineEdit->setText(calculatorUi.lineEdit->text() + op);
        }
    }

    void calculate() {
        int result = 0;
        switch (c.toLatin1()) { // QChar в char
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/':
                if (b != 0) {
                    result = a / b;
                } else {
                    calculatorUi.lineEdit->setText("Error: Division by zero");
                    return;
                }
                break;
            default:
                calculatorUi.lineEdit->setText("Error: Invalid operator");
                return;
        }
        calculatorUi.lineEdit->setText(QString::number(result));
    }

    void addNum(QString num) {
        clearLineEdit();
        allowedToDelete = false;
        calculatorUi.lineEdit->setText(calculatorUi.lineEdit->text() + num);
    }


    void clearLineEdit() {
        if (allowedToDelete) {
            calculatorUi.lineEdit->clear();
        }
    }

public:
    Ui::MainWindow calculatorUi;

    CalculatorMainWindow(QWidget *parent = nullptr) : QMainWindow(parent)
    {
        calculatorUi.setupUi(this);
    }

public slots:

    void add0() { addNum("0"); }
    void add1() { addNum("1"); }
    void add2() { addNum("2"); }
    void add3() { addNum("3"); }
    void add4() { addNum("4"); }
    void add5() { addNum("5"); }
    void add6() { addNum("6"); }
    void add7() { addNum("7"); }
    void add8() { addNum("8"); }
    void add9() { addNum("9"); }

    void clearLine() { calculatorUi.lineEdit->clear(); }

    void backspace() { calculatorUi.lineEdit->backspace(); }

    void divide() { addOperator("/"); }
    void multiply() { addOperator("*"); }
    void sum() { addOperator("+"); }
    void minus() { addOperator("-"); }
    void equals() {
        QString input = calculatorUi.lineEdit->text();
        parseStr(input);
        calculate();
        allowedToDelete = true;
    }
};

#endif //TASK1_VOL2_CALCULATORMAINWINDOW_H
