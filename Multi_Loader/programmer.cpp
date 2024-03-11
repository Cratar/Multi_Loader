#include "programmer.h"
#include "ui_programmer.h"
#include <QDesktopServices>
#include <QUrl>

Programmer::Programmer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Programmer)
{
    ui->setupUi(this);
}

Programmer::~Programmer()
{
    delete ui;
}

void Programmer::on_pushButton_Py_Community_clicked()
{
    QUrl url("https://goo.su/JzqE");
    QDesktopServices::openUrl(url);
}


void Programmer::on_pushButton_Py_Professional_clicked()
{
    QUrl url("https://goo.su/k8osuw");
    QDesktopServices::openUrl(url);
}

void Programmer::on_pushButton_Visual_Studio_Community_clicked()
{
    QUrl url("https://goo.su/vaKkOcV");
    QDesktopServices::openUrl(url);
}

void Programmer::on_pushButton_Visual_Studio_Code_clicked()
{
    QUrl url("https://goo.su/LlH9s");
    QDesktopServices::openUrl(url);
}


void Programmer::on_pushButton_IntelliJ_Community_clicked()
{
    QUrl url("https://goo.su/Vza7p");
    QDesktopServices::openUrl(url);
}


void Programmer::on_pushButton_IntelliJ_Ultimate_clicked()
{
    QUrl url("https://goo.su/xv1bg");
    QDesktopServices::openUrl(url);
}


void Programmer::on_pushButton_DBeaver_Community_clicked()
{
    QUrl url("https://goo.su/z8pqa");
    QDesktopServices::openUrl(url);
}


void Programmer::on_pushButton_Qt_Creator_clicked()
{
    QUrl url("https://goo.su/fQav");
    QDesktopServices::openUrl(url);

}

