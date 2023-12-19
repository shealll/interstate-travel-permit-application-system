#ifndef OFFICER_H
#define OFFICER_H
#include <string.h>
#include <iostream>
#include "User.h"

using namespace std;

class Officer : public User{
	
	public:
		Officer();
		~Officer(){};
		string approve;
		string reject;
		
		string username;
		string pass;
		string approveApp();
		string rejectApp();
};
#endif
