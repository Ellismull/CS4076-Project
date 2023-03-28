#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "addrecipe.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_actionNew_Recipe_triggered()
{
    AddRecipe newrecipe;
    newrecipe.setModal(true);
    newrecipe.exec();
}

