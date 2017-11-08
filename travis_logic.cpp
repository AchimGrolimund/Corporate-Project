#include "travis_logic.h"
#include <iostream>
#include <QApplication>
using namespace std;

Travis_Logic::Travis_Logic()
{
	cout << "Travis_Logical running" << endl;
}

Travis_Logic::~Travis_Logic()
{
	cout << "Travis_Logical deleted" << endl;
	QApplication::exit(0);

}


