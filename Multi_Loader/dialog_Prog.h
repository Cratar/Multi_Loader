#ifndef DIALOG_PROG_H
#define DIALOG_PROG_H

#include <QDialog>

namespace Ui {
class dialog;
}

class dialog : public QDialog
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = nullptr);
    ~dialog();

private:
    Ui::dialog *ui;
};

#endif // DIALOG_PROG_H
