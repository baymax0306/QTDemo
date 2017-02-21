#include "widget.h"
#include <QApplication>
#include <QDebug>
#include <QMetaClassInfo>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    //获取类的附加信息
    const QMetaObject* pMO = w.metaObject();
    //附加信息个数
    int iInfoCount = pMO->classInfoCount();
    //打印所有附加信息
    for (int i=0; i<iInfoCount; ++i)
    {
        QMetaClassInfo info = pMO->classInfo(i);
        qDebug() << info.name() << "\t" << info.value();
    }

    qDebug() << "class name: " << pMO->className();
    qDebug() << "object name: " << w.objectName();

    //判断是否为基类
    qDebug() << w.inherits("QWidget");
    qDebug() << w.inherits("hello");

    w.show();

    return a.exec();
}
