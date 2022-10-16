#include "widget.h"
#include <QPushButton>
#include "mypushbutton.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *btn = new QPushButton;
    //btn->show();
    btn->setParent(this);       // 让btn对象依赖在myWidget窗口中

    btn->setText("第一个按钮");

    // 创建第二个按钮    弊端：按照控件大小创建窗口
    QPushButton *btn2 = new QPushButton("第二个按钮",this);

    // 移动btn2按钮
    btn2->move(87,0);

    // 重置窗口的大小
    resize(600,400);

    // 设置固定窗口大小
    setFixedSize(600,400);

    // 设置窗口的标题
    setWindowTitle("第一个窗口");


    // 创建一个自己的按钮对象
    MyPushButton * myBtn = new MyPushButton;
    myBtn->setText("我自己的按钮");

    myBtn->move(200,0);
    myBtn->setParent(this);

    // 需求：点击关闭窗口
    // 信号的发送者，发送信号的条件，信号接收者，处理的槽函数
    connect(myBtn,&MyPushButton::clicked,this,&Widget::close);
    // 用父类也是一样的
    connect(myBtn,&QPushButton::clicked,this,&QWidget::close);

}

Widget::~Widget()
{
    qDebug("Widget的析构");

}
