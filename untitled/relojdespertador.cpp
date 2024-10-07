#include "relojdespertador.h"
#include <QDateTime>
#include <QDebug>

RelojDespertador::RelojDespertador(QObject *parent) : QObject(parent), formato12Horas(false) {
    actualizarHora();
}

void RelojDespertador::actualizarHora() {
    horaActual = QTime::currentTime();
}

void RelojDespertador::mostrarHora() {
    QString formato = formato12Horas ? "hh:mm AP" : "HH:mm";
    qDebug() << "Hora actual: " << horaActual.toString(formato);
}

void RelojDespertador::cambiarFormato() {
    formato12Horas = !formato12Horas;
    mostrarHora();
}

void RelojDespertador::iniciarAlarma() {
    alarma.activarAlarma(horaActual);
}

void RelojDespertador::iniciarTemporizador() {
    temporizador.iniciarTemporizador();
}
