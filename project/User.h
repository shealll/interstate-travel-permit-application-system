#ifndef USER_H
#define USER_H
#include <string.h>
#include <iostream>

using namespace std;

class User{
	protected:
		string loginID;
		string password;
		
	public:
		User();
		~User(){};
		
		void setlogin();
		void logout();
		string getloginID();
		string getpassword();
};

#endif
