#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 栈控件使用

    // scrollArea按钮

    connect(ui->btn_scrollArea, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(0);
    });

    // toolBox按钮
    connect(ui->btn_ToolBox, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(1);
    });

    // 下拉框
    ui->comboBox->addItem("奔驰");
    ui->comboBox->addItem("奥迪");
    ui->comboBox->addItem("沃尔沃");

    // 点击按钮 选中沃尔沃选项
    connect(ui->btn_select, &QPushButton::clicked, [=]() {
       // ui->comboBox->setCurrentIndex(2);
        ui->comboBox->setCurrentText("沃尔沃");
    });

    // 利用QLabel显示图片
    ui->lbl_Image->setPixmap(QPixmap(":/image/11.jpg"));

    // 使用动图
//    QMovie * movie = new QMovie(":/image/mario.gif");
//    ui->lbl_movie->setMovie(movie);

//    movie->start();

}

Widget::~Widget()
{
    delete ui;
}
