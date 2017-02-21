#ifndef SHOWCHANGES_H
#define SHOWCHANGES_H

#include <QObject>

class showchanges : public QObject
{
    Q_OBJECT
public:
    explicit showchanges(QObject *parent = 0);
    ~showchanges();

signals:

public slots:
    void RecvNickName(const QString& s);
    void RecvCount(int n);
    void RecvValue(double v);

};

#endif // SHOWCHANGES_H
