#ifndef GAMER_H
#define GAMER_H

#include <QDialog>

namespace Ui {
class Gamer;
}

class Gamer : public QDialog
{
    Q_OBJECT

public:
    explicit Gamer(QWidget *parent = nullptr);
    ~Gamer();

private slots:
    void on_pushButton_Steam_clicked();

    void on_pushButton_Epic_Games_clicked();

    void on_pushButton_Discord_clicked();

    void on_pushButton_Rockstar_clicked();

private:
    Ui::Gamer *ui;
};

#endif // GAMER_H
