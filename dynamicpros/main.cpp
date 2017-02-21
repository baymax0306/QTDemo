#include "widget.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    //如果动态属性不存在，QVariant对象的isValid()函数返回false,变量不可用
    qDebug() << w.property("myValue").isValid();

    //添加属性myValue
    w.setProperty("myValue", 10086);
    //获取并打印
    qDebug() << w.property("myValue").toInt();

    //添加属性myName
    w.setProperty("myName", "钟惟昌");
    //获取并打印
    qDebug() << w.property("myName").toString();

    //获取所有动态属性名称，打印名称列表
    qDebug() << w.dynamicPropertyNames();

    w.show();

    return a.exec();
}
