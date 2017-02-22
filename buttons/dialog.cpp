#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    m_pGenderGroup = new QButtonGroup(this);
    m_pGenderGroup->addButton(ui->radioButton_man, 0);
    m_pGenderGroup->addButton(ui->radioButton_women, 1);

    m_pStatusGroup = new QButtonGroup(this);
    m_pStatusGroup->addButton(ui->radioButton_bang, 0);
    m_pStatusGroup->addButton(ui->radioButton_meng, 1);
    m_pStatusGroup->addButton(ui->radioButton_yao, 2);

    connect(m_pGenderGroup, SIGNAL(buttonClicked(int)), this, SLOT(RecvGenderID(int)));
    connect(m_pStatusGroup, SIGNAL(buttonClicked(int)), this, SLOT(RecvStatusID(int)));

    connect(ui->radioButton_20to39, SIGNAL(toggled(bool)), this, SLOT(on_radioButton_20to39_toggled_custom(bool)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::RecvGenderID(int id)
{
    if (0 == id)
    {
        qDebug() << "男";
    }
    else if (1 == id)
    {
        qDebug() << "女";
    }
}

void Dialog::RecvStatusID(int id)
{
    switch (id)
    {
    case 0:
        qDebug() << "棒棒哒";
        break;

    case 1:
        qDebug() << "萌萌哒";
        break;

    case 2:
        qDebug() << "该吃药了";
        break;

    default:
        break;
    }
}

void Dialog::on_radioButton_0to19_toggled(bool checked)
{
    if (checked)
    {
        qDebug() << "是0－19";
    }
    else
    {
        qDebug() << "不是0－19";
    }
}


void Dialog::on_radioButton_20to39_toggled_custom(bool checked)
{
    if (checked)
    {
        qDebug() << "是20－39";
    }
    else
    {
        qDebug() << "不是20－39";
    }
}

















void Dialog::on_radioButton_40to59_toggled(bool checked)
{
    if (checked)
    {
        qDebug() << "是40－59";
    }
    else
    {
        qDebug() << "不是40－59";
    }
}

void Dialog::on_radioButton_50up_toggled(bool checked)
{
    if (checked)
    {
        qDebug() << "是50以上";
    }
    else
    {
        qDebug() << "不是50以上";
    }
}
