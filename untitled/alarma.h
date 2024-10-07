#ifndef ALARMA_H
#define ALARMA_H

#include <QObject>
#include <QTime>

class Alarma : public QObject {
    Q_OBJECT

private:
    QTime horaAlarma;
    bool activa;
    int posponerTiempo;

public:
    Alarma(QObject *parent = nullptr);
    void configurarAlarma(const QTime &hora);
    void activarAlarma(const QTime &horaActual);
    void posponerAlarma();
    void apagarAlarma();
};

#endif // ALARMA_H
