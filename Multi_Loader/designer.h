#ifndef DESIGNER_H
#define DESIGNER_H

#include <QDialog>

namespace Ui {
class Designer;
}

class Designer : public QDialog
{
    Q_OBJECT

public:
    explicit Designer(QWidget *parent = nullptr);
    ~Designer();

private slots:
    void on_pushButton_AutoCAD_clicked();

    void on_pushButton_Blender_clicked();

    void on_pushButton_SketchUp_clicked();

    void on_pushButton_VectorWorks_clicked();

private:
    Ui::Designer *ui;
};

#endif // DESIGNER_H
