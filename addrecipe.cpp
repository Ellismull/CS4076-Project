#include "addrecipe.h"
#include "ui_addrecipe.h"
#include <QSlider>
#include <QLineEdit>
#include <QAbstractSlider>
#include <QListWidget>
#include <QStringList>
#include <QListView>
#include <QLineEdit>
#include <QString>

AddRecipe::AddRecipe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddRecipe)
{
    ui->setupUi(this);

    verticalSlider = this->findChild<QSlider*>("verticalSlider");
    CaloriesLineEdit = this->findChild<QLineEdit*>("CaloriesLineEdit");

    verticalSlider->setMinimum(0);
    verticalSlider->setMaximum(1000);

    connect(ui->verticalSlider, &QSlider::valueChanged, this, [=](int value) {
            ui->CaloriesLineEdit->setText(QString::number(value));
        });
}

AddRecipe::~AddRecipe()
{
    delete ui;
}

void AddRecipe::on_AcceptRecipe_accepted()
{

}

void AddRecipe::on_AddIngredient_clicked()
{
    QListWidget *IngredientList = this->findChild<QListWidget*>("IngredientList");
       QStringList foodList = {""} ;

      QString ingredient = ui->IngredientInsert->text();

      foodList << ingredient ;

      IngredientList->addItems(foodList);
}

void AddRecipe::on_SetName_clicked()
{
    QString text = ui->NameInsert->text();
    ui->label_4->setText("Recipe Name: " + text);
}



