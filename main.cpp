#include "mainwindow.h"
#include <QApplication>
#include "settingsmanager.h"


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();


	settingsManager settings;
	settings.setUsername();





	return a.exec();
}
