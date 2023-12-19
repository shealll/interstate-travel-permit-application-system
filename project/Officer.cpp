#include <iostream>
#include <string.h>
#include "Officer.h"

Officer::Officer()
{
	username = "disasterofficer";
	pass = "456";
	approve = "Approved";
	reject = "Rejected";
}
string Officer::approveApp()
{
	return approve;
}

string Officer::rejectApp()
{
	return reject;
}

