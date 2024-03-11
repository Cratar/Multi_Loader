#include "musician.h"
#include "ui_musician.h"
#include <QUrl>
#include <QDesktopServices>

Musician::Musician(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Musician)
{
    ui->setupUi(this);
}

Musician::~Musician()
{
    delete ui;
}

void Musician::on_pushButton_Audacity_clicked()
{
    QUrl url("https://goo.su/7U6Ar");
    QDesktopServices::openUrl(url);
}


void Musician::on_pushButton_FL_clicked()
{
    QUrl url("https://goo.su/2iEEC");
    QDesktopServices::openUrl(url);
}


void Musician::on_pushButton_Audition_clicked()
{
    QUrl url("https://goo.su/eR04EAA");
    QDesktopServices::openUrl(url);
}


void Musician::on_pushButton_REAPER_clicked()
{
    QUrl url("https://goo.su/2jKiU");
    QDesktopServices::openUrl(url);
}

