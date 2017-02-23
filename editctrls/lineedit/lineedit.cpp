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
		QMessageBox::warning(this, tr("������Ϣ"), tr("�û��������벻��Ϊ��!"));
		return;
	}

	//�û���
	m_strUserName = ui.lineEdit_user->text();

	//����
	m_passwordHash = QCryptographicHash::hash(ui.lineEdit_pwd->text().toUtf8(), QCryptographicHash::Sha3_256);

	QString strMsg = tr("�û���:") + m_strUserName + tr("���� Hash:");
	//��ÿ�� Hash �ֽ�ת��һ��ʮ�������ַ���ʾ
	// 256 bit ��Ӧ 32 �ֽڣ���� 64 ��ʮ�������ַ���ӡ
	strMsg += m_passwordHash.toHex();

	qDebug() << strMsg;

	QString hashString;
	QFile file("Hash.ini");
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QMessageBox::warning(this, tr("������Ϣ"), tr("���ļ�ʧ�ܣ�"));
	}
	QTextStream in(&file);
	while (!in.atEnd())
	{
		hashString += in.readLine();
		qDebug() << hashString;
	}

	if (strMsg == hashString)
	{
		QMessageBox::information(this, tr("��½��ʾ"), tr("��֤ͨ������½�ɹ���"));
	}
	else
	{
		QMessageBox::warning(this, tr("��½��ʾ"), tr("�˺Ż�������󣬵�½ʧ�ܣ�"));
	}
	//������ʾ��ע�⣺ʵ��Ӧ���лὫ�û��������� Hash �����ݿ�������ļ�������Ƚϣ������ǵ���
	//QMessageBox::information(this, tr("�û���Ϣ"), strMsg);

	QMessageBox::information(this, tr("������Ǯ"), tr("�����ж���"));
	
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
