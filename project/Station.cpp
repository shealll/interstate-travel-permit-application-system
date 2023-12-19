#include <iostream>
#include <string.h>
#include "Station.h"

Station::Station()
{
	username = "station";
	pass = "789";
}

string Station::getUserID()
{
	return username;
}

string Station::getUserPass()
{
	return pass;
}

void Station::getNotif()
{
	cout<<endl<<"\t\t\t New Applications are sent in!"<<endl<<endl;
}
