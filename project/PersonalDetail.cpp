#include <iostream>
#include <string.h>
#include "PersonalDetail.h"

PersonalDetail::PersonalDetail()
{
	trvName     = "";
	trvIC       = "";
	trvPhoneNum = "";
	trvAddress  = "";
	trvEmail    = "";
}

void PersonalDetail::enterPersonal()
{
	cout<<endl<<"\t*************************************************************"<<endl<<endl
	<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
	<<"\t*************************************************************"<<endl<<endl
	<<"\t\t\t\t Personal Details"<<endl<<endl
	<<"\t*************************************************************"<<endl<<endl;
	cout<<"\t\t Please Enter Your Personal Details:"<<endl;
	cout<<endl<<"\t\t\t Name as in IC\t: ";
	cin>>trvName;
	cout<<endl<<"\t\t\t IC (xxxxxx-xx-xxxx)\t: ";
	cin>>trvIC;
	cout<<endl<<"\t\t\t Phone Number\t: +60 ";
	cin>>trvPhoneNum;
	cout<<endl<<"\t\t\t Address\t: ";
	cin>>trvAddress;
	cout<<endl<<"\t\t\t Email\t: ";
	cin>>trvEmail;
	cout<<endl<<endl;
}

string PersonalDetail::gettrvName()
{
	return trvName;
}

string PersonalDetail::gettrvIC()
{
	return trvIC;
}

string PersonalDetail::gettrvPhoneNum()
{
	return trvPhoneNum;
}

string PersonalDetail::gettrvAddress()
{
	return trvAddress;
}

string PersonalDetail::gettrvEmail()
{
	return trvEmail;
}

