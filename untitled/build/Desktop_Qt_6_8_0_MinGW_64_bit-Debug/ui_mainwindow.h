/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *clockLabel;
    QTimeEdit *alarmTimeEdit;
    QPushButton *startStopwatchButton;
    QLabel *stopwatchLabel;
    QLabel *alarmMessageLabel;
    QMenuBar *menubar;
    QMenu *menuMain;
    QMenu *menu2nd;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(360, 10, 101, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(360, 310, 61, 31));
        spinBox->setFont(font);
        clockLabel = new QLabel(centralwidget);
        clockLabel->setObjectName("clockLabel");
        clockLabel->setGeometry(QRect(350, 60, 171, 31));
        QFont font1;
        font1.setPointSize(28);
        clockLabel->setFont(font1);
        alarmTimeEdit = new QTimeEdit(centralwidget);
        alarmTimeEdit->setObjectName("alarmTimeEdit");
        alarmTimeEdit->setGeometry(QRect(110, 160, 171, 41));
        alarmTimeEdit->setFont(font);
        startStopwatchButton = new QPushButton(centralwidget);
        startStopwatchButton->setObjectName("startStopwatchButton");
        startStopwatchButton->setGeometry(QRect(490, 160, 151, 31));
        QFont font2;
        font2.setPointSize(12);
        startStopwatchButton->setFont(font2);
        stopwatchLabel = new QLabel(centralwidget);
        stopwatchLabel->setObjectName("stopwatchLabel");
        stopwatchLabel->setGeometry(QRect(490, 200, 151, 31));
        stopwatchLabel->setFont(font);
        alarmMessageLabel = new QLabel(centralwidget);
        alarmMessageLabel->setObjectName("alarmMessageLabel");
        alarmMessageLabel->setGeometry(QRect(120, 220, 271, 41));
        alarmMessageLabel->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuMain = new QMenu(menubar);
        menuMain->setObjectName("menuMain");
        menu2nd = new QMenu(menubar);
        menu2nd->setObjectName("menu2nd");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMain->menuAction());
        menubar->addAction(menu2nd->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Mi reloj", nullptr));
        clockLabel->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        startStopwatchButton->setText(QCoreApplication::translate("MainWindow", "Cronometro", nullptr));
        stopwatchLabel->setText(QCoreApplication::translate("MainWindow", "00:00:00:000", nullptr));
        alarmMessageLabel->setText(QString());
        menuMain->setTitle(QCoreApplication::translate("MainWindow", "Main", nullptr));
        menu2nd->setTitle(QCoreApplication::translate("MainWindow", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
