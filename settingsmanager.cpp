#include "settingsmanager.h"
#include <QSettings>

settingsManager::settingsManager()
{
	QSettings my_settings("C:/settings.ini", QSettings::IniFormat);
}

void settingsManager::loadSettings()
{

}

void settingsManager::setUsername()
{
	QSettings settings;

	settings.beginGroup("UserDaten");
	settings.setValue("username","Achim");
	settings.endGroup();
	settings.sync();

}
