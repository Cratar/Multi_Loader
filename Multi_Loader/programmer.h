#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#include <QDialog>

namespace Ui {
class Programmer;
}

class Programmer : public QDialog
{
    Q_OBJECT

public:
    explicit Programmer(QWidget *parent = nullptr);
    ~Programmer();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Py_Community_clicked();

    void on_pushButton_Py_Professional_clicked();

    void on_pushButton_Visual_Studio_Code_clicked();

    void on_pushButton_Visual_Studio_Community_clicked();

    void on_pushButton_IntelliJ_Community_clicked();

    void on_pushButton_IntelliJ_Ultimate_clicked();

    void on_pushButton_DBeaver_Community_clicked();

    void on_pushButton_Qt_Creator_clicked();

private:
    Ui::Programmer *ui;
};

#endif // PROGRAMMER_H
