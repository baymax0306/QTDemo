#include "lineedit.h"
#include <QMessageBox>
#include <QCryptographicHash>
#include <QDebug>
#include <QKeyEvent>
#include <QFile>

#pragma execution_character_set("utf-8")


lineedit::lineedit(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.lineEdit_pwd->setEchoMode(QLineEdit::Password);
	

	connect(ui.pushButton_login, &QPushButton::clicked, this, &lineedit::Login);
	connect(ui.pushButton_exit, &QPushButton::clicked, qApp, &QApplication::quit);
}

lineedit::~lineedit()
{

}

void lineedit::Login()
{
	if (ui.lineEdit_user->text().isEmpty() || ui.lineEdit_pwd->text().isEmpty())
	{
		QMessageBox::warning(this, tr("警告信息"), tr("用户名或密码不能为空!"));
		return;
	}

	//用户名
	m_strUserName = ui.lineEdit_user->text();

	//密码
	m_passwordHash = QCryptographicHash::hash(ui.lineEdit_pwd->text().toUtf8(), QCryptographicHash::Sha3_256);

	QString strMsg = tr("用户名:") + m_strUserName + tr("密码 Hash:");
	//把每个 Hash 字节转成一对十六进制字符显示
	// 256 bit 对应 32 字节，变成 64 个十六进制字符打印
	strMsg += m_passwordHash.toHex();

	qDebug() << strMsg;

	QString hashString;
	QFile file("Hash.ini");
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QMessageBox::warning(this, tr("警告信息"), tr("打开文件失败！"));
	}
	QTextStream in(&file);
	while (!in.atEnd())
	{
		hashString += in.readLine();
		qDebug() << hashString;
	}

	if (strMsg == hashString)
	{
		QMessageBox::information(this, tr("登陆提示"), tr("验证通过，登陆成功！"));
	}
	else
	{
		QMessageBox::warning(this, tr("登陆提示"), tr("账号或密码错误，登陆失败！"));
	}
	//弹窗显示，注意：实际应用中会将用户名和密码 Hash 与数据库或配置文件里的做比较，而不是弹窗
	//QMessageBox::information(this, tr("用户信息"), strMsg);

	QMessageBox::information(this, tr("马上有钱"), tr("马上有对象"));
	
}

void lineedit::keyPressEvent(QKeyEvent* event)
{
	if (Qt::Key_Return == event->key())
	{
		Login();
	}
	else if (Qt::Key_Escape == event->key())
	{
		qApp->quit();
	}
}
