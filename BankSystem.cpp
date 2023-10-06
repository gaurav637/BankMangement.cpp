
//Bank Management System in C++

#include<iostream>
#include<sstream>// sstringstream
#include<fstream>
#include<conio.h>
#include<string.h>

using namespace std;

class bank
{
 	private:
 		string name;
		string address;
		string email;
 		long long Mno,Ano;
 		long long acc_no;

 	public: 
		void create_acc();
		void updateinfo_acc();
		void deposite_acc();
		void withdraw_acc();	
		void acc_enquiry();
		void apply_for_cards();
		void Transfer_money();
		void delate_acc();
		void display_1();
		void exist();  
 
};

void bank :: create_acc()
{  

    cout<<"\nEnter the your email address::";
	cin>>email;
	cout<<"\nEnter your name::";
	cin>>name;
	cout<<"\nEnter the full adress::";
	cin>>address;
	cout<<"\nEnter the account no::";
	cin>>acc_no;
	cout<<"\nEnter the moblie no::";
	cin>>Mno;
	cout<<"\nEnter the adhar no::";
	cin>>Ano;
	cout<<"*+*+*+*+*+*+*+*++*+*+*++*+*+*+*+*+*++*+*+*+*+*+*+*++*+*+*+*+*+*++*+*+*+*+*+*+*+**++*+*+*+*++*++*+*+*+*+*\n\n";
    display_1();
	cout<<"\n\n";
}

void bank :: updateinfo_acc()
{
	int ch;
	do
	{
		cout<<"\n press 1. NAME";
		cout<<"\n press 2. Mobile";
	    cout<<"\n press 3. Address";
		cout<<"\n press 4. Email";
		cout<<"\n press 5. Exit";
		cout<<endl;
		cout<<"\nPlease enter key you want change or update->  ";
	    cin>>ch;
		switch(ch)
		{
	
			case 1:
				cout<<"\nReenter the user  name::";
				cin>>name;
				cout<<"\n";
				cout<<"Name has update::"<<name;
	            cout<<endl;
				cout<<"\n\n*-*-*-*-*--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*--*-*-*-*-*-*-*-*-*-*-**--*-*-*-*-*-*-*-*-*--*-*-*-*-*-**--\n\n";
				break;
			case 2:
				cout<<"\nReenter the moblie no::";
				cin>>Mno;
				cout<<"\n";
				cout<<"mobile no has update::"<<Mno;
				cout<<endl;
				cout<<"\n\n*################################################################################***\n\n";
				break;
			case 3:   
				cout<<"\nReenter the user adress::";
				cin>>address;
				cout<<"\n"; 
				cout<<"Address has update::"<<address; 
				cout<<endl;
				cout<<"\n\n*@*@*@*@*@*@*@@*@*@*@@@***@@@*@*@*@*@*@*@@**@*@*@*@*@*@*@*@*@*@*@*@*@*@*@@2@@*@@@**\n\n"; 
				break;	
			case 4:
				cout<<"\nReenter the user Email id::";
				cin>>email;
				cout<<"\n";
				cout<<"Email ddress has update::"<<email;
				cout<<endl;
				cout<<"\n\n*$*$$$*$*$*$$$*$*$*$*$*$*$$$*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&***&*\n\n";
				break;
			case 5:
				left;
				cout<<"\n\n*+*+*+*+*+*+**++*+*+*+*+*+*+*+**++*+*+*+*+*+*+*+*+**++*+*+*+*+**+**+*++*+*+*+*+*+*+*+*\n\n";
				break;
		    default:
			    cout<<"\n\n\nSORRY! --> INVALID KEY PLEASE CHECKED \n\n\n";

		}    

	}while(ch!=5);	 	
}

