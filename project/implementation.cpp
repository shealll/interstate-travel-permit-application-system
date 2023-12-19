#include <iostream>
#include <string.h>
#include <iomanip>
#include "Traveler.h"

Traveler::Traveler()
{
	Name = "-";
	IC = "-";
	PhoneNum = "-";
	Address = "-";
	Email = "-";
	CovidResult = "Unavailable";
}

void Traveler::getPersonal()
{
	cout<<"\t\t Name: "<<setw(15)<<getName()<<endl
		<<"\t\t IC: "<<setw(17)<<getIC()<<endl
		<<"\t\t Phone Number: "<<setw(7)<<getPhoneNum()<<endl
		<<"\t\t Address: "<<setw(12)<<getAddress()<<endl
		<<"\t\t Email: "<<setw(14)<<getEmail()<<endl<<endl;
}

void Traveler::AnswerSelfAssess()
{
	int Q1, Q2,Q3;
	
		while(Q1!=2)
		{
			cout<<endl<<"\t*************************************************************"<<endl<<endl
				<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
				<<"\t\t\t\t Covid-19 Self-Assessment"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl;
			cout<<"\t Please Answer the following health-related questions :"<<endl<<endl;
			cout<<"\t\t 1.   Is the applicant experiencing any of the following:"<<endl<<endl
				<<"\t\t - severe difficulty breathing (e.g., struggling for each breath"<<endl 
				<<"\t\t   speaking in single words), severe chest pain, having a very hard"<<endl
				<<"\t\t   time waking up, feeling confused, lost consciousness, shortness of"<<endl
				<<"\t\t   breath at rest, inability to lie down because of difficulty breathing,"<<endl
				<<"\t\t   chronic health conditions that you are having difficulty managing"<<endl
				<<"\t\t   because of your current respiratory illness, fever, new onset of cough"<<endl
				<<"\t\t   or worsening of chronic cough, new or worsening shortness of breath,"<<endl  
				<<"\t\t   new or worsening difficulty breathing, sore throat, runny nose, chills,"<<endl 
				<<"\t\t   painful swallowing, stuffy nose, headache, muscle or joint ache, feeling"<<endl 
				<<"\t\t   unwell, fatigue or severe exhaustion, nausea, vomiting, diarrhea or"<<endl
				<<"\t\t   unexplained loss of appetite, loss of sense of smell or taste,"<<endl
				<<"\t\t   conjunctivitis (pink eye)"<<endl<<endl;
			cout<<"\t\t\t 1 - Yes"<<endl
				<<"\t\t\t 2 - No"<<endl
				<<"\t\t\t Enter your answer: ";
			    cin>>Q1;
			    system("PAUSE");
			    system("CLS");
			
			if(Q1 == 1)
			{	
				system("CLS");
				cout<<endl<<"\t*************************************************************"<<endl<<endl
				<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
				<<"\t\t\t\t Covid-19 Self-Assessment"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
				<<"Please call 911 or go directly to you nearest emergency department!!"<<endl<<endl;
				break;
				exit(0);
			}
			else if(Q1 == 2)
			{
				cout<<endl<<endl;
			}
			else
			{
				system("CLS");
				cout<<endl<<"\t*************************************************************"<<endl<<endl
				<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
				<<"\t\t\t\t Error Message!"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
			    <<"\t\t\tInvalid answer! Please try again."<<endl<<endl;
			    system("PAUSE");
			    system("CLS");
			}
			
		}
			
		while(Q2!=2){
			system("CLS");
			cout<<endl<<"\t*************************************************************"<<endl<<endl
			<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
			<<"\t*************************************************************"<<endl<<endl
			<<"\t\t\t\t Covid-19 Self-Assessment"<<endl<<endl
			<<"\t*************************************************************"<<endl<<endl
			<<"\t 2.   Have you been in close contact with a confirmed case of COVID-19?"<<endl<<endl;
			cout<<"\t\t\t 1 - Yes"<<endl
				<<"\t\t\t 2 - No"<<endl
				<<"\t\t\tChoose: ";
			    cin>>Q2;
			    system("PAUSE");
			    system("CLS");
			
			if(Q2 == 1){
				system("CLS");
				cout<<endl<<"\t*************************************************************"<<endl<<endl
				<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
				<<"\t\t\t\t Covid-19 Self-Assessment"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl				
				<<"Please self-isolate for 14 days and contact a health care provider for further guidance."<<endl<<endl;
				exit(0);
			}
			else if(Q2 == 2)
			{
				cout<<endl<<endl;
			}
			else 
			{
				system("CLS");
				cout<<endl<<"\t*************************************************************"<<endl<<endl
				<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
				<<"\t\t\t\t Error Message!"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
				<<"\t\t\tInvalid answer! Please try again."<<endl<<endl;
				system("PAUSE");
				system("CLS");
			}
		}
		
		while(Q3!=2){
			system("CLS");
			cout<<endl<<"\t*************************************************************"<<endl<<endl
			<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
			<<"\t*************************************************************"<<endl<<endl
			<<"\t\t\t\t Covid-19 Self-Assessment"<<endl<<endl
			<<"\t*************************************************************"<<endl<<endl;
			cout<<"\t\t 3.   The past 14 days, did you return from travel to red zone/high risk areas?"<<endl<<endl;
			cout<<"\t\t\t 1 - Yes"<<endl
				<<"\t\t\t 2 - No"<<endl
				<<"\t\t\t Choose: ";
			cin>>Q3;
			system("PAUSE");
			system("CLS");
			
			if(Q3 == 1){
				system("CLS");
				cout<<endl<<"\t*************************************************************"<<endl<<endl
				<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
				<<"\t\t\t\t Covid-19 Self-Assessment"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
				<<"Please self-isolate for 14 days and contact a health care provider for further guidance."<<endl<<endl;
				exit(0);
			}
			else if(Q3 == 2)
			{
				cout<<endl<<endl;
			}
			else 
			{
				system("CLS");
				cout<<endl<<"\t*************************************************************"<<endl<<endl
				<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
				<<"\t\t\t\t Covid-19 Self-Assessment"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
				<<"\t\t\tInvalid answer! Please try again."<<endl<<endl;
				system("PAUSE");
				system("CLS");
			}
		}
		
	CovidResult = "Verified";        //set Health Questionnaire result as 'Verified'
	
}

string Traveler::getName()
{
	return Name;
}

string Traveler::getIC()
{
	return IC;
}

string Traveler::getPhoneNum()
{
	return PhoneNum;
}

string Traveler::getAddress()
{
	return Address;
}

string Traveler::getEmail()
{
	return Email;
}


