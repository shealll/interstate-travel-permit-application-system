#ifndef ADMIN_H
#define ADMIN_H
#include <string.h>
#include <iostream>
#include "User.h"

using namespace std;

class Admin : public User //inheritance
{
		
	private:
		string regUserID;           //registered traveler username
		string regPassword;         //registered traveler's password
		
	public:
		Admin();
		~Admin(){};
		
		string username;
		string pass;
		void viewUserlist();
		void registerUser();
		string getUserID();
		string getUserPass();
};

#endif
