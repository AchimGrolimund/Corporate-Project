#include "settingsmanager.h"
#include "mainwindow.h"
#include <QSettings>


settingsManager::settingsManager()
{

}



void settingsManager::setUsername()
{
	MainWindow win;
	// <-- (Filename.ini , Format as ini -->
	QSettings settings("corporateSettings.ini", QSettings::IniFormat);

	// <-- begin Writing in Group [UserDaten] -->
	settings.beginGroup("UserDaten");
	settings.setValue("username","Achim");
	settings.endGroup();

	// <-- new group [Window] -->
	settings.beginGroup("Window");
	settings.setValue("size", win.size());
	settings.setValue("pos", win.pos());
	settings.endGroup();

	settings.sync();

}
