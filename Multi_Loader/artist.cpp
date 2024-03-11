#include "artist.h"
#include "ui_artist.h"

Artist::Artist(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Artist)
{
    ui->setupUi(this);
}

Artist::~Artist()
{
    delete ui;
}
