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

	QString m_strUserName;		//用户名
	QByteArray m_passwordHash;	//不能明文保存密码，存储密码 hash 值

	public slots:
	void Login();

protected:
	virtual void keyPressEvent(QKeyEvent* event);
};

#endif // LINEEDIT_H
