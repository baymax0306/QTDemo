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


private slots:
    void on_quitButtom_clicked();

    void on_n1Buttom_clicked();

    void on_cleanButtom_clicked();

    void on_delButtom_clicked();

    void on_n2Buttom_clicked();
    void on_n3Buttom_clicked();
    void on_n4Buttom_clicked();
    void on_n5Buttom_clicked();
    void on_n6Buttom_clicked();
    void on_n7Buttom_clicked();
    void on_n8Buttom_clicked();
    void on_n9Buttom_clicked();

    void on_n0Buttom_clicked();

    void on_npButtom_clicked();

    void on_addButtom_clicked();

    void on_equalButtom_clicked();

    void on_subButtom_clicked();

    void on_multiButtom_clicked();

    void on_divisionButtom_clicked();

    void on_n0Buttom_released();

    void on_n0Buttom_pressed();


    void on_quitButtom_pressed();

    void on_quitButtom_released();

    void on_delButtom_pressed();

    void on_delButtom_released();

    void on_cleanButtom_pressed();

    void on_cleanButtom_released();

    void on_divisionButtom_pressed();

    void on_divisionButtom_released();

    void on_n7Buttom_pressed();

    void on_n7Buttom_released();

    void on_n8Buttom_pressed();

    void on_n8Buttom_released();

    void on_n9Buttom_pressed();

    void on_n9Buttom_released();

    void on_multiButtom_pressed();

    void on_multiButtom_released();

    void on_n4Buttom_pressed();

    void on_n4Buttom_released();

    void on_n5Buttom_pressed();

    void on_n5Buttom_released();

    void on_n2Buttom_pressed();

    void on_n6Buttom_pressed();

    void on_n6Buttom_released();

    void on_subButtom_pressed();

    void on_subButtom_released();

    void on_n1Buttom_pressed();

    void on_n1Buttom_released();

    void on_n2Buttom_released();

    void on_n3Buttom_pressed();

    void on_n3Buttom_released();

    void on_addButtom_pressed();

    void on_addButtom_released();

    void on_npButtom_pressed();

    void on_npButtom_released();

    void on_minusButtom_pressed();

    void on_minusButtom_released();

    void on_equalButtom_pressed();

    void on_equalButtom_released();

    void on_minusButtom_clicked();

private:
    Ui::Widget *ui;
    int flag;
    double first;
    double second;
    int symbol;
};

#endif // WIDGET_H
