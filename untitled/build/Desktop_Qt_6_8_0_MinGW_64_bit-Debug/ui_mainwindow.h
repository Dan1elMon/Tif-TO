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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
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
    QFrame *ventanaPrincipal;
    QListView *listaAlarmas;
    QPushButton *modificarAlarma;
    QPushButton *eliminarAlarma;
    QPushButton *cronometro;
    QSpinBox *spinBox;
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
        agregarAlarma->setGeometry(QRect(470, 250, 101, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(360, 10, 101, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(470, 90, 120, 121));
        formatoDoce = new QRadioButton(groupBox);
        formatoDoce->setObjectName("formatoDoce");
        formatoDoce->setGeometry(QRect(10, 30, 91, 22));
        formatoVeinticuatro = new QRadioButton(groupBox);
        formatoVeinticuatro->setObjectName("formatoVeinticuatro");
        formatoVeinticuatro->setGeometry(QRect(10, 70, 91, 22));
        ventanaPrincipal = new QFrame(centralwidget);
        ventanaPrincipal->setObjectName("ventanaPrincipal");
        ventanaPrincipal->setGeometry(QRect(170, 120, 221, 80));
        ventanaPrincipal->setFrameShape(QFrame::Shape::StyledPanel);
        ventanaPrincipal->setFrameShadow(QFrame::Shadow::Raised);
        listaAlarmas = new QListView(centralwidget);
        listaAlarmas->setObjectName("listaAlarmas");
        listaAlarmas->setGeometry(QRect(150, 250, 261, 192));
        modificarAlarma = new QPushButton(centralwidget);
        modificarAlarma->setObjectName("modificarAlarma");
        modificarAlarma->setGeometry(QRect(470, 400, 101, 24));
        eliminarAlarma = new QPushButton(centralwidget);
        eliminarAlarma->setObjectName("eliminarAlarma");
        eliminarAlarma->setGeometry(QRect(470, 330, 101, 24));
        cronometro = new QPushButton(centralwidget);
        cronometro->setObjectName("cronometro");
        cronometro->setGeometry(QRect(370, 470, 81, 24));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(630, 310, 42, 25));
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
        menuMain->setTitle(QCoreApplication::translate("MainWindow", "Main", nullptr));
        menu2nd->setTitle(QCoreApplication::translate("MainWindow", "2nd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
