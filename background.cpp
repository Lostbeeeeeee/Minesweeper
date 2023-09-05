#include "background.h"
#include "ui_background.h"

background::background(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::background)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(":/res/origin.png"));
    ui->label_3->setPixmap(QPixmap(":/res/forest.png"));
}

background::~background()
{
    delete ui;
}


void background::on_buttonBox_accepted()
{
    QString text;
    text=ui->comboBox->currentText();
    qDebug()<<text;
    if(text=="origin"){
        choice=0;
    }
    else if(text=="forest"){
        choice=1;
    }
}

