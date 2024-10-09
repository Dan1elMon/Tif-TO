#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), alarmSet(false), stopwatchTime(0, 0) {
    ui->setupUi(this);

    // Timer for the clock
    clockTimer = new QTimer(this);
    connect(clockTimer, &QTimer::timeout, this, &MainWindow::updateClock);
    clockTimer->start(1000);

    // Timer for the stopwatch
    stopwatchTimer = new QTimer(this);
    connect(stopwatchTimer, &QTimer::timeout, this, &MainWindow::updateStopwatch);

    connect(ui->alarmTimeEdit, &QTimeEdit::timeChanged, [this](const QTime &time) {
        alarmTime = time;
        alarmSet = true;
    });

    connect(ui->startStopwatchButton, &QPushButton::clicked, this, &MainWindow::startStopwatch);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::updateClock() {
    QTime currentTime = QTime::currentTime();
    ui->clockLabel->setText(currentTime.toString("HH:mm:ss"));
    checkAlarm();
}

void MainWindow::checkAlarm() {
    if (alarmSet && QTime::currentTime() >= alarmTime) {
        alarmSet = false;
        // Show alarm message
        ui->alarmMessageLabel->setText("¡Alarma! La hora ha llegado.");
    }
}

void MainWindow::startStopwatch() {
    if (stopwatchTimer->isActive()) {
        stopwatchTimer->stop();
    } else {
        stopwatchTime = QTime(0, 0);
        stopwatchTimer->start(1000);
    }
}

void MainWindow::updateStopwatch() {
    stopwatchTime = stopwatchTime.addSecs(1);
    ui->stopwatchLabel->setText(stopwatchTime.toString("HH:mm:ss"));
}
