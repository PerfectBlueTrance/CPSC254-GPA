#include "mainwindow.h"
#include "ui_mainwindow.h"

//************************************************
//MainWindow::MainWindow(QWidget *parent)        *
//-----------------------------------------------*
//Default Parameterized constructor.             *
//************************************************
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //Place other code after this line
    ui->setupUi(this);

    //set up the initial state for the line edit
    ui->lineEdit_GPA->setAlignment(Qt::AlignCenter);
    QFont gpaDisplayFont = ui->lineEdit_GPA->font();
    gpaDisplayFont.setPointSize(20);
    ui->lineEdit_GPA->setFont(gpaDisplayFont);

    //set up the initial state for the label title
    QFont gpaTitleFont = ui->label_GPA_Title->font();
    gpaTitleFont.setPointSize(16);
    ui->label_GPA_Title->setFont(gpaTitleFont);
}

//************************************************
//MainWindow::~MainWindow()                      *
//-----------------------------------------------*
//Default destructor.                            *
//************************************************
MainWindow::~MainWindow()
{
    delete ui;
}


//************************************************
//on_pushButton_calculate_clicked()              *
//-----------------------------------------------*
//This method upon activation displays           *
//the GPA of the current student.                *
//************************************************
void MainWindow::on_pushButton_calculate_clicked()
{
    //testing value
    ui->lineEdit_GPA->setText("0.00");
}

//************************************************
//MainWindow::on_pushButton_clear_clicked()      *
//-----------------------------------------------*
//Clears the line edit holding a GPA Value.      *
//************************************************
void MainWindow::on_pushButton_clear_clicked()
{
    ui->lineEdit_GPA->clear();
}
