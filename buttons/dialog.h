#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class QButtonGroup;
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QButtonGroup* m_pGenderGroup;   //性别单选按钮分组
    QButtonGroup* m_pStatusGroup;   //状态单选按钮分组
private slots:
    void RecvGenderID(int id);      //接收性别单选按钮分组信号
    void RecvStatusID(int id);      //接收状态单选按钮分组信号


    void on_radioButton_0to19_toggled(bool checked);
    void on_radioButton_20to39_toggled_custom(bool checked);
    void on_radioButton_40to59_toggled(bool checked);
    void on_radioButton_50up_toggled(bool checked);
};

#endif // DIALOG_H
