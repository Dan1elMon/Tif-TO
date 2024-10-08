#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDateTime>
#include <QString>
#include <QTime>
#include <QDebug>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();
   public slots:
    void Date_Time_Display_Slot();

private:
    Ui::MainWindow *ui;
    QTimer *DateTime;
};
#endif // MAINWINDOW_H
