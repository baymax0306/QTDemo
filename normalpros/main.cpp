#include "widget.h"
#include <QApplication>
#include <QDebug>
#include "showchanges.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //发送端对象
    Widget w;
    //接收端对象
    showchanges s;
    //同步接收
    QObject::connect(&w, &Widget::nickNameChanged, &s, &showchanges::RecvNickName);
    //异步接收
    QObject::connect(&w, &Widget::countChanged, &s, &showchanges::RecvCount, Qt::QueuedConnection);
    QObject::connect(&w, &Widget::valueChanged, &s, &showchanges::RecvValue, Qt::QueuedConnection);

    w.setNickName("nickName");
    qDebug() << w.nickName();
    w.setCount(10086);
    qDebug() << w.count();
    w.setProperty("value", 100.68);
    qDebug() << w.property("value").toDouble();


    w.show();

    return a.exec();
}
