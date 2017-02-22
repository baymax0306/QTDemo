#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(open()));
    connect(ui->actionClose, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionTest1, SIGNAL(triggered()), this, SLOT(test1()));
    connect(ui->actionTest2, SIGNAL(triggered()), this, SLOT(test2()));
    connect(ui->actionHello, SIGNAL(triggered()), this, SLOT(hello()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::open()
{
    qDebug() << "actionOpen triggered.";
}


void MainWindow::close()
{
    qDebug() << "actionClose triggered.";
    qApp->quit();
}


void MainWindow::test1()
{
    QMessageBox::information(this, tr("test"), tr("test1"));
}

void MainWindow::test2()
{
    QMessageBox::information(this, tr("test"), tr("test2"));
}

void MainWindow::hello()
{
    QMessageBox::information(this, tr("test"), tr("hello"));
}
