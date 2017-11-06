#include "mainwindow.h"
#include <QApplication>
#include "mathelogical.h"

#include "travis_logic.h" // Logikaufbau für Travis um die Funktionen zu testen

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();

	matheLogical ml;


	return ml.test_addition(2,2) == 4 ? 0 : 1;

	return a.exec();
}
