#ifndef PERSONALDETAIL_H
#define PERSONALDETAIL_H
#include <string.h>
#include <iostream>

using namespace std;

class PersonalDetail
{
	public:
		PersonalDetail();
		~PersonalDetail(){};
		
		string trvName;
		string trvIC;
		string trvPhoneNum;
		string trvAddress;
		string trvEmail;
		
		void enterPersonal();
		string gettrvName();
		string gettrvIC();
		string gettrvPhoneNum();
		string gettrvAddress();
		string gettrvEmail();
};

#endif

