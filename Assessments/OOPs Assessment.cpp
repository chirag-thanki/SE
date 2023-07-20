// C++ program ATM
#include <iostream>
#include <string.h>
#include <ctime> //Library for time
using namespace std;
class Bank 
{
	public :
	string name;
	long long acnumber;
	char type[10];
	long long amount = 0;
	long long tot = 0;
	
	// Function to input user-data.
	void setvalue()
	{
		cout << "\tEnter name: ";
		cin.ignore();

		// To use space in string
		getline(cin, name);

		cout << "\tEnter Account number: ";
		cin >> acnumber;
		cout << "\tEnter Account type: ";
		cin >> type;
		cout << "\tEnter Balance: ";
		cin >> tot;
	}

	// Function to display the required data
	void showdata()
	{
		cout << "\tName:" << name << endl;
		cout << "\tAccount No:" << acnumber << endl;
		cout << "\tAccount type:" << type << endl;
		cout << "\tBalance:" << tot << endl;
	}

	// Function to deposit the amount in ATM
	void deposit()
	{
		cout << "\n\tEnter amount to be Deposited:";
		cin >> amount;
	}

	// Function to show the balance amount
	void showbal()
	{
		tot = tot + amount;
		cout << "\n\tTotal balance is: " << tot;
	}

	// Function to withdraw the amount in ATM
	void withdrawl()
	{
		int a, avai_balance;
		cout << "\tEnter amount to withdraw: ";
		cin >> a;
		avai_balance = tot - a;
		cout << "\tAvailable Balance is: " << avai_balance;
	}
};

//main code
int main()
{
	Bank b; //here, Bank(class) & b(object)

	int choice;

	while (1) 
	{
		cout <<"\t\t\t\nWELCOME TO ATM\n"<<endl;
	// Declaring argument for time()
    time_t tt;
  
    // Declaring variable to store return value of
    // localtime()
    struct tm* ti;
  
    // Applying time()
    time(&tt);
  
    // Using localtime()
    ti = localtime(&tt);
  
    cout << "Current Date: "<< asctime(ti);
		cout<<"---------------------------------------------------"<<endl;
		cout << "\t1. Enter name, Account Number, Account type\n";
		cout << "\t2. Balance Enquiry\n";
		cout << "\t3. Deposit Money\n";
		cout << "\t4. Show Total balance\n";
		cout << "\t5. Withdraw Money\n";
		cout << "\t6. Cancel\n";
		cout << "Enter Your Choice: ";
		cin >> choice;

		switch (choice) 
		{
		case 1:
			b.setvalue();
			break;
		case 2:
			b.showdata();
			break;
		case 3:
			b.deposit();
			break;
		case 4:
			b.showbal();
			break;
		case 5:
			b.withdrawl();
			break;
		case 6:
			exit(1);
			break;
		default:
			cout << "\nInvalid choice\n";
		}
	}
}

