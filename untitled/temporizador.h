#ifndef TEMPORIZADOR_H
#define TEMPORIZADOR_H

#include <QObject>
#include <QTime>

class Temporizador : public QObject {
    Q_OBJECT

private:
    QTime tiempoRestante;
    bool activo;

public:
    Temporizador(QObject *parent = nullptr);
    void configurarTemporizador(const QTime &tiempo);
    void iniciarTemporizador();
    void detenerTemporizador();
};

#endif // TEMPORIZADOR_H
