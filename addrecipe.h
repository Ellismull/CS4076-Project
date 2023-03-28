#ifndef ADDRECIPE_H
#define ADDRECIPE_H
#include <QSlider>
#include <QLineEdit>
#include <QListWidget>

#include <QDialog>

namespace Ui {
class AddRecipe;
}

class AddRecipe : public QDialog
{
    Q_OBJECT

public:
    explicit AddRecipe(QWidget *parent = nullptr);
    ~AddRecipe();

private slots:
    void on_AcceptRecipe_accepted();

    void on_AddIngredient_clicked();

    void on_SetName_clicked();

private:
    Ui::AddRecipe *ui;
    QSlider *verticalSlider;
    QLineEdit *CaloriesLineEdit;
};

#endif // ADDRECIPE_H
