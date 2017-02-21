#include <QCoreApplication>
#include <vector>
#include <map>
#include <string>
#include <qdebug.h>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //test vector
    vector<int> coll1;
    coll1.push_back(100);
    coll1.push_back(155);
    coll1.push_back(300);
    coll1.push_back(1001);

    qDebug() << "***************************************************";
    for (auto iter=coll1.begin(); iter!=coll1.end(); ++iter)
    {
        qDebug() << *iter;
    }
    qDebug() << "***************************************************";

    string str = "hello world!";
    for (auto iter=str.begin(); iter!=str.end(); ++iter)
    {
        qDebug() << *iter;
    }
    qDebug() << "***************************************************";

    map<int, string> coll2;

    coll2.insert(make_pair(1, "hello"));
    coll2.insert(make_pair(2, "test"));
    coll2.insert(make_pair(3, "zhong"));
    coll2.insert(make_pair(4, "chang"));

    for (int i=0; i<5; ++i)
    {
        auto iter = coll2.find(i);
        if (iter!=coll2.end())
        {
            qDebug() << iter->second.c_str();
        }
    }
    qDebug() << "****************************************************";
    return a.exec();
}
