#ifndef ENGINEER_H
#define ENGINEER_H

#include <QDialog>

namespace Ui {
class Engineer;
}

class Engineer : public QDialog
{
    Q_OBJECT

public:
    explicit Engineer(QWidget *parent = nullptr);
    ~Engineer();

private:
    Ui::Engineer *ui;
};

#endif // ENGINEER_H
