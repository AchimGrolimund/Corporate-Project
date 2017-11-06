#include "mainwindow.h"
#include <QApplication>
#include "mathelogical.h"

#include "travis_logic.h" // Logikaufbau für Travis um die Funktionen zu testen

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();


	Travis_Logic *TL = new Travis_Logic;
	delete TL;



	return a.exec();
}
