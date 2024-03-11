#include "engineer.h"
#include "ui_engineer.h"

Engineer::Engineer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Engineer)
{
    ui->setupUi(this);
}

Engineer::~Engineer()
{
    delete ui;
}
