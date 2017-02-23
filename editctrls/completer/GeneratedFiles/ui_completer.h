/********************************************************************************
** Form generated from reading UI file 'completer.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLETER_H
#define UI_COMPLETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_completerClass
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_dayofweek;
    QLineEdit *lineEdit_year;
    QLineEdit *lineEdit_name;

    void setupUi(QWidget *completerClass)
    {
        if (completerClass->objectName().isEmpty())
            completerClass->setObjectName(QStringLiteral("completerClass"));
        completerClass->resize(600, 400);
        label = new QLabel(completerClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 80, 80, 20));
        label->setMinimumSize(QSize(80, 20));
        label_2 = new QLabel(completerClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 180, 80, 20));
        label_2->setMinimumSize(QSize(80, 20));
        label_3 = new QLabel(completerClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 280, 80, 20));
        label_3->setMinimumSize(QSize(80, 20));
        widget = new QWidget(completerClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(220, 0, 152, 381));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_dayofweek = new QLineEdit(widget);
        lineEdit_dayofweek->setObjectName(QStringLiteral("lineEdit_dayofweek"));
        lineEdit_dayofweek->setMinimumSize(QSize(150, 20));

        verticalLayout->addWidget(lineEdit_dayofweek);

        lineEdit_year = new QLineEdit(widget);
        lineEdit_year->setObjectName(QStringLiteral("lineEdit_year"));
        lineEdit_year->setMinimumSize(QSize(150, 20));

        verticalLayout->addWidget(lineEdit_year);

        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setMinimumSize(QSize(150, 20));

        verticalLayout->addWidget(lineEdit_name);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit_dayofweek);
        label_2->setBuddy(lineEdit_year);
        label_3->setBuddy(lineEdit_name);
#endif // QT_NO_SHORTCUT

        retranslateUi(completerClass);
        QObject::connect(lineEdit_dayofweek, SIGNAL(textChanged(QString)), completerClass, SLOT(onDayofWeekTextChanged(QString)));
        QObject::connect(lineEdit_year, SIGNAL(textChanged(QString)), completerClass, SLOT(onYearTextChanged(QString)));
        QObject::connect(lineEdit_name, SIGNAL(textChanged(QString)), completerClass, SLOT(onNameTextChanged(QString)));

        QMetaObject::connectSlotsByName(completerClass);
    } // setupUi

    void retranslateUi(QWidget *completerClass)
    {
        completerClass->setWindowTitle(QApplication::translate("completerClass", "completer", 0));
        label->setText(QApplication::translate("completerClass", "&DayOfWeek", 0));
        label_2->setText(QApplication::translate("completerClass", "&Year", 0));
        label_3->setText(QApplication::translate("completerClass", "\351\222\237(&Z)", 0));
    } // retranslateUi

};

namespace Ui {
    class completerClass: public Ui_completerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLETER_H
