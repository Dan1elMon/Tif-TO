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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *agregarAlarma;
    QLabel *label;
    QGroupBox *groupBox;
    QRadioButton *formatoDoce;
    QRadioButton *formatoVeinticuatro;
    QListView *listaAlarmas;
    QPushButton *modificarAlarma;
    QPushButton *eliminarAlarma;
    QPushButton *cronometro;
    QSpinBox *spinBox;
    QLCDNumber *labelTimer;
    QLabel *Digital_clock;
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
        agregarAlarma = new QPushButton(centralwidget);
        agregarAlarma->setObjectName("agregarAlarma");
        agregarAlarma->setGeometry(QRect(320, 240, 101, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(360, 10, 101, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(350, 90, 120, 121));
        formatoDoce = new QRadioButton(groupBox);
        formatoDoce->setObjectName("formatoDoce");
        formatoDoce->setGeometry(QRect(10, 30, 91, 22));
        formatoVeinticuatro = new QRadioButton(groupBox);
        formatoVeinticuatro->setObjectName("formatoVeinticuatro");
        formatoVeinticuatro->setGeometry(QRect(10, 70, 91, 22));
        listaAlarmas = new QListView(centralwidget);
        listaAlarmas->setObjectName("listaAlarmas");
        listaAlarmas->setGeometry(QRect(70, 240, 201, 171));
        modificarAlarma = new QPushButton(centralwidget);
        modificarAlarma->setObjectName("modificarAlarma");
        modificarAlarma->setGeometry(QRect(320, 370, 101, 24));
        eliminarAlarma = new QPushButton(centralwidget);
        eliminarAlarma->setObjectName("eliminarAlarma");
        eliminarAlarma->setGeometry(QRect(320, 300, 101, 24));
        cronometro = new QPushButton(centralwidget);
        cronometro->setObjectName("cronometro");
        cronometro->setGeometry(QRect(300, 450, 81, 24));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(640, 300, 42, 25));
        labelTimer = new QLCDNumber(centralwidget);
        labelTimer->setObjectName("labelTimer");
        labelTimer->setGeometry(QRect(80, 90, 231, 121));
        labelTimer->setDigitCount(20);
        Digital_clock = new QLabel(centralwidget);
        Digital_clock->setObjectName("Digital_clock");
        Digital_clock->setGeometry(QRect(70, 460, 131, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS Sans Serif")});
        font1.setPointSize(22);
        font1.setBold(true);
        Digital_clock->setFont(font1);
        clockLabel = new QLabel(centralwidget);
        clockLabel->setObjectName("clockLabel");
        clockLabel->setGeometry(QRect(640, 50, 49, 16));
        alarmTimeEdit = new QTimeEdit(centralwidget);
        alarmTimeEdit->setObjectName("alarmTimeEdit");
        alarmTimeEdit->setGeometry(QRect(640, 100, 118, 25));
        startStopwatchButton = new QPushButton(centralwidget);
        startStopwatchButton->setObjectName("startStopwatchButton");
        startStopwatchButton->setGeometry(QRect(640, 150, 80, 24));
        stopwatchLabel = new QLabel(centralwidget);
        stopwatchLabel->setObjectName("stopwatchLabel");
        stopwatchLabel->setGeometry(QRect(640, 210, 49, 16));
        alarmMessageLabel = new QLabel(centralwidget);
        alarmMessageLabel->setObjectName("alarmMessageLabel");
        alarmMessageLabel->setGeometry(QRect(640, 250, 49, 16));
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
        agregarAlarma->setText(QCoreApplication::translate("MainWindow", "Agregar alarma", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Mi reloj", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Formato", nullptr));
        formatoDoce->setText(QCoreApplication::translate("MainWindow", "12:00 ", nullptr));
        formatoVeinticuatro->setText(QCoreApplication::translate("MainWindow", "24:00", nullptr));
        modificarAlarma->setText(QCoreApplication::translate("MainWindow", "Modificar alarma", nullptr));
        eliminarAlarma->setText(QCoreApplication::translate("MainWindow", "Eliminar alarma", nullptr));
        cronometro->setText(QCoreApplication::translate("MainWindow", "Cronometro", nullptr));
        Digital_clock->setText(QCoreApplication::translate("MainWindow", "Clock", nullptr));
        clockLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        startStopwatchButton->setText(QCoreApplication::translate("MainWindow", "Cronos", nullptr));
        stopwatchLabel->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        alarmMessageLabel->setText(QCoreApplication::translate("MainWindow", "Apagar", nullptr));
        menuMain->setTitle(QCoreApplication::translate("MainWindow", "Main", nullptr));
        menu2nd->setTitle(QCoreApplication::translate("MainWindow", "2nd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
