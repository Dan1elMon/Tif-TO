#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DateTime = new QTimer();
    connect(DateTime, &QTimer::timeout, this, &MainWindow::Date_Time_Display_Slot);
    DateTime->setInterval(1000);
    DateTime->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::Date_Time_Display_Slot(){
    QString DateAndTime = QDateTime::currentDateTime().toString("dd:MM:yyyy HH:mm:ss");
}
