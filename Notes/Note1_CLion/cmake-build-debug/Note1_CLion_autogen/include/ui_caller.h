/********************************************************************************
** Form generated from reading UI file 'caller.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLER_H
#define UI_CALLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(644, 582);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 60));
        QFont font;
        font.setPointSize(16);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(lineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font);

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 5, 1, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setFont(font);

        gridLayout->addWidget(pushButton_10, 3, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font);

        gridLayout->addWidget(pushButton_9, 0, 2, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font);

        gridLayout->addWidget(pushButton_7, 3, 2, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 4, 1, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 4, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 4, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setMinimumSize(QSize(0, 60));
        pushButton_11->setFont(font);
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 111, 30);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_11);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 644, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(add1()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MainWindow, SLOT(add2()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MainWindow, SLOT(add3()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), MainWindow, SLOT(add4()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MainWindow, SLOT(add5()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MainWindow, SLOT(add6()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(add7()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(add8()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(add9()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(add0()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), MainWindow, SLOT(makeCall()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "+00000000000", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Call", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLER_H
