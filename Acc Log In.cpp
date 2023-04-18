#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

class login{ // class

public: // public 
	void Login() { // Log in Code 
        int count;
        string user,pass,u,p;
        system("cls");
            cout << "\t\t\t\t +---------------------+\n";
	        cout << "\t\t\t\t |        Log In       |\n";
	        cout << "\t\t\t\t +---------------------+\n";
            cout << "\t\t please enter the following details"<<endl;
            cout << "\t\t\t +------------------------------+\n";
            cout << "\t\t USERNAME :";
             cin >> user;
            cout << "\t\t PASSWORD :";
             cin >> pass;
            cout << "\t\t\t +------------------------------+\n"; 
        
        ifstream input("database.txt");// database text 
        while(input>>u>>p) {
                if(u==user && p==pass) {
                    count=1;
                    system("cls");
                }
        }
        input.close();
        if(count==1) {
        	system("cls");
                cout << "\t\t\t Hello "<<user<<"\n Login successful\n";
                cout << endl;
		        cout << "\n";
		        cout << "\t\t\t To return to Choices, press ENTER . . .";
                cin.get();
                cin.get();
            system("cls");    
        }
        else {
        	system("cls");
                cout << "\n";
		        cout << "\t\t\t Login error! Please check your Username and Password and try again.\n";
		        cout << endl;
		        cout << "\n";
		        cout << "\t\t\t Press ENTER to continue . . .";
                 cin.get();
                 cin.get();  
            system("cls");
        }
    }
		void Register() {// Register Code 
	    string reguserID, regpassword, regid, regpass;
	        system("cls");
	            cout << "\t\t\t\t +---------------------+\n";
	      	    cout << "\t\t\t\t |       Register      |\n";
	      	    cout << "\t\t\t\t +---------------------+\n";
	            cout << "\t\t\t +------------------------------+\n";
	            cout << "\t\t\t Enter your Username: ";
	             cin >> reguserID;
	            cout << "\t\t\t Enter your Password: ";
	             cin >> regpassword;
	            cout << "\t\t\t +------------------------------+\n";
	             
	            ofstream f1("records.txt", ios::app);// database text 
	            
	            f1<<reguserID<<' '<<regpassword<<endl;
	            
	        system("cls");
	            cout << "\n";
	            cout << "\t\t\t Registered successfully!\n";
	            cout << endl;
	            cout << "\n";
	            cout << "\t\t\t To return to Choices, press ENTER . . .";
	             cin.get();
	             cin.get();
	        system("cls");
	    }
			void Forgot() {// Forgot Code 
			        int ch;
			        system("cls");
			        cout << "\t\t\t+--------------------------------------+\n";
			        cout << "\t\t\t|         Forgot your password?        |\n";
			        cout << "\t\t\t+--------------------------------------+\n";
			        cout << "\t\t\t+--------------------------------------+\n";
			        cout << "\t\t\t|   Forgotten ? We're here for help    |\n";
			        cout << "\t\t\t|   1.Search your id by username       |\n";
			        cout << "\t\t\t|   2.Search your id by password       |\n";
			        cout << "\t\t\t|   3.Main menu                        |\n";
			        cout << "\t\t\t+--------------------------------------+\n";
			        cout << "Enter your choice :";
			         cin >>ch;
			        switch(ch) {
			                case 1: {
			                        int count=0;
			                        string searchuser,su,sp;
			                        cout << "\t\t\t Enter your remembered username :";
			                         cin >> searchuser;
			                        
			                        ifstream searchu("database.txt");// database text 
			                        while(searchu>>su>>sp) {
			                                if(su==searchuser) {
			                                        count=1;
			                                }
			                        }
			                        searchu.close();
			                        if(count==1) {
			                                cout << "\t\t\t Your password is "<<sp;
			                                cin.get();
			                                cin.get();
			                                system("cls");    
			                        }
			                        else {
			                                cout << "\t\t\t Sorry. Your account is not found. \n";
			                                cout << "\n";
			                                cout << "\n";
			                                cout << "\t\t\t Press ENTER to continue . . .";
			                                cin.get();
			                                cin.get();
			                                system("cls");
			                        }
			                        break;
			                }
			                case 2: {
			                        int count=0;
			                        string searchpass,su2,sp2;
			                        cout << "\t\t\t Enter the remembered password :";
			                         cin >> searchpass;
			                        
			                        ifstream searchp("database.txt");// database text 
			                        while(searchp>>su2>>sp2) {
			                                if(sp2==searchpass) {
			                                        count=1;
			                                }       
			                        }
			                        searchp.close();
			                        if(count==1) {
			                        	system("cls");
			                                cout << "\t\t\t Your Password is  \n";
			                                cout << "\t\t\t Your Username is : "<<su2;
			                                cin.get();
			                                cin.get();
			                            system("cls");    
			                        }
			                        else {
			                        	    system("cls");
			                                   cout<<"\t\t\t Sorry, We cannot found your password \n";
			                                   cin.get();
			                                system("cls");
			                        }
			                        break;
			                }
			                case 3: {
			                	     cin.get();
			                         cin.get();
			                         system("cls");
			                }
			                default:
			                        cout << "\t\t\t Sorry, You entered wrong choice. Kindly try again"<<endl;
			                        Forgot();
			        }
			    }
					void Aboutus() {// About Us 
						system("cls");
						    cout << endl;
						    cout << "\t\t\t\t+--------------------------------------+\n"
						         << "\t\t\t\t|               About Us               |\n"
						         << "\t\t\t\t+--------------------------------------+\n" 
						         << "\t\t+----------------------------------------------------------------+\n"
						         << "\t\t|                           Devoloper                            |\n"
						         << "\t\t|                                                                |\n"
						         << "\t\t|                                                                |\n"                                                      
						         << "\t\t|                     Allen Jefferson C. Orcino                  |\n"
						         << "\t\t|                                                                |\n"
						         << "\t\t+----------------------------------------------------------------+\n" << endl;
						    cout << endl;
						      cin.get();
						      cout << " \t\t\t To return to Choices, press ENTER . . .";
					             cin.get();
					    system("cls");
					} 
					void Exit () {// Exit 
							            cout << endl;
							            cout << "\t\t\t\t thank you! for Login Page "; 
						             }
};
    
    int main (){ // Main 
	    login L;
	    here: 
		    int choice; 
	     	while (1){ 
	            cout << "\t\t\t+-------------------------------------+\n"
				     << "\t\t\t|             Log in Page             |\n" // Add Title of Finals Project 
				     << "\t\t\t+-------------------------------------+\n"
				     << "\n"
				     << "\t\t\t+-------------------------------------+\n"
	                 << "\t\t\t|               WELCOME               |\n"
	                 << "\t\t\t+-------------------------------------+\n"
	                 << "\t\t\t+-------------------------------------------+\n"
	                 << "\t\t\t|  Enter 1 to Register                      |\n"
	                 << "\t\t\t|  Enter 2 to Log in                        |\n"
	                 << "\t\t\t|  Enter 3 to Forgot Password or Username   |\n"
	                 << "\t\t\t|  Enter 4 to About Us                      |\n"
	                 << "\t\t\t|  Enter 5 to Exit                          |\n"
	                 << "\t\t\t+-------------------------------------------+\n\n"
	                 << "\t\t\t Enter your choice: ";
	             cin >> choice;
	            cout << endl;	 
		     // Choices to selection 	
		    switch (choice){
			
	         	case 1: 
		            L.Register();
	         	    break;
				case 2: 
				    L.Login();
					break;
				case 3:
					L.Forgot();
					break;
				case 4: 
				    L.Aboutus();
				    break;
			    case 5: 
			        L.Exit();
			        exit (1);  
		        default: 
	               	cout << "\t\t Choice not valid Plss try again. . . \n";
	               	cout << "\n";
		            cout << "\t\t Press ENTER . . . \n";	
					cout << endl;
					cout << endl; 
		            break; 
		    }   
	    }
	}
