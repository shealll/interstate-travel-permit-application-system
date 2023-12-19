#ifndef PERMITAPP_H
#define PERMITAPP_H
#include <string.h>
#include <iostream>

using namespace std;

class PermitApplication{
	public:
		string trvID;
		int permitID;
		string trvPurpose;
		string trvDestination;
		string trvTransport;
		string trvDate;
		string trvHistory;
		string trvCovidResult;
		string trvAppStatus;
	
		PermitApplication();
		~PermitApplication(){};
		
		void ApplyPermit();
		void DisplayApp();
		string gettrvID();
		int getpermitID();
		string getPurpose();
		string getDestination();
		string getTransport();
		string getDate();
		string getHistory();
		string getCovidResult();
		string AppStatus();
};

#endif
