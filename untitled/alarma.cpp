#include "alarma.h"
#include <QDebug>

Alarma::Alarma(QObject *parent) : QObject(parent), activa(false), posponerTiempo(5) {}

void Alarma::configurarAlarma(const QTime &hora) {
    horaAlarma = hora;
    activa = true;
}

void Alarma::activarAlarma(const QTime &horaActual) {
    if (activa && horaActual == horaAlarma) {
        qDebug() << "¡Alarma activada!";
        // Aquí puedes añadir código para sonar la alarma
    }
}

void Alarma::posponerAlarma() {
    horaAlarma = horaAlarma.addSecs(posponerTiempo * 60);
    qDebug() << "Alarma pospuesta por " << posponerTiempo << " minutos.";
}

void Alarma::apagarAlarma() {
    activa = false;
    qDebug() << "Alarma apagada.";
}