void bank ::display_1()    //DATA STORE SHOWS ON DIESPLAYy
{   
	 	 
	cout<<"\n\n";
	cout<<"\nCOUNGRATULATIONS YOUR ACCOUNT HAS CREATED ::";
	cout<<"\n\n";
	cout<<"\nUser full name::"<<name;
	cout<<"\n\n";
	cout<<"\nUser full adress::"<<address;
	cout<<"\n\n";
	cout<<"\nUser  accout no::"<<acc_no;
	cout<<"\n\n";
	cout<<"\nUser  mobile no::"<<Mno;
	cout<<"\n\n";
	cout<<"\nUser adhar no::"<<Ano;
	cout<<"\n\n";
	cout<<"\n\n**-*-*-*--*-**-*--*-*-*-*--*-*-*-*-*-*-*--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*--*-*-*-*-*-*--*-*-*-**--*-**-*-*-\n\n";
}

void bank :: deposite_acc()
{
	int temp;
	int acc_no;
	int amount;
	int predeposit=5000;
	 
	cout<<"        "<<" ___________________________________________"<<endl;
	cout<<"        "<<"|                                           |"<<endl;
	cout<<"        "<<"|--------> WELCOME TO DAVIET BANK <---------|"<<endl;
	cout<<"        "<<"|___________________________________________|"<<endl;
	cout<<endl<<endl<<endl;
	
	cout<<"\nEnter the account no::";
	cin>>acc_no;
	cout<<"\nPlease Enter the account no for confirm::";
	cin>>temp;
	if(temp==acc_no)
	{	
	 	cout<<"\nEnter the ammount you deposite::";
	 	cin>>amount;
	 	predeposit+=amount;
	 	cout<<"\n\nTotal amount::"<<predeposit<<endl;
	 	cout<<endl;
	 	cout<<"\n\n* + +*+*+*++*++*+*+*++*+*+*+*+*+*+*+*+*++*+*+*+*+*+*++*+*+*+*+*++*+*+*++*+*+*+*+*++*+*+*+*+*+*++*+*+*+*\n\n";

	}
	else 
	{
	 	cout<<"\n\nSORRY WRONG ACCOUNT NUMBER YOU ENTER ";
	 	cout<<"\n\n*$*$*$*4*$*4*$**$*$*$*$*4*$*4*$*$*$*$*$*4*$*$*4*$*$*$*$*$*$*$*$*$*4*$*$*$*$*$*$*$*4*4*$*4*4$*$*\n\n";
	}
	 
}

void bank :: withdraw_acc()
{
    int temp;
	int acc_no;
	int amount;
	int predeposit=5000; 
	cout<<"        "<<" ___________________________________________"<<endl;
	cout<<"        "<<"|                                           |"<<endl;
	cout<<"        "<<"|--------> WELCOME TO DAVIET BANK <---------|"<<endl;
	cout<<"        "<<"|___________________________________________|"<<endl;
	cout<<endl<<endl<<endl;
	
	cout<<"\nEnter the account no::";
	cin>>acc_no;
	cout<<"\nPlease Enter the account no for confirm::";
	cin>>temp;
	if(temp==acc_no)
	{	
	 	cout<<"\nEnter the ammount you withdraw::";
	 	cin>>amounts;
	 	predeposit= predeposit-amount;
	  	cout<<"\n\nTotal amount::"<<predeposit;
	  	cout<<endl; 
	 	cout<<"\n\n**+*+*++*+*+*++*+**++*+*++*+*+*+*++*+*+*+**+*++*+*+*+*+*+*+*+*++*+*+*+*+*+*+*+*+*+*+*+*+*+*+**+*\n\n";
 
	}
	else 
	{
	 	cout<<"\nSORRY WRONG ACCOUNT NUMBER YOU ENTER ";
	 	cout<<"\n\n**-*-*--*-*-*--*-*-*-*--*-*-*-*-*-*-*-*-*-*--*-*-*-*-*--*-*-*--*-*-*-**--*-*--*-*-*--**-*--**-*-*-**-\n\n";
	}
	 
}

