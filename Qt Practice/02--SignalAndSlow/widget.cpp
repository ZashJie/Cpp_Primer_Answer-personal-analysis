#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>


// Teacher 类 老师类
// Student 类 学生类
// 下课后，老师会触发一个信号，饿了，学生响应信号，请客吃饭


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 创建一个老师对象
    this->zt = new Teacher(this);


    // 创建一个学生对象
    this->st = new Student(this);


//    // 老师饿了 学生请客的链接
//    connect(zt, &Teacher::hungry, st, &Student::treat);

//    classIsOver();

    // 链接带参数的信号和槽
    // 指针-》地址
    // 函数指针-》函数地址
    void(Teacher:: *teacherSignal)(QString) = &Teacher::hungry;
    void(Student:: *studentSiganl)(QString) = &Student::treat;

    connect(zt, teacherSignal, st, studentSiganl);
    classIsOver();

    // 点击一个 下课的按钮，再触发下课
    QPushButton*btn = new QPushButton("下课",this);
    // 重置窗口大小
    this->resize(600,400);

    // 点击按钮 触发下课
//    connect(btn,&QPushButton::clicked,this,&Widget::classIsOver);

    void(Teacher:: *teacherSignal2)(void) = &Teacher::hungry;
    void(Student:: *studentSlot2)(void) = &Student::treat;

    // 信号连接信号
    connect(zt,teacherSignal2,st,studentSlot2);
    connect(btn,&QPushButton::clicked,zt,teacherSignal2);

    // 断开信号
   // disconnect(zt,teacherSignal2,st,studentSlot2);
    //断开了两个信号之间的链接

    // 拓展
    //    1、信号是可以连接信号
    //    2、一个信号可以链接多个槽函数
    //    3、多个信号可以链接同一个槽函数
    //    4、信号和槽函数的参数必须类型意义对应
    //    5、信号和槽的参数个数 不一定要一致，信号参数个数可以多于槽函数参数的个数
    // Qt4版本以前的信号和槽连接方式
    // 利用Qt4信号槽 连接无惨版本

    // Qt4版本 底层SIGANL("hungry()") 通过字符串找函数
//    connect(zt,SIGNAL(hungry()), st, SLOT(treat()));
    // Qt4版本有点，参数直观， 缺点：类型不做检测（类型不对应的时候，不会报错，且还不能运行）
    // Qt5以上 支持Qt4的版本写法，反之不支持


//    [=](){
//        btn->setText("dddddd");
//    }();
//    QPushButton * btn2 = new QPushButton;

//    [btn](){
//        btn->setText("aaaa");
//       // btn2->setText("bbb");   // btn2看不到
//    }();

    // mutable关键字 用于修饰值传递的变量，修改的是拷贝，而不是本体

//    QPushButton * myBtn = new QPushButton(this);
//    QPushButton * myBtn2 = new QPushButton(this);
//    myBtn2->move(100,100);
//    int m=100;
//    connect(myBtn,&QPushButton::clicked,this , [m] () mutable{m=100+10;qDebug()<<m;});
//    connect(myBtn2,&QPushButton::clicked,this,[=] () {qDebug()<<m;});
//    qDebug()<<m;

//    int ret = []()->int{return 1000;}();
//    qDebug() <<"ret="<<ret;

    // 利用lambda表达式 实现点击按钮 关闭窗口
    QPushButton * btn2 = new QPushButton;
    btn2->setText("关闭");
    btn2->move(100,0);
    btn2->setParent(this);

    connect(btn2, &QPushButton::clicked, this, [=] () {
//        this->close();
        emit zt->hungry("双层吉士蛋汉堡");

    });

    // lambda表达式 最常用 [=] () {}

}

void Widget::classIsOver()
{
    // 下课函数，调用后 触发老师饿了的信号
    //emit zt->hungry();
    emit zt->hungry("宫保鸡丁");



}


Widget::~Widget()
{
    delete ui;
}
