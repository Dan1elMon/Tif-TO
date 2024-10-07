#include "mainwindow.h"

#include <QApplication>



#include "relojdespertador.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
     w.show();

    RelojDespertador reloj;
    reloj.mostrarHora();
    reloj.cambiarFormato();
    reloj.mostrarHora();

    QTime alarmaHora = QTime::currentTime().addSecs(60); // Alarma en 1 minuto
    reloj.iniciarAlarma();

    QTime temporizadorTiempo = QTime(0, 1, 0); // Temporizador de 1 minuto
    reloj.iniciarTemporizador();

    return a.exec();
}
