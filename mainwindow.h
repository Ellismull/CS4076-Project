#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QStringList>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionNew_Recipe_triggered();

private:
    Ui::MainWindow *ui;
};

class Recipe {

protected:
    QString name;
    QStringList ingredients;
    QString description;
    int calories;

public:
    Recipe(QString n, QStringList i, QString d, int c){
        n = name;
        i = ingredients;
        d = description;
        c = calories;
    };
};



#endif // MAINWINDOW_H
