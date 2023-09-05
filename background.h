#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <QDialog>
#include <QPushButton>
#include <QDebug>
namespace Ui {
class background;
}

class background : public QDialog
{
    Q_OBJECT

public:
    explicit background(QWidget *parent = nullptr);
    ~background();
    int choice=0;

private slots:


    void on_buttonBox_accepted();

private:
    Ui::background *ui;

};

#endif // BACKGROUND_H
