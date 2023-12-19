#include <iostream>
#include <string.h>
#include <iomanip>
#include "PermitApp.h"

PermitApplication::PermitApplication()
{
	trvID = "-";
	permitID = 0;
	trvPurpose = "-";
	trvDestination = "-";
	trvTransport = "-";
	trvDate = "-";
	trvHistory = "-";
	trvCovidResult = "-";
	trvAppStatus = "-";
}

void PermitApplication::ApplyPermit()
{
	permitID = 1000;           //set permit application number as 1000
	trvAppStatus = "Pending";
	cout<<endl<<"\t*************************************************************"<<endl<<endl
	<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
	<<"\t*************************************************************"<<endl<<endl
	<<"\t\t\t\t Travel Permit Application"<<endl<<endl
	<<"\t*************************************************************"<<endl<<endl;
	cout<<"\t\t Please Enter Your Traveling Details:"<<endl;
	cout<<endl<<"\t\t\t Purpose: ";
	cin>>trvPurpose;
	cout<<endl<<"\t\t\t Destination: ";
	cin>>trvDestination;
	cout<<endl<<"\t\t\t Transport: ";
	cin>>trvTransport;
	cout<<endl<<"\t\t\t Date (DD.MM.YY): ";
	cin>>trvDate;
	cout<<endl<<"\t\t\t Travel History: ";
	cin>>trvHistory;
	cout<<endl<<endl;
}

void PermitApplication::DisplayApp()
{
	cout<<"\t\t Purpose: "<<setw(16)<<getPurpose()<<endl
		<<"\t\t Destination: "<<setw(10)<<getDestination()<<endl
		<<"\t\t Transport: "<<setw(11)<<getTransport()<<endl
		<<"\t\t Date: "<<setw(20)<<getDate()<<endl
		<<"\t\t Travel History: "<<setw(7)<<getHistory()<<endl;

}

string PermitApplication::gettrvID()
{
	return trvID;
}

int PermitApplication::getpermitID()
{
	return permitID;
}

string PermitApplication::getPurpose()
{
	return trvPurpose;
}

string PermitApplication::getDestination()
{
	return trvDestination;
}

string PermitApplication::getTransport()
{
	return trvTransport;
}

string PermitApplication::getDate()
{
	return trvDate;
}

string PermitApplication::getHistory()
{
	return trvHistory;
}

string PermitApplication::getCovidResult()
{
	return trvCovidResult;
}

string PermitApplication::AppStatus()
{
	return trvAppStatus;
}