void bank ::acc_enquiry()
{
	int acc_no;
	int temp;
	int predeposit=5000;
	int amount;
	cout<<"\n\nEnter the account no::";
	cin>>acc_no;
	cout<<"\n\nPlease Enter the account no for confirm::";
	cin>>temp;
	if(temp==acc_no)
	{
	 	cout<<"\n\nTotal amount::"<<predeposit;
		cout<<"\n\n";	 	 
    }
    else
    {
     	cout<<"Invalid account number";
	}
	
}

void bank::Transfer_money()
{
	int total_balance;
	int balance;
	int acc_no;
	int temp;
	cout<<"        "<<" ___________________________________________"<<endl;
	cout<<"        "<<"|                                           |"<<endl;
	cout<<"        "<<"|--------> WELCOME TO DAVIET BANK <---------|"<<endl;
	cout<<"        "<<"|___________________________________________|"<<endl;
	cout<<endl<<endl<<endl;

	cout<<"\n\nEnter the account no::";
	cin>>acc_no;
	cout<<"\n\nPlease Enter the account no for confirm::";
	cin>>temp;
	if(temp==acc_no)
	{
	 	cout<<"\n\nEnter the amount your transfer::";
	 	cin>>balance;
	    cout<<"\n\nEnte the total_balance  in your account::";
	 	cin>>total_balance;
	}	 
	if(balance<total_balance)
	{
	 	cout<<"\n\nAMOUNT SUCCESSfULLY TRASNFER !";
	 	cout<<"\n\n*3#*#*#*#*#*#*#*#*#*3*#*#*#*##*#*#*#*3*#*#*#*#*#*#*#3*#*#*#*3*#*#*3*#*#*3*3*#*#*3*#*#*#*#*3*#*#*3*#*#*3*33*\n\n";
	}
	else 
	{
	   cout<<"\nSORRY! TRANSFER FAILED ! Reason: Balance incomplete. ";
	   cout<<endl;
	   cout<<"\n\n**+*++++*+++++*+*++*+*+*+*++*+*+*+*+*++*+*+*+*++*+*+*+*++*+*+*+*++*+**+*+*++*+*+*+*+*+*+*+*\n\n";
	}	 	
}
	
void bank::apply_for_cards()
{
	
	int acc_no;
	int card;
	int ch;
	string name; 
    cout<<"Select card "<<endl;
	cout<<" press-> 1. Debit card"<<endl;
	cout<<" press-> 2. Credit card"<<endl;
    cin>>ch;
    switch(ch)
    {
     	
     	case 1:
     	    cout<<"\n\nEnter the account no::";
            cin>>acc_no;
            cout<<"\n\nEnter the user name::";
            cin>>name;
            cout<<"\n\nReuqest has sent!!";
            cout<<"\n\n****************************************************************** ** **************************************************\n\n";
            break;
    
        case 2:
        	cout<<"\nEnter the account no::";
            cin>>acc_no;
            cout<<"\n\nEnter the user name::";
            cin>>name;
            cout<<"\n\nReuqest has sent!!";
            cout<<"\n\n\n****************************************************************** ---------------------------------------------------\n\n";     
            break; 	
     	default:
     		cout<<"\ninvalid Key you enter plaese corrct key enter ";
     		cout<<"\n\n**************************** -------------------------------------------**************************************\n\n";

	}	
}

void bank::delate_acc()
{
	int acc_no;
	int temp;
	int ch;
	string name;
	char T;
	char R;
	cout<<"\n\n\nEnter the account no::";
	cin>>acc_no;
	cout<<"\n\nPlease enter the account no for confirmation::";
	cin>>temp;
	if(temp=acc_no)
	{  
	   cout<<"\n\n\nEnter the option ::"<<endl;;
	   cout<<"press-> 1. Temporary deactivate"<<endl;
	   cout<<"press-> 2. Remove account"<<endl;
	   cin>>ch;
	   switch(ch)
	   {
			case 1:
				cout<<"\n\n\npleae press T forTemporary deactivate::";
				cin>>T;
				cout<<"\n\n\nYOUR ACCOUNT HAS Temporary deactivate !";
				cout<<"\n\n***************************** --------------------------------------------*************************************\n\n";
				break;
			case 2:
				cout<<"\n\n\nplease  press R for Remove account::";
				cin>>R;
				cout<<"\n\n\nYOUR ACCOUNT HAS SUCCEFULLY REMOVE !";
				cout<<"\n\n************************** ++++++++++++++++++++++++++++++++++++++++++++++++++++***************************************\n\n";
				break;
			default:
			   cout<<"\n\n\nSORRY INVALID OPTION PRESS  ";
			   cout<<"\n\n\n********************** /////////////////////////////////////////////////////////////*******************************************\n\n";  	
	    }	
	}	
}

