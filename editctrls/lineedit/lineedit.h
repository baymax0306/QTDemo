#ifndef LINEEDIT_H
#define LINEEDIT_H

#include <QtWidgets/QMainWindow>
#include "ui_lineedit.h"

class lineedit : public QMainWindow
{
	Q_OBJECT

public:
	lineedit(QWidget *parent = 0);
	~lineedit();

private:
	Ui::lineeditClass ui;
};

#endif // LINEEDIT_H
