#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateClock();
    void checkAlarm();
    void startStopwatch();
    void updateStopwatch();

private:
    Ui::MainWindow *ui;
    QTimer *clockTimer;
    QTimer *stopwatchTimer;
    QTime alarmTime;
    bool alarmSet;
    QTime stopwatchTime;
};

#endif // MAINWINDOW_H
