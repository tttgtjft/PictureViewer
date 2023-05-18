#include "photo.h"
#include "ui_photo.h"

#include <QPixmap>

Photo::Photo(QWidget *parent, QString path) :
    QDialog(parent),
    m_path(path),
    ui(new Ui::Photo)
{
    ui->setupUi(this);
    open();
}

Photo::~Photo()
{
    delete ui;
}

void Photo::open()
{
    QPixmap pixmap(m_path);
    ui->image->setPixmap(pixmap.scaled(ui->image->width(), ui->image->height(), Qt::KeepAspectRatio));
}
