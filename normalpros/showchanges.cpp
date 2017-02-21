#include "showchanges.h"
#include <QMessageBox>
showchanges::showchanges(QObject *parent) : QObject(parent)
{

}

showchanges::~showchanges()
{

}


void showchanges::RecvNickName(const QString& s)
{
    QMessageBox::information(NULL, tr("nick"), s);
}

void showchanges::RecvCount(int n)
{
    QString str;
    QMessageBox::information(NULL, tr("count"), str.setNum(n));
}

void showchanges::RecvValue(double v)
{
    QString str;
    QMessageBox::information(nullptr, tr("value"), str.setNum(v));
}



















