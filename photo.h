#ifndef PHOTO_H
#define PHOTO_H

#include <QDialog>

namespace Ui {
class Photo;
}

class Photo : public QDialog
{
    Q_OBJECT

public:
    explicit Photo(QWidget *parent = nullptr);
    ~Photo();

private:
    Ui::Photo *ui;
};

#endif // PHOTO_H
