//TMi2113 Object-oriented Software Development Project
//Group 5 
/*Members: 1. Siti Rubiah Binti Muslim (72689)
		   2. Haziq Ilmani Bin Nasiruddin (72255)
		   3. Margaret Ling Yee Ching  (72790)
		   4. Ng Shi Ya (70723)
*/
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <limits>
#include <iomanip>
#include "User.h"
#include "Admin.h"
#include "Traveler.h"
#include "Officer.h"
#include "Station.h"
#include "PermitApp.h"
#include "PersonalDetail.h"

using namespace std;	   

int main()
{
	User user; Admin admin; Traveler trv; Officer officer; Station station; PermitApplication PA[10]; PersonalDetail PD;
	int menu, ad_menu, trv_menu, off_menu, stat_menu;      
	int i=0, num=0, regPD = 0, AnswerQ = 0;                //variables to keep count
	
	while(menu!=4)              //Driver menu
	{
		cout<<endl<<"\t*************************************************************"<<endl<<endl
			<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
			<<"\t*************************************************************"<<endl<<endl
			<<"\t\t\t 1 - Admin"<<endl
			<<"\t\t\t 2 - Traveler"<<endl
			<<"\t\t\t 3 - Disaster Control Officer"<<endl
			<<"\t\t\t 4 - Station"<<endl<<endl
			<<"\t\t\t Enter your selection: ";
			
		cin>>menu;
		system("CLS");
		switch(menu)
		{
			case 1:                  //Admin Login
			{	
				cout<<endl<<"\t*************************************************************"<<endl<<endl
				<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl
				<<"\t\t\t\t Admin Login"<<endl<<endl
				<<"\t*************************************************************"<<endl<<endl;
				admin.setlogin();
				
				if((admin.username == admin.getloginID())&&(admin.pass == admin.getpassword()))         //If the username and password entered matches the
				{                                                                                               //pre-set username and password
					cout<<endl<<"\t*************************************************************"<<endl<<endl        //then the user is able to log in
					<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl
					<<"\t\t\t\t Message"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl
					<<"\t\t You have successfully logged in!\n\t"<<endl<<endl;                           
					system("PAUSE");
					system("CLS");
					
					while(ad_menu!=3)
					{                                       //Admin Menu
						cout<<endl<<"\t*************************************************************"<<endl<<endl
						<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
						<<"\t*************************************************************"<<endl<<endl
						<<"\t\t\t\t Admin"<<endl<<endl
						<<"\t*************************************************************"<<endl<<endl
						<<"\t\t\t1 - View Traveler List"<<endl
						<<"\t\t\t2 - Register New Traveler"<<endl
						<<"\t\t\t3 - Log Out"<<endl<<endl
						<<"\t\t\tChoose: ";
						cin>>ad_menu;
						
						switch(ad_menu)
						{
							case 1:
							{                    
								system("CLS");
								cout<<endl<<"\t*************************************************************"<<endl<<endl
								<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl
								<<"\t\t\t\t Admin"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl
								<<"\t\tList of registered traveler:\n"<<endl<<endl;
								admin.viewUserlist();             //to view the list of registered traveler's account 
								system("PAUSE");
								system("CLS");
								break;
							}
							case 2:
							{
								admin.registerUser();           //to register a traveler's account
								system("CLS");
								cout<<"\n";
								cout<<endl<<"\t*************************************************************"<<endl<<endl
								<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl
								<<"\t\t\t\t Message"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl;
								cout<<"\t\t\tRegistration successful!\n"<<endl<<endl;
								cout<<"Email has been sent to :"<<setw(40)<<admin.getUserID()<<endl<<endl;
								system("PAUSE");
								system("CLS");
								break;
							}
							case 3:
							{                             //Admin logging out
								system("CLS");
								cout<<endl<<"\t*************************************************************"<<endl<<endl
								<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl
								<<"\t\t\t\t Admin"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl;
								cout<<"\t\t\t\tLogging Out..."<<endl<<endl;
								system("PAUSE");
								system("CLS");
								break;
							}
							default:
							{                        //error message
								cout<<endl<<"\t*************************************************************"<<endl<<endl
								<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl
								<<"\t\t\t Error Message!"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl;
								cout<<"Invalid number of selection!!";
								system("PAUSE");
								system ("CLS");
								break;
							}
						}
					}
				}
				else
				{                             //error message
					cout<<endl<<"\t*************************************************************"<<endl<<endl
					<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl
					<<"\t\t\t Error Message!"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl;
					cout<<"\t\t\tUsername or Password is incorrect"<<endl<<endl;
					system("PAUSE");
					system("CLS");
				}
				break;
			}			
			case 2:                       //Traveler Login    
				{
					cout<<endl<<"\t*************************************************************"<<endl<<endl
					<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl
					<<"\t\t\tTraveler Login"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl;
					trv.setlogin();
					system("CLS");
				
				if((trv.getloginID() == admin.getUserID())&&(trv.getpassword() == admin.getUserPass()))      //if the username and password entered matches
				{                                                                                               //the registered traveler's account then the
					cout<<endl<<"\t*************************************************************"<<endl<<endl       //user is able to log in
					<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl
					<<"\t\t\t\t Message"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl
					<<"\t\t You have successfully logged in!\n\t"<<endl<<endl;
					system("PAUSE");
					system("CLS");

					while(trv_menu!=5){                    //Traveler Menu
						cout<<endl<<"\t*************************************************************"<<endl<<endl
						<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
						<<"\t*************************************************************"<<endl<<endl
						<<"\t\t\t\t Welcome "<<trv.getloginID()<<"!"<<endl<<endl
						<<"\t*************************************************************"<<endl<<endl;
						cout<<"\t\t\t 1 - Personal Details"<<endl
							<<"\t\t\t 2 - Covid Self-Assessment"<<endl
							<<"\t\t\t 3 - Apply for Interstate Travel Permit"<<endl
							<<"\t\t\t 4 - Your Applications Status"<<endl
							<<"\t\t\t 5 - Log Out"<<endl<<endl
							<<"\t\t\t Enter your selection: ";
						cin>>trv_menu;
						system("CLS");
						switch(trv_menu){
							case 1: 
								int pd_menu;
								                    //Traveler views Personal Detail
								cout<<endl<<"\t*************************************************************"<<endl<<endl
								<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl
								<<"\t\t\t\t Personal Details"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl;
								trv.getPersonal();
						    	cout<<"\t______________________________________________________________"<<endl<<endl;
						    	
								cout<<"\t\t Options:"<<endl
								<<"\t\t\t 1 - Register Personal Details"<<endl
								<<"\t\t\t 2 - Back"<<endl<<endl
								<<"\t\t\t Enter your selection: ";
								cin>>pd_menu;
								system("CLS");
								
								switch(pd_menu)
								{
									case 1:                //assign details from Personal Detail class to Traveler class
										PD.enterPersonal();
										trv.Name = PD.gettrvName();
										trv.IC = PD.gettrvIC();
										trv.PhoneNum = PD.gettrvPhoneNum();
										trv.Address = PD.gettrvAddress();
										trv.Email = PD.gettrvEmail();
										regPD = 1;
										system("PAUSE");
										system("CLS");
										cout<<endl<<"\t*************************************************************"<<endl<<endl
										<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
										<<"\t*************************************************************"<<endl<<endl
										<<"\t\t\t\t Message"<<endl<<endl
										<<"\t*************************************************************"<<endl<<endl
										<<"\t\tYour details have been registered!"<<endl<<endl;
										system("PAUSE");
										system("CLS");
										break;
										
									case 2: 
									{
										system("CLS");
										break;
									}
									default: 
									{                               //error message
										cout<<endl<<"\t*************************************************************"<<endl<<endl
										<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
										<<"\t*************************************************************"<<endl<<endl
										<<"\t\t\t\t Error Message!"<<endl<<endl
										<<"\t*************************************************************"<<endl<<endl
										<<"\t\t\tInvalid number of selection! Please try again."<<endl<<endl;
									}
								}
								break;
							case 2:
								int covid_menu;
								
								while(covid_menu!=2)               //Covid-19 Self-Assessment Menu
								{
									cout<<endl<<"\t*************************************************************"<<endl<<endl
									<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl
									<<"\t\t\t\t Covid-19 Self-Assessment"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl
									<<"\t\t Your Latest Self-Assessed Status : "<<trv.CovidResult<<endl<<endl
									<<"\t\t\t 1 - Answer Health Questionnaire"<<endl
									<<"\t\t\t 2 - Back "<<endl
									<<"\t\t\t Enter your selection: ";
								    cin>>covid_menu;
									
									switch(covid_menu)
									{
										case 1:
										{                     //Answer Health Questionnaire
											trv.AnswerSelfAssess();
											AnswerQ = 1;   
											system("CLS");
											cout<<endl<<"\t*************************************************************"<<endl<<endl
											<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
											<<"\t*************************************************************"<<endl<<endl
											<<"\t\t\t\t Covid-19 Self-Assessment"<<endl<<endl
											<<"\t*************************************************************"<<endl<<endl
											<<"\tYour answer has been recorded. "<<endl
											<<"\tBased on your answers, your risk of having Covid-19 is LOW."<<endl<<endl;
											system("PAUSE");
											system("CLS");
											break;
										}
													
										case 2:
										{
											system("CLS");
											break;
								    	}
											
										default: 
										{                          //error message
											cout<<endl<<"\t*************************************************************"<<endl<<endl
											<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
											<<"\t*************************************************************"<<endl<<endl
											<<"\t\t\t\t Error Message!"<<endl<<endl
											<<"\t*************************************************************"<<endl<<endl;
											cout<<endl<<endl<<"\t\t\tInvalid number of selection! Please try again."<<endl<<endl;
											system("PAUSE");
											system("CLS");
											break;
										}
									}
								}
								break;
							case 3:                 //Travel Permit Application Menu
								int permitapp_menu, confirm;
								
								cout<<endl<<"\t*************************************************************"<<endl<<endl
								<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl
								<<"\t\t\tTravel Permit Application"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl
								<<"\t\t\t 1 - Apply for Travel Permit"<<endl
								<<"\t\t\t 2 - Back"<<endl
								<<"\t\t\t Choose: ";
								cin>>permitapp_menu;
								system("CLS");
									
									switch(permitapp_menu)
									{
										case 1:                    
											if((regPD == 1)&&(AnswerQ = 1)){  //If traveler has registered their personal details and answered the health questionnaire
												PA[num].ApplyPermit();                   //Apply for Travel Permit
												system("CLS");
												PA[num].trvID = trv.Name;            //assign Name and Covid Result to Personal Details Class
												PA[num].trvCovidResult = trv.CovidResult; 
												cout<<endl<<"\t*************************************************************"<<endl<<endl
												<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
												<<"\t*************************************************************"<<endl<<endl
												<<"\t\t\tTravel Permit Application"<<endl<<endl
												<<"\t*************************************************************"<<endl<<endl;
												cout<<"\t\tYour Traveling Details have been recorded!"<<endl<<endl<<endl;
												cout<<"\t\t Travel Permit Application ID #"<<PA[num].getpermitID()<<endl<<endl;
												PA[num].DisplayApp();              //Display Personal Details
												
												cout<<endl<<endl<<endl<<"\t\t Your Permit Application is complete!"<<endl
													<<"\t\t Do you confirm to save and send it for evaluation?"<<endl
													<<"\t\t 1 - Yes"<<endl
													<<"\t\t 2 - No"<<endl
													<<"\t\t Choose: ";
												cin>>confirm;
												system("CLS");
												
												if(confirm == 1){      //If Traveler chooses to confirm      
													num++;           //increase number of Permit Application 
													PA[num].permitID++;           //Increase Permit Application No.
													
													cout<<endl<<"\t*************************************************************"<<endl<<endl
				                    				<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
				                    				<<"\t*************************************************************"<<endl<<endl
			                    					<<"\t\t\t\t Travel Permit Application"<<endl<<endl
			                    					<<"\t*************************************************************"<<endl<<endl;
													cout<<"\t Your Permit Application have been sent for evaluation!"<<endl<<endl;
													system("PAUSE");
													system("CLS");
												}
												else if(confirm==2){         //If traveler chooses not to confirm
													system("CLS");
													cout<<endl<<"\t*************************************************************"<<endl<<endl
							                    	<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
							                    	<<"\t*************************************************************"<<endl<<endl
						                    		<<"\t\t\t\t Travel Permit Application"<<endl<<endl
						                    		<<"\t*************************************************************"<<endl<<endl;
													cout<<"\t\t Your Permit Application is not saved. "<<endl;
													PA[num] = PermitApplication();                //reset to initial set value based on constructor
													system("PAUSE");
													system("CLS");
												}
												else{
													system("CLS");          //An invalid choice will result in not confirming the application
													cout<<endl<<"\t*************************************************************"<<endl<<endl
								                    <<"\t\t Interstate Travel Permit Application System"<<endl<<endl
								                    <<"\t*************************************************************"<<endl<<endl
							                       	<<"\t\t\t\t Travel Permit Application"<<endl<<endl
							                    	<<"\t*************************************************************"<<endl<<endl;
													cout<<"\t\t Invalid Choice. Your Permit Application is not saved."<<endl;
													PA[num] = PermitApplication();    
													system("PAUSE");
													system("CLS");           
												}
											}
											else
											{     //error message, require traveler to register personal details and answer health questionnaire before applying for permit
												system("CLS");
												cout<<endl<<"\t*************************************************************"<<endl<<endl
								                <<"\t\t Interstate Travel Permit Application System"<<endl<<endl
								                <<"\t*************************************************************"<<endl<<endl
							                	<<"\t\t\t\t Travel Permit Application"<<endl<<endl
							                	<<"\t*************************************************************"<<endl<<endl;
												cout<<" Before Applying for the Travel Permit, please first:"<<endl
													<<" 1. Register your Personal Details"<<endl
													<<" 2. Answer the Covid-19 Health Questionnaire"<<endl<<endl;
													system("PAUSE");
													system("CLS");
											}
											break;
										
										case 2:
										{
											system("CLS");
											break;
									    }
											
										default: 
										{                         //error message
											cout<<endl<<"\t*************************************************************"<<endl<<endl
								            <<"\t\t Interstate Travel Permit Application System"<<endl<<endl
								            <<"\t*************************************************************"<<endl<<endl
							                <<"\t\t\t\Error Message!"<<endl<<endl
							                <<"\t*************************************************************"<<endl<<endl;
											cout<<endl<<endl<<"\t\t\tInvalid selection! Please try again."<<endl<<endl;
											system("PAUSE");
											system("CLS");
											break;
								    	}
									}	
								break;
							case 4:
								int viewapp_menu;              //Travel Permit Application Menu
									cout<<endl<<"\t*************************************************************"<<endl<<endl
									<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
								    <<"\t*************************************************************"<<endl<<endl
							       	<<"\t\t\t\t Travel Permit Application"<<endl<<endl
							        <<"\t*************************************************************"<<endl<<endl
										<<"\t\t\t 1 - View Applications Made"<<endl
										<<"\t\t\t 2 - Cancel Application"<<endl
										<<"\t\t\t 3 - Back"<<endl
										<<"\t\t\t Enter your selection: ";
									cin>>viewapp_menu;
									system("CLS");
									
									switch(viewapp_menu)
									{
										case 1:          //View All the Applications made by the Traveler
									        cout<<endl<<"\t*************************************************************"<<endl<<endl
								            <<"\t\t Interstate Travel Permit Application System"<<endl<<endl
								            <<"\t*************************************************************"<<endl<<endl
							                <<"\t\t\t\tList of Applications Made"<<endl<<endl
							                <<"\t*************************************************************"<<endl<<endl;
											
											
											if(num==0){
													
													cout<<endl<<"\t\t\t There are no Applications."<<endl<<endl;
													
											}
											else{
												for(i=0; i<num; i++){               //Display all applications made by travelers
													cout<<"\t\t _____Travel Permit Application ID #"<<PA[i].getpermitID()<<"_____"<<endl<<endl;
													trv.getPersonal();           //display Personal Details
													PA[i].DisplayApp();           //display Permit Application Details (Travel Details)
													cout<<"\t\t Self-Assessed Health Status: "<<PA[i].getCovidResult();     //display self-assessment result
													cout<<endl<<"\t\t Application Status: "<<PA[i].trvAppStatus<<endl<<endl; //display application status
													
												}
											system("PAUSE");
											system("CLS");
											}
											
											break;
										
										case 2:
											int appnum;          //Cancel Application Menu
											cout<<endl<<endl<<"\t\t ----Cancel Application----"<<endl<<endl;
											for(i=0; i<num; i++){
												
												cout<<"Application Number: "<<i+1;       //Display All Applications made by travelers
													cout<<"\t\t _____Travel Permit Application ID #"<<PA[i].getpermitID()<<"_____"<<endl<<endl;
													trv.getPersonal();
													PA[i].DisplayApp();
													cout<<"\t\t Self-Assessed Health Status: "<<PA[i].getCovidResult();
													cout<<endl<<"\t\t Application Status: "<<PA[i].trvAppStatus<<endl<<endl;
													
												}
											cout<<"\t\t Choose the Application Number you want to cancel: ";  //Choose a number to cancel
											cin>>appnum;
											
											PA[appnum-1].trvAppStatus = "Cancelled";     //set Application status as 'Cancelled'     
											break;                                         
										
										case 3:
											system("CLS");
											break;
											
										default: cout<<endl<<endl<<"\t\t\tInvalid choice! Please try again."<<endl;
									};
								break;
							case 5:
							{
								system("CLS");
								trv.logout();           //log out 
								break;
							}
							default: 
							{                          //error message
								system("CLS");
								cout<<endl<<"\t*************************************************************"<<endl<<endl
				    			<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl
								<<"\t\t\tError Message!"<<endl<<endl
								<<"\t*************************************************************"<<endl<<endl;
								cout<<"\t\tInvalid number of selection!!Please try again."<<endl<<endl;
								system("PAUSE");
								system("CLS");	
								break;	
							}	
						}
					}
				}
					else
					{                            //error message
					cout<<endl<<"\t*************************************************************"<<endl<<endl
					<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl
					<<"\t\t\t\t Error Message!"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl;
					cout<<"\t\t\t Username or Password is incorrect"<<endl<<endl;
					system("PAUSE");
					system("CLS");
					}
						break;
				}
			case 3:                //Disaster Control Officer Login
				{
					cout<<endl<<"\t*************************************************************"<<endl<<endl
					<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl
					<<"\t\t\tDisaster Control Officer"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl;
					officer.setlogin();
					
					if((officer.username == officer.getloginID())&&(officer.pass == officer.getpassword()))      //if username and password entered matches
					{                                                                                               //the pre-set username and password
					     system("CLS");                                      
						cout<<endl<<"\t*************************************************************"<<endl<<endl			//then user will be able to log in
						<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
						<<"\t*************************************************************"<<endl<<endl
						<<"\t\t\tDisaster Control Officer"<<endl<<endl
						<<"\t*************************************************************"<<endl<<endl;
						cout<<"\t\tYou have successfully logged in!\n\t";
			    		system("PAUSE");
			    		system("CLS");
			    	
			    	
			    	while(off_menu!=3)
						{                                //Disaster Control Officer Menu
					     	system("CLS");                                      
							cout<<endl<<"\t*************************************************************"<<endl<<endl			
							<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
							<<"\t*************************************************************"<<endl<<endl
							<<"\t\t\tDisaster Control Officer"<<endl<<endl
							<<"\t*************************************************************"<<endl<<endl
							<<"\t\t\t1 - View List of Travel Permit Applications"<<endl
							<<"\t\t\t2 - Evaluate Applications"<<endl
							<<"\t\t\t3 - Log Out"<<endl<<endl
							<<"\t\t\tEnter your selection: ";
							
							cin>>stat_menu;
							system("PAUSE");
							system("CLS");
							
							switch(stat_menu)
							{
								case 1:
								{                  //
				    			    system("CLS");                                      
									cout<<endl<<"\t*************************************************************"<<endl<<endl			
									<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl
									<<"\t\t\tDisaster Control Officer"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl
									<<"\t\tTravel Permit Applications List:\n";
								    
								    if(num==0){
										cout<<endl<<"\t\t\t There are no Applications."<<endl<<endl;		
									}
									else{
										for(i=0; i<num; i++){
											cout<<"\t\t Travel Permit Application ID #"<<PA[i].getpermitID()<<endl<<endl;
											trv.getPersonal();
											PA[i].DisplayApp();
											cout<<"\t\t Self-Assessed Health Status: "<<PA[i].getCovidResult();
											cout<<endl<<"\t\t Application Status: "<<PA[i].trvAppStatus<<endl<<endl;	
												}
										}
									
								    break;
								}
								case 2:
								{
									int evaluate;
									
				   				    system("CLS");                                      
									cout<<endl<<"\t*************************************************************"<<endl<<endl			
									<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl
									<<"\t\t\tDisaster Control Officer"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl;
									cout<<"\t\tEvaluate Applications\n"<<endl<<endl;
									
									cout<<"\t\t 1 - Approve Application"<<endl
										<<"\t\t 2 - Reject Application"<<endl
										<<"\t\t 3 - Back"<<endl
										<<"\t\t Choose: ";
									cin>>evaluate;
									system("CLS");
									
									switch(evaluate){
										case 1:
											int approve;
											
											if(num==0){
												system("CLS");                                      
												cout<<endl<<"\t*************************************************************"<<endl<<endl			
												<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
												<<"\t*************************************************************"<<endl<<endl
												<<"\t\t\tDisaster Control Officer"<<endl<<endl
												<<"\t*************************************************************"<<endl<<endl;
												cout<<endl<<"\t\t\t There are no Applications."<<endl<<endl;
														
											}
												
											for(i=0; i<num; i++){
												system("CLS");                                      
												cout<<endl<<"\t*************************************************************"<<endl<<endl			
												<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
												<<"\t*************************************************************"<<endl<<endl
												<<"\t\t\tDisaster Control Officer"<<endl<<endl
												<<"\t*************************************************************"<<endl;
												cout<<"Application Number: "<<i+1;
													cout<<"\t\t __Travel Permit Application ID #"<<PA[i].getpermitID()<<"__"<<endl<<endl;
													trv.getPersonal();
													PA[i].DisplayApp();
													cout<<"\t\t Self-Assessed Health Status: "<<PA[i].getCovidResult();
													cout<<endl<<"\t\t Application Status: "<<PA[i].trvAppStatus<<endl<<endl;
													
												}
											cout<<"\t\t Choose the Application Number you want to approve: ";
											cin>>approve;
											system("PAUSE");
											system("CLS");
											
											PA[approve-1].trvAppStatus = "Approved";
												system("CLS");                                      
												cout<<endl<<"\t*************************************************************"<<endl<<endl			
												<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
												<<"\t*************************************************************"<<endl<<endl
												<<"\t\t\tMessage"<<endl<<endl
												<<"\t*************************************************************"<<endl<<endl;
											cout <<endl<<endl<<" Application Successfully Approved!"<<endl;
											break;
											
										case 2:
											int reject;
											
											if(num==0){
												system("CLS");                                      
												cout<<endl<<"\t*************************************************************"<<endl<<endl		
												<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
												<<"\t*************************************************************"<<endl<<endl
												<<"\t\t\tDisaster Control Officer"<<endl<<endl
												<<"\t*************************************************************"<<endl<<endl;
												cout<<endl<<"\t\t\t There are no Applications."<<endl<<endl;
											    system("PAUSE");
												system("CLS");		
											}
											
											for(i=0; i<num; i++){
												
												system("CLS");                                      
												cout<<endl<<"\t*************************************************************"<<endl<<endl			
												<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
												<<"\t*************************************************************"<<endl<<endl
												<<"\t\t\tEvaluate Application"<<endl<<endl
												<<"\t*************************************************************"<<endl<<endl;
												cout<<"Application Number: "<<i+1<<endl<<endl;
													cout<<"\t\t __Travel Permit Application ID #"<<PA[i].getpermitID()<<"__"<<endl<<endl;
													trv.getPersonal();
													PA[i].DisplayApp();
													cout<<"\t\t Self-Assessed Health Status: "<<PA[i].getCovidResult();
													cout<<endl<<"\t\t Application Status: "<<PA[i].trvAppStatus<<endl<<endl;
													
												}
											cout<<"\t\t Choose the Application Number you want to reject: ";
											cin>>reject;
											system("PAUSE");
											system("CLS");
											
											PA[approve-1].trvAppStatus = "Rejected";
											("CLS");                                      
											cout<<endl<<"\t*************************************************************"<<endl<<endl		
											<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
											<<"\t*************************************************************"<<endl<<endl
											<<"\t\t\tMessage"<<endl<<endl
											<<"\t*************************************************************"<<endl<<endl;
											cout <<endl<<endl<<" Application Successfully Rejected!"<<endl;
											
											break;
											
										case 3:
											system("CLS");
											break;
									}
								
									break;
								}
								case 3:
								{           //Disaster Control officer Log Out
				     				system("CLS");                                      
									cout<<endl<<"\t*************************************************************"<<endl<<endl			
									<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl
									<<"\t\t\tDisaster Control Officer"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl;
									cout<<"\t\t\tLogging out..."<<endl<<endl;
									system("PAUSE");
									system("CLS");
									break;
								}
								default:
								{                      //error message
									system("CLS");                                      
									cout<<endl<<"\t*************************************************************"<<endl<<endl			
									<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl
									<<"\t\t\tError Message!"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl;
									cout<<"\t\t\tInvalid number of selection!Please Try Again.";
									system("PAUSE");
									system("CLS");
									break;
								}
							}
						}
			    	}
				break;
				}
					
			case 4:                                //Station Login
				{
					cout<<endl<<"\t*************************************************************"<<endl<<endl
					<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl
					<<"\t\t\t\t Station Login"<<endl<<endl
 					<<"\t*************************************************************"<<endl<<endl;
					station.setlogin();
					
					if((station.username == station.getloginID())&&(station.pass == station.getpassword()))
					{
						cout<<endl<<"\t*************************************************************"<<endl<<endl
						<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
						<<"\t*************************************************************"<<endl<<endl
						<<"\t\t\t\t Message!"<<endl<<endl
						<<"\t*************************************************************"<<endl<<endl;
						cout<<"\t\tYou have successfully logged in!\n\t";
			    		system("PAUSE");
			    		system("CLS");
			    		
			    		while(stat_menu!=3)
						{                          //Station Menu
							cout<<endl<<"\t*************************************************************"<<endl<<endl
				    		<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
							<<"\t*************************************************************"<<endl<<endl
							<<"\t\t\t\t Station"<<endl<<endl
							<<"\t*************************************************************"<<endl<<endl
							<<"\t\t\t1 - View Notification"<<endl
							<<"\t\t\t2 - Log Out"<<endl<<endl
							<<"\t\t\tEnter your selection: ";
							
							cin>>stat_menu;
							
							switch(stat_menu)
							{
								case 1:
								{                             //View Notification Menu
									system("CLS");
									cout<<endl<<"\t*************************************************************"<<endl<<endl
				    				<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl
									<<"\t\t\t\t Station"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl;
									cout<<"\t\t\t View Notification\n"<<endl;
									if(num==0){
										cout<<endl<<"\t\t\t There are no Applications."<<endl<<endl;
										system("PAUSE");
										system("CLS");
									}
									else station.getNotif();     //display notification message
									
									break;
								}
								case 2:
								{                                 //Station Log out
									system("CLS");
									cout<<endl<<"\t*************************************************************"<<endl<<endl
				    				<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl
									<<"\t\t\t\t Station"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl;
									cout<<"\t\t\tLogging out..."<<endl<<endl;
									system("PAUSE");
									system("CLS");
									break;	
								}
								default:
								{                               //error message
									cout<<endl<<"\t*************************************************************"<<endl<<endl
				    				<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl
									<<"\t\t\t\t Error Message!"<<endl<<endl
									<<"\t*************************************************************"<<endl<<endl;
									cout<<"\t\t\tInvalid number of selection!!";
									system("PAUSE");
									system("CLS");
									break;
									
								}
							}
						}					
					}
					else
					{                             //error message
						cout<<endl<<"\t*************************************************************"<<endl<<endl
				    	<<"\t\t Interstate Travel Permit Application System"<<endl<<endl
						<<"\t*************************************************************"<<endl<<endl
						<<"\t\t\t\t Error Message!"<<endl<<endl
						<<"\t*************************************************************"<<endl<<endl;
						cout<<"\t\t\t Username or Password is incorrect"<<endl<<endl;
						system("PAUSE");
						system("CLS");	
					}					
					break;
				}
			default:
				{
					system("CLS");                          //error message
					cout<<endl<<"\t*************************************************************"<<endl<<endl
				    <<"\t\t Interstate Travel Permit Application System"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl
					<<"\t\t\t\t Error Message!"<<endl<<endl
					<<"\t*************************************************************"<<endl<<endl;
					cout<<"\t\tInvalid number of selection!!Please try again."<<endl<<endl;
					
					break;	
					system("PAUSE");
					system("CLS");
				}		
		}
   }

	return 0;
}
