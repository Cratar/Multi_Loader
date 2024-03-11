#ifndef ARTIST_H
#define ARTIST_H

#include <QDialog>

namespace Ui {
class Artist;
}

class Artist : public QDialog
{
    Q_OBJECT

public:
    explicit Artist(QWidget *parent = nullptr);
    ~Artist();

private:
    Ui::Artist *ui;
};

#endif // ARTIST_H
