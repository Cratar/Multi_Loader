#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_Programmer_clicked();

    void on_pushButton_Musician_clicked();

    void on_pushButton_Artist_clicked();

    void on_pushButton_designer_clicked();

    void on_pushButton_gamer_clicked();

    void on_pushButton_engineer_clicked();

    void on_actionGithub_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
