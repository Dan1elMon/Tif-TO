#include "temporizador.h"
#include <QDebug>

Temporizador::Temporizador(QObject *parent) : QObject(parent), activo(false) {}

void Temporizador::configurarTemporizador(const QTime &tiempo) {
    tiempoRestante = tiempo;
    activo = true;
}

void Temporizador::iniciarTemporizador() {
    if (activo) {
        // Lógica de cuenta regresiva
        qDebug() << "Temporizador iniciado. Tiempo restante: " << tiempoRestante.toString("HH:mm:ss");
        // Aquí podrías conectar un temporizador de Qt para actualizar cada segundo
    }
}

void Temporizador::detenerTemporizador() {
    activo = false;
    qDebug() << "Temporizador detenido.";
}
