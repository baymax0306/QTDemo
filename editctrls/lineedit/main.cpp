#include "lineedit.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	lineedit w;
	w.show();
	return a.exec();
}
