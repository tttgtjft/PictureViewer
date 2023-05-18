#ifndef PHOTO_H
#define PHOTO_H

#include <QDialog>
#include <QString>

namespace Ui {
class Photo;
}

class Photo : public QDialog
{
    Q_OBJECT

public:
    explicit Photo(QWidget *parent = nullptr, QString path = nullptr);
    ~Photo();

    void open();

private:
    Ui::Photo *ui;
    QString m_path;
};

#endif // PHOTO_H
