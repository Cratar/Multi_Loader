#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QUrl>
#include <QDesktopServices>

#include "Programmer.h"
#include "Musician.h"
#include "Artist.h"
#include "Designer.h"
#include "Gamer.h"
#include "Engineer.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_Programmer_clicked()
{

    Programmer window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_pushButton_Musician_clicked()
{
    Musician window_musician;
    window_musician.setModal(true);
    window_musician.exec();
}


void MainWindow::on_pushButton_Artist_clicked()
{
    Artist window_artist;
    window_artist.setModal(true);
    window_artist.exec();
}


void MainWindow::on_pushButton_designer_clicked()
{
    Designer window_designer;
    window_designer.setModal(true);
    window_designer.exec();
}


void MainWindow::on_pushButton_gamer_clicked()
{
    Gamer window_gamer;
    window_gamer.setModal(true);
    window_gamer.exec();
}


void MainWindow::on_pushButton_engineer_clicked()
{
    Engineer window_engineer;
    window_engineer.setModal(true);
    window_engineer.exec();
}


void MainWindow::on_actionGithub_triggered()
{
    QUrl url("https://goo.su/eDUF");
    QDesktopServices::openUrl(url);
}

