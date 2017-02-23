#include "completer.h"
#include <QDebug>
completer::completer(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QStringList listDayofweek;
	listDayofweek << "Monday" << "Tuesday" << "Wednesday" << "Thursday" << "Friday" << "Saturday" << "Sunday";
	qDebug() << listDayofweek;
}

completer::~completer()
{

}

void completer::onDayofWeekTextChanged(QString str)
{
	qDebug() << str;
}

void completer::onYearTextChanged(QString str)
{

}

void completer::onNameTextChanged(QString str)
{

}
