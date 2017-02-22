#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QDebug>
#include <QKeyEvent>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    flag=-1;
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_cleanButtom_clicked()
{
    ui->displayLabel->setText("0");
}

void Widget::on_delButtom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(newNum.length()==1){
        newNum="0";
    }else{
        newNum=ui->displayLabel->text().left(ui->displayLabel->text().length()-1);
    }
    ui->displayLabel->setText(newNum);

}

void Widget::on_quitButtom_clicked()
{
    qApp->quit();
}

void Widget::on_n1Buttom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(flag!=-1){
        newNum="1";
        flag=-1;
    }else{
        if(newNum=="0"){
            newNum="1";
        }else{
            newNum+="1";
        }
    }

    ui->displayLabel->setText(newNum);
}

void Widget::on_n2Buttom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(flag!=-1){
        newNum="2";
        flag=-1;
    }else{
        if(newNum=="0"){
            newNum="2";
        }else{
            newNum+="2";
        }
    }

    ui->displayLabel->setText(newNum);
}
void Widget::on_n3Buttom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(flag!=-1){
        newNum="3";
        flag=-1;
    }else{
        if(newNum=="0"){
            newNum="3";
        }else{
            newNum+="3";
        }
    }
    ui->displayLabel->setText(newNum);
}


void Widget::on_n4Buttom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(flag!=-1){
        newNum="4";
        flag=-1;
    }else{
        if(newNum=="0"){
            newNum="4";
        }else{
            newNum+="4";
        }
    }

    ui->displayLabel->setText(newNum);

}

void Widget::on_n5Buttom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(flag!=-1){
        newNum="5";
        flag=-1;
    }else{
        if(newNum=="0"){
            newNum="5";
        }else{
            newNum+="5";
        }
    }

    ui->displayLabel->setText(newNum);

}

void Widget::on_n6Buttom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(flag!=-1){
        newNum="6";
        flag=-1;
    }else{
        if(newNum=="0"){
            newNum="6";
        }else{
            newNum+="6";
        }
    }

    ui->displayLabel->setText(newNum);
}

void Widget::on_n7Buttom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(flag!=-1){
        newNum="7";
        flag=-1;
    }else{
        if(newNum=="0"){
            newNum="7";
        }else{
            newNum+="7";
        }
    }
    ui->displayLabel->setText(newNum);
}

void Widget::on_n8Buttom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(flag!=-1){
        newNum="8";
        flag=-1;
    }else{
        if(newNum=="0"){
            newNum="8";
        }else{
            newNum+="8";
        }
    }

    ui->displayLabel->setText(newNum);
}

void Widget::on_n9Buttom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(flag!=-1){
        newNum="9";
        flag=-1;
    }else{
        if(newNum=="0"){
            newNum="9";
        }else{
            newNum+="9";
        }
    }

    ui->displayLabel->setText(newNum);
}

void Widget::on_n0Buttom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(flag!=-1){
        newNum="0";
        flag=-1;
    }else{
        if(newNum=="0"){
            newNum="0";
        }else{
            newNum+="0";
        }
    }

    ui->displayLabel->setText(newNum);
}

void Widget::on_npButtom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(newNum.indexOf(".")==-1){
        newNum+=".";
    }
    ui->displayLabel->setText(newNum);

}
void Widget::on_minusButtom_clicked()
{
    QString newNum=ui->displayLabel->text();
    if(newNum.indexOf("-")==-1){
        newNum="-"+newNum;
    }else if(newNum.indexOf("-")==0){
        newNum.remove("-");
    }
    ui->displayLabel->setText(newNum);

}
//加：0 减：1 乘：2 除：3
void Widget::on_addButtom_clicked()
{
    QString newNum=ui->displayLabel->text();
    first=newNum.toDouble();
    symbol=0;
    flag=0;

}

void Widget::on_subButtom_clicked()
{
    QString newNum=ui->displayLabel->text();
    first=newNum.toDouble();
    symbol=1;
    flag=0;
}

void Widget::on_multiButtom_clicked()
{
    QString newNum=ui->displayLabel->text();
    first=newNum.toDouble();
    symbol=2;
    flag=0;
}

void Widget::on_divisionButtom_clicked()
{
    QString newNum=ui->displayLabel->text();
    first=newNum.toDouble();
    symbol=3;
    flag=0;
}
void Widget::on_equalButtom_clicked()
{
    QString newNum=ui->displayLabel->text();
    second=newNum.toDouble();
    double display;
    switch (symbol) {
    case 0:
        display=first+second;
        break;
    case 1:
        display=first-second;
        break;
    case 2:
        display=first*second;
        break;
    case 3:
        if(second==0){
            display=-1;
        }else{
            display=first/second;
        }

        break;
    default:break;
    }
    if(first!=-999)
    {
        first=-999;
        //QString QString::​number(double n, char format = 'g', int precision = 6)
        //format: 'g'表示科学计数法， 'f'表示非科学计数法
        //precision: 表示小数位数
        ui->displayLabel->setText(QString::number(display, 'f'));
    }

}



