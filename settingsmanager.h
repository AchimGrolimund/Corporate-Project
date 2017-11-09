#ifndef SETTINGSMANAGER_H
#define SETTINGSMANAGER_H

#include <string>

using namespace std;

class settingsManager
{
	public:
		settingsManager();
		void loadSettings();
		void setUsername();
	private:
		string username;
};

#endif // SETTINGSMANAGER_H
