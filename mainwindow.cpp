#include "mainwindow.h"
#include "photo.h"
#include "./ui_mainwindow.h"

#include <QFileInfo>
#include <QPixmap>
#include <QMessageBox>
#include <QImage>
#include <QImageReader>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString path(":/sources/images/" + ui->name->text());
    QImage im(path);
    if (im.isNull())
    {
        QMessageBox::warning(this, "File read error", "The image doesn't exist");
    }
    else
    {
        Photo window(nullptr, path);
        window.setModal(true);
        window.exec();
    }
}

