#include "designer.h"
#include "ui_designer.h"
#include <QUrl>
#include <QDesktopServices>


Designer::Designer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Designer)
{
    ui->setupUi(this);
}

Designer::~Designer()
{
    delete ui;
}

void Designer::on_pushButton_AutoCAD_clicked()
{
    QUrl url("https://goo.su/j5rN0fq");
    QDesktopServices::openUrl(url);

}

void Designer::on_pushButton_Blender_clicked()
{
    QUrl url("https://goo.su/ybztR");
    QDesktopServices::openUrl(url);
}


void Designer::on_pushButton_SketchUp_clicked()
{
    QUrl url("https://goo.su/QUqfl");
    QDesktopServices::openUrl(url);
}


void Designer::on_pushButton_VectorWorks_clicked()
{
    QUrl url("https://goo.su/IzqVgp0");
    QDesktopServices::openUrl(url);
}

