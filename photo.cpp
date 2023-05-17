#include "photo.h"
#include "ui_photo.h"

Photo::Photo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Photo)
{
    ui->setupUi(this);
}

Photo::~Photo()
{
    delete ui;
}
