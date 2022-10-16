#include "widget.h"
#include <QApplication>     //

//argc:参数个数  argv:存放参数的数组
int main(int argc, char *argv[])
{
    // QApplication（应用程序的）对象a
    QApplication a(argc, argv);
    // 实例化窗口对象
    Widget w;
    // 调用show函数显示窗口
    w.show();
    // 让应用程序对象进入消息循环机制，代码阻塞到当前行
    return a.exec();
}
