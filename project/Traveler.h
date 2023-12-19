#ifndef TRAVELER_H
#define TRAVELER_H
#include <string.h>
#include <iostream>
#include "User.h"

using namespace std;

class Traveler : public User{

	public:
		Traveler();
		~Traveler(){};
		
		string Name;
		string IC;
		string PhoneNum;
		string Address;
		string Email;
		string CovidResult;
		
		void getPersonal();
		void AnswerSelfAssess();
		string getName();
		string getIC();
		string getPhoneNum();
		string getAddress();
		string getEmail();
		string getCovidResult();
};	

#endif

