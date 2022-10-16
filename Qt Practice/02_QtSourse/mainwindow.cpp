#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->actionNew->setIcon(QIcon("D:/QT/新建.png"));

    // 使用添加Qt资源 ": + 前缀名 + 文件名"
    ui->actionNew->setIcon(QIcon(":/新建.png"));

}

MainWindow::~MainWindow()
{
    delete ui;
}
