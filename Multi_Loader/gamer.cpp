#include "gamer.h"
#include "ui_gamer.h"
#include <QUrl>
#include <QDesktopServices>

Gamer::Gamer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Gamer)
{
    ui->setupUi(this);
}

Gamer::~Gamer()
{
    delete ui;
}

void Gamer::on_pushButton_Steam_clicked()
{
    QUrl url("https://goo.su/VtHO");
    QDesktopServices::openUrl(url);
}


void Gamer::on_pushButton_Epic_Games_clicked()
{
    QUrl url("https://goo.su/PVSEQ");
    QDesktopServices::openUrl(url);
}


void Gamer::on_pushButton_Discord_clicked()
{
    QUrl url("https://goo.su/Kfzjne");
    QDesktopServices::openUrl(url);
}


void Gamer::on_pushButton_Rockstar_clicked()
{
    QUrl url("https://goo.su/ozckS3g");
    QDesktopServices::openUrl(url);
}

