#include <iostream>
#include <string.h>
#include "User.h"

User::User()
{
	//
}

void User::setlogin()
{
	cout<<"\t\t Username: ";
	cin>>loginID;
	cout<<"\t\t Password: ";
	cin>>password;
	system("CLS");
}

void User::logout()
{
	cout<<endl<<endl<<"\t\t You have successfully Logged Out!"<<endl<<endl;	
}

string User::getloginID()
{
	return loginID;
}

string User::getpassword()
{
	return password;
}

