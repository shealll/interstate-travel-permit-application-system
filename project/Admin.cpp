#include <iostream>
#include <string.h>
#include "Admin.h"
#include "User.h"

Admin::Admin()
{
	username = "adminsystem";
	pass = "123";
	regUserID = "sarah";
	regPassword = "123";
}

void Admin::registerUser()
{
	system("CLS");
	cout<<endl<<"\t*************************************************************"<<endl<<endl
	<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
	<<"\t*************************************************************"<<endl<<endl
	<<"\t\t\t\t Admin"<<endl<<endl
	<<"\t*************************************************************"<<endl<<endl
	<<"\t\tRegister New User:"<<endl<<endl;
	cout<<"\t\t\tUser's Email: ";
	cin>>regUserID;
	cout<<"\t\t\tPassword: ";
	cin>>regPassword;

	
}

void Admin::viewUserlist()
{
	
	cout<<"\t\t 1. User: "<<getUserID()<<endl;
	cout<<"\t\t Password: "<<getUserPass()<<endl<<endl;
}

string Admin::getUserID()
{
	return regUserID;
}

string Admin::getUserPass()
{
	return regPassword;	
}