void bank ::exist()
{
	cout<<"\n----THANKS FOR VISTING DAVIET BANK-----!!!!!";
	cout<<"\n\n------------------------>>>>   PLEASE COME TO BACK <<<<<<<*******************************************************\n\n";
}

void showMenu()
{
    cout << "|*+*+*+*+*+*+* MENU *+*+*+*+*+*+**|" << endl;
    cout << "|Press--> 1. Check balance        |" << endl;
    cout << "|Press--> 2. Deposit              |" << endl;
    cout << "|Press--> 3. Withdraw             |" << endl;
    cout << "|press--> 4. Exit                 |" << endl;
    cout << "|*+*+*+*+**+*+*+*+*+**+*+*+*+*+*+*|" << endl;

}

main()
{ 
    string id1;
    string password1;
    string text;
    string word;
    string arr[2];
    string cp[2];
    string word1;
    string id,password0,name,old,email;
	int ascii = 178;
    int choice;
    char ch = ascii;
    
	
    cout<<"        "<<" ___________________________________________"<<endl;
	cout<<"        "<<"|                                           |"<<endl;
	cout<<"        "<<"|--------> WELCOME TO DAVIET BANK <---------|"<<endl;
	cout<<"        "<<"|___________________________________________|"<<endl;
	cout<<endl<<endl<<endl;
    bank b1;
    int i;
    do{

        cout<<"        "<<" _____________________________________________"<<endl;
		cout<<"        "<<"|------------_____ YOUR TASK____ -------------|"<<endl;
	    cout<<"        "<<"|                                             |"<<endl;
		cout<<"        "<<"|     Press -> 1. Bank Security               |"<<endl;
		cout<<"        "<<"|     Press -> 2. welcome-Create Account      |"<<endl;
		cout<<"        "<<"|     Press -> 4. Update                      |"<<endl;
		cout<<"        "<<"|     Press -> 5. Deposite                    |"<<endl;
		cout<<"        "<<"|     Press -> 6. Withdraw                    |"<<endl;
		cout<<"        "<<"|     Press -> 7. Account Enquiry             |"<<endl;
		cout<<"        "<<"|     Press -> 8. Transfer money              |"<<endl;
		cout<<"        "<<"|     Press -> 9. Apply for card              |"<<endl;
		cout<<"        "<<"|     Press -> 10. Display                    |"<<endl;
		cout<<"        "<<"|     Press -> 11. Delete Account             |"<<endl;
        cout<<"        "<<"|     Press -> 12. ATM                        |"<<endl;
		cout<<"        "<<"|     Press -> 13. Exit                       |"<<endl;
		cout<<"        "<<"|_____________________________________________|";
		cout<<endl<<endl<<endl;
		cout<<"\t\t\tENTER YOUR CHOICE->  ";
		cin>>i;
		cout<<endl;
	
        switch(i)
        {
            case 1:{
                cout<<"        "<<" ___________________________________________"<<endl;
                cout<<"        "<<"|                                           |"<<endl;
                cout<<"        "<<"|--------> BANK SECURITY SYSTEM <---------  |"<<endl;
                cout<<"        "<<"|___________________________________________|"<<endl;
                cout<<endl<<endl<<endl;
                cout<<endl<<" ";
				
				for(int i=1;i<=23;i++){
					cout<<ch;
				}
				cout<<"  Mini Project for Beginners  ";
				for(int i=1;i<=20;i++){
					cout<<ch;
				}

				cout<<endl<<endl<<ch<<ch<<" 1. REGISTER ACCOUNT:-";
				cout<<endl<<endl<<ch<<ch<<" 2. LOGIN ACCOUNT:-";
				cout<<endl<<endl<<ch<<ch<<" 3. FORGOT PASSWORD:-";
				cout<<endl<<endl<<ch<<ch<<" 4. EXIT:-";
				cout<<endl<<endl;
				for(int i=1;i<=75;i++){
					cout<<ch;
				}
				cout<<endl<<endl;
				cout<<ch<<" "<<"ENTER YOUR CHOICE:- ";
				cin>>choice;
			    }
			    cout<<endl<<endl;
				for(int i=1;i<=23;i++){
					cout<<ch;
				}
				cout<<"  Mini Project for Beginners  ";
				for(int i=1;i<=20;i++){
					cout<<ch;
				}	
				cout<<endl<<endl;
				switch (choice) {
					case 1: {
						cout << " _______________________________" << endl;
						cout << "|--------Registration-----------|" << endl;
						cout << "|_______________________________|" << endl;
                        cout<<endl<<endl;
						cout << "Enter User ID -> ";
						cin >> id;
						cout<<endl;
						cout << "Enter User Password -> ";
						cin >> password0;
                        cout<<endl;
                        cout<<"Enter your name -> ";
                        cin>>name;
                        cout<<endl;
                        cout<<"Enter user email -> ";
                        cin>>email;
						cout<<endl<<endl;

						ofstream of1("register.dat",ios::app);
						if (of1.is_open()) {
							of1 << "ID        " << id << endl;
							of1 << "Password  " << password0 << endl;
                            of1 << "name      " << name<<endl;
                            of1 << "email     " << email<<endl;
                            cout<<endl<<endl;
							cout << "Registration successful!" << endl;
						} 
						else {
							cout << "Failed " << endl;
						}
						break;
					}

					case 2: {
						int i = 0;
						cout << " _______________________________" << endl;
						cout << "|--------------Login------------|" << endl;
						cout << "|_______________________________|" << endl;
                        cout<<endl<<endl;

						ifstream of2("register.dat");
						string id1; 
						string password1;

						cout << "Enter User ID -> ";
						cin >> id1;
                        cout<<endl;
						cout << "Enter User Password -> ";
						cin >> password1;
                        cout<<endl<<endl;

						if (of2.is_open()) {
							bool found = false;
							while (getline(of2, text)) {
								stringstream iss(text);
								iss >> word1;
                               
								if (word1 == "ID") 
                                {
									iss >> arr[0];
                                   
								} 
                                else if (word1 == "Password") {
									iss >> arr[1];
								}
							}

							if (id1 == arr[0] && password1 == arr[1]) {
								found = true;
                                cout << " ___________________"<<endl;
								cout << "|Login successful!  |" << endl;
                                cout << " -------------------"<<endl;
                                cout<<endl<<endl;
								cout << "User Information:->>> " << endl<<endl;
								cout << "User ID       -> " << arr[0] << endl;
								cout << "User Password -> " << arr[1] << endl;
                                cout << "User name     -> " << name<<endl;
                                cout << "User Email    -> " << email<<endl;
							}

							if (!found) {
								cout << "Invalid User or Password!" << endl;
							}
						}
						else {
							cout << "Failed to open the 'register.dat' file" << endl;
						}
						break;
					}

					case 3: {
                        int i = 0;
                        cout << endl;
                        cout << " _______________________________" << endl;
                        cout << "|-------Change Password---------|" << endl;
                        cout << "|_______________________________|" << endl;

                        cout << endl << endl;

                        ifstream of0("register.dat");
                        cout << "Enter Old Password -> ";
                        cin >> old;

                        if (of0.is_open()) {
                            while (getline(of0, text)) {
                                stringstream iss(text);
                                iss >> word1;
                                if (word1 == "Password") {
                                    iss >> cp[1];
                                }
                                i++;
                            }
                            if (i >= 2) {
                                if (old == cp[1]) {
                                    cout << "Enter New Password -> ";
                                    cin >> cp[0];
                                    of0.close();  
                                    ofstream of0("register.dat");
                                    if (of0.is_open()) {
                                        of0 << "ID " <<id<< endl;
                                        of0 << "Password " << cp[0] << endl;
                                        cout << "Password successfully changed!" << endl;
                                        of0.close();  
                                    } else {
                                        cout << "Failed " << endl;
                                    }
                                } else {
                                    cout << "Old Password is incorrect!" << endl;
                                }
                            }
                        } else {
                            cout << "Failed to open the 'register.dat' file" << endl;
                        }
                        break;
                    }


					case 4: {
						cout << "Exit!" << endl;
						return 0;
					}

					default: {
						cout << "Invalid choice. Please try again." << endl;
						break;
					}
				}

            case 2:
                cout<<"        "<<" ___________________________________________"<<endl;
	            cout<<"        "<<"|                                           |"<<endl;
                cout<<"        "<<"|--------> WELCOME TO DAVIET BANK <---------|"<<endl;
                cout<<"        "<<"|___________________________________________|"<<endl;
                cout<<endl<<endl<<endl;        	 	
                   int ch;
                do
                {
		
                    cout<<"        "<<" ___________________________________________"<<endl;
                    cout<<"        "<<"|   press 1. Next--Create Bank account-->>  | "<<endl;
                    cout<<"        "<<"|                                           |"<<endl;
                    cout<<"        "<<"|   press 2. exit -->                       |"<<endl;
                    cout<<"        "<<"|___________________________________________|"<<endl;
                    cout<<endl;
                    cin>>ch;
                    switch(ch)
                    {
                        case 1:
                            left;
                            cout<<"\n*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*++**+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+\n\n";
                            break;
                        case 2:
                            exit(0);    
                        default:
                            cout<<"\n\n\nSORRY! --> INVALID KEY PLEASE CHECKED \n\n\n";

                    }    

                }while(ch!=1);
            case 3:
				b1.create_acc();
				break;	 
			case 4:
				b1.updateinfo_acc();
				break;
			case 5:
				b1.deposite_acc();
				break;
			case 6:
				b1.withdraw_acc();
				break;
			case 7:
				b1.acc_enquiry();   
				break;
			case 8:
				b1.Transfer_money();
				break;
			case 9:
				b1.apply_for_cards();
				break;
			case 10:
				b1.display_1();
				break;
	        case 11:
				b1.delate_acc();
				break;
            case 12:{
			    int option;
                double balanceA = 500;
                do
                {
					showMenu();
					cout<<endl<<endl;
					cout << "Please Enter your Choice-: ";
					cin >> option;
					//system("cls");
					switch (option)
					{
						case 1:
							cout << "Balance is: " << balanceA << endl;
							cout<<endl;
							break;
						case 2:
							cout << "Deposit amount: ";
							double D_A;
							cin >> D_A;
							balanceA += D_A;
							break;
						case 3:
							cout << "Withdraw amount:";
							double w_a;
							cin >> w_a;
							if (w_a <= balanceA)
							{
							   balanceA -= w_a;
							}
							else
							{
							   cout << "Not enough money" << endl;
							   break;
							}   
						default:
							cout<<"SORRY!  --> INVALID CHOICE "<<endl;    
					}
				}while (option != 4);
			}				
			case 13:
				b1.exist();
				break;
			default:
				printf("invalid key you are press!. press correct key");
				cout<<"\n\n*+*+*+*+*+*+*+*+*+*+*+*+**+*+*+*+*+*+*+*++*+*+*+*++*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+*+**++*+*+*+*+*+*+*+*+*+*\n\n";		
        }

    }while(i!=13);
}
