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

	QString m_strUserName;		//�û���
	QByteArray m_passwordHash;	//�������ı������룬�洢���� hash ֵ

	public slots:
	void Login();

protected:
	virtual void keyPressEvent(QKeyEvent* event);
};

#endif // LINEEDIT_H
