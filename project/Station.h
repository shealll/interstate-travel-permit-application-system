#ifndef STATION_H
#define STATION_H
#include <string.h>
#include <iostream>
#include "User.h"

using namespace std;

class Station : public User		//inheritance
{
	
	public:
		Station();
		~Station(){};
		
		string username;
		string pass;
		void getNotif();
		string getUserID();
		string getUserPass();
};

#endif

