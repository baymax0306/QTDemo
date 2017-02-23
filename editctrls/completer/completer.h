#ifndef COMPLETER_H
#define COMPLETER_H

#include <QtWidgets/QWidget>
#include "ui_completer.h"

class completer : public QWidget
{
	Q_OBJECT

public:
	completer(QWidget *parent = 0);
	~completer();

private:
	Ui::completerClass ui;

	private slots:

	void onDayofWeekTextChanged(QString str);
	void onYearTextChanged(QString str);
	void onNameTextChanged(QString str);
};

#endif // COMPLETER_H
