#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <QDialog>

namespace Ui {
class Musician;
}

class Musician : public QDialog
{
    Q_OBJECT

public:
    explicit Musician(QWidget *parent = nullptr);
    ~Musician();

private slots:
    void on_pushButton_Audacity_clicked();

    void on_pushButton_FL_clicked();

    void on_pushButton_Audition_clicked();

    void on_pushButton_REAPER_clicked();

private:
    Ui::Musician *ui;
};

#endif // MUSICIAN_H
