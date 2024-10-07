#ifndef RELOJDESPERTADOR_H
#define RELOJDESPERTADOR_H

#include <QObject>
#include <QTime>
#include "alarma.h"
#include "temporizador.h"

class RelojDespertador : public QObject {
    Q_OBJECT

private:
    QTime horaActual;
    bool formato12Horas;
    Alarma alarma;
    Temporizador temporizador;

public:
    RelojDespertador(QObject *parent = nullptr);
    void actualizarHora();
    void mostrarHora();
    void cambiarFormato();
    void iniciarAlarma();
    void iniciarTemporizador();
};

#endif // RELOJDESPERTADOR_H
