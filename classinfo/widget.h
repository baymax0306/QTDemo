#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();


    Q_CLASSINFO("Version", "1.0")
    Q_CLASSINFO("Author", "zhongweichang")
    Q_CLASSINFO("Company", "kokoon")

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
