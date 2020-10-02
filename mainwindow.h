#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


//************************************************
//                  MainWindow                   *
//-----------------------------------------------*
//The main class in which the program revolves   *
//around.                                        *
//************************************************
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //The methods that "Listen" for an action
private slots:


    void on_pushButton_calculate_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