void Widget::on_n0Buttom_released()
{
    ui->n0Buttom->setStyleSheet("border-image: url(:/res/d3btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n0Buttom_pressed()
{
    ui->n0Buttom->setStyleSheet("border-image: url(:/res/d3btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}



void Widget::on_quitButtom_pressed()
{
    ui->quitButtom->setStyleSheet("border-image: url(:/res/d1btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_quitButtom_released()
{
    ui->quitButtom->setStyleSheet("border-image: url(:/res/d1btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_delButtom_pressed()
{
    ui->delButtom->setStyleSheet("border-image: url(:/res/d0btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_delButtom_released()
{
    ui->delButtom->setStyleSheet("border-image: url(:/res/d0btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_cleanButtom_pressed()
{
    ui->cleanButtom->setStyleSheet("border-image: url(:/res/d0btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_cleanButtom_released()
{
    ui->cleanButtom->setStyleSheet("border-image: url(:/res/d0btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_divisionButtom_pressed()
{
    ui->divisionButtom->setStyleSheet("border-image: url(:/res/d2btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_divisionButtom_released()
{
    ui->divisionButtom->setStyleSheet("border-image: url(:/res/d2btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n7Buttom_pressed()
{
ui->n7Buttom->setStyleSheet("border-image: url(:/res/d3btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n7Buttom_released()
{
ui->n7Buttom->setStyleSheet("border-image: url(:/res/d3btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n8Buttom_pressed()
{
ui->n8Buttom->setStyleSheet("border-image: url(:/res/d3btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n8Buttom_released()
{
ui->n8Buttom->setStyleSheet("border-image: url(:/res/d3btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n9Buttom_pressed()
{
ui->n9Buttom->setStyleSheet("border-image: url(:/res/d3btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n9Buttom_released()
{
ui->n9Buttom->setStyleSheet("border-image: url(:/res/d3btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_multiButtom_pressed()
{
ui->multiButtom->setStyleSheet("border-image: url(:/res/d2btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_multiButtom_released()
{
ui->multiButtom->setStyleSheet("border-image: url(:/res/d2btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n4Buttom_pressed()
{
ui->n4Buttom->setStyleSheet("border-image: url(:/res/d3btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n4Buttom_released()
{
ui->n4Buttom->setStyleSheet("border-image: url(:/res/d3btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n5Buttom_pressed()
{
ui->n5Buttom->setStyleSheet("border-image: url(:/res/d3btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n5Buttom_released()
{
ui->n5Buttom->setStyleSheet("border-image: url(:/res/d3btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n2Buttom_pressed()
{
ui->n2Buttom->setStyleSheet("border-image: url(:/res/d3btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n6Buttom_pressed()
{
ui->n6Buttom->setStyleSheet("border-image: url(:/res/d3btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n6Buttom_released()
{
ui->n6Buttom->setStyleSheet("border-image: url(:/res/d3btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_subButtom_pressed()
{
ui->subButtom->setStyleSheet("border-image: url(:/res/d2btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_subButtom_released()
{
ui->subButtom->setStyleSheet("border-image: url(:/res/d2btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n1Buttom_pressed()
{
ui->n1Buttom->setStyleSheet("border-image: url(:/res/d3btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n1Buttom_released()
{
ui->n1Buttom->setStyleSheet("border-image: url(:/res/d3btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n2Buttom_released()
{
ui->n2Buttom->setStyleSheet("border-image: url(:/res/d3btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n3Buttom_pressed()
{
ui->n3Buttom->setStyleSheet("border-image: url(:/res/d3btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_n3Buttom_released()
{
ui->n3Buttom->setStyleSheet("border-image: url(:/res/d3btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_addButtom_pressed()
{
ui->addButtom->setStyleSheet("border-image: url(:/res/d2btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_addButtom_released()
{
ui->addButtom->setStyleSheet("border-image: url(:/res/d2btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_npButtom_pressed()
{
ui->npButtom->setStyleSheet("border-image: url(:/res/d3btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_npButtom_released()
{
ui->npButtom->setStyleSheet("border-image: url(:/res/d3btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_minusButtom_pressed()
{
ui->minusButtom->setStyleSheet("border-image: url(:/res/d3btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_minusButtom_released()
{
ui->minusButtom->setStyleSheet("border-image: url(:/res/d3btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_equalButtom_pressed()
{
ui->equalButtom->setStyleSheet("border-image: url(:/res/d4btn-b.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::on_equalButtom_released()
{
ui->equalButtom->setStyleSheet("border-image: url(:/res/d4btn-a.gif);color: rgb(255, 255, 255);font: 13pt \"微软雅黑\";");
}

void Widget::keyPressEvent(QKeyEvent* event)
{
  //  qDebug() << "keyPressEvent";

    switch (event->key())
    {
    case Qt::Key_0:
        on_n0Buttom_clicked();
        break;

    case Qt::Key_1:
        on_n1Buttom_clicked();
        break;

    case Qt::Key_2:
        on_n2Buttom_clicked();
        break;
    case Qt::Key_3:
        on_n3Buttom_clicked();
        break;

    case Qt::Key_4:
        on_n4Buttom_clicked();
        break;

    case Qt::Key_5:
        on_n5Buttom_clicked();
        break;

    case Qt::Key_6:
        on_n6Buttom_clicked();
        break;

    case Qt::Key_7:
        on_n7Buttom_clicked();
        break;

    case Qt::Key_8:
        on_n8Buttom_clicked();
        break;

    case Qt::Key_9:
        on_n9Buttom_clicked();
        break;

    case Qt::Key_Plus:
        on_addButtom_clicked();
        break;

    case Qt::Key_Minus:
        on_subButtom_clicked();
        break;

    case Qt::Key_multiply:
        on_multiButtom_clicked();
        break;

    case Qt::Key_division:
        on_multiButtom_clicked();
        break;

    case Qt::Key_Return:
    case Qt::Key_Equal:
        on_equalButtom_clicked();
        break;

    case Qt::Key_Backspace:
        on_delButtom_clicked();
        break;

    case Qt::Key_Escape:
        on_cleanButtom_clicked();
        break;
    }

}





















