/********************************************************************************
** Form generated from reading UI file 'lineedit.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEEDIT_H
#define UI_LINEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lineeditClass
{
public:
    QWidget *centralWidget;
    QLabel *label_user;
    QLabel *label_pwd;
    QLineEdit *lineEdit_pwd;
    QLineEdit *lineEdit_user;
    QPushButton *pushButton_login;
    QPushButton *pushButton_exit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *lineeditClass)
    {
        if (lineeditClass->objectName().isEmpty())
            lineeditClass->setObjectName(QStringLiteral("lineeditClass"));
        lineeditClass->resize(600, 400);
        lineeditClass->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));
        centralWidget = new QWidget(lineeditClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_user = new QLabel(centralWidget);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(110, 80, 42, 12));
        label_user->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));
        label_pwd = new QLabel(centralWidget);
        label_pwd->setObjectName(QStringLiteral("label_pwd"));
        label_pwd->setGeometry(QRect(110, 160, 30, 12));
        label_pwd->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));
        lineEdit_pwd = new QLineEdit(centralWidget);
        lineEdit_pwd->setObjectName(QStringLiteral("lineEdit_pwd"));
        lineEdit_pwd->setGeometry(QRect(170, 160, 261, 20));
        lineEdit_user = new QLineEdit(centralWidget);
        lineEdit_user->setObjectName(QStringLiteral("lineEdit_user"));
        lineEdit_user->setGeometry(QRect(170, 80, 261, 20));
        pushButton_login = new QPushButton(centralWidget);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(140, 250, 75, 23));
        pushButton_login->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\232\266\344\271\246\";"));
        pushButton_exit = new QPushButton(centralWidget);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(350, 250, 75, 23));
        lineeditClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(lineeditClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        lineeditClass->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit_user, lineEdit_pwd);
        QWidget::setTabOrder(lineEdit_pwd, pushButton_login);
        QWidget::setTabOrder(pushButton_login, pushButton_exit);

        retranslateUi(lineeditClass);

        QMetaObject::connectSlotsByName(lineeditClass);
    } // setupUi

    void retranslateUi(QMainWindow *lineeditClass)
    {
        lineeditClass->setWindowTitle(QApplication::translate("lineeditClass", "lineedit", 0));
        label_user->setText(QApplication::translate("lineeditClass", "\347\224\250\346\210\267\345\220\215:", 0));
        label_pwd->setText(QApplication::translate("lineeditClass", "\345\257\206\347\240\201:", 0));
        pushButton_login->setText(QApplication::translate("lineeditClass", "\347\231\273\351\231\206", 0));
        pushButton_exit->setText(QApplication::translate("lineeditClass", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class lineeditClass: public Ui_lineeditClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEEDIT_H
