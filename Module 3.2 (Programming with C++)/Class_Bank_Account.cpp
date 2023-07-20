#include <iostream>
#include <string>
using namespace std;

class Bank_Account
{
public:
    int acnum;
    string name;
    string actype;
    int amount=0;
    int deposit, wdl;

    void input()
    {
        cout << "Name of Depositor: " << endl;
        getline(cin, name); 

        cout << "Account Number: " << endl;
        cin >> acnum;

        cin.ignore();

        cout << "Type of Account: " << endl;
        getline(cin, actype);
    }

    void display()
    {
        cout << "\n\tYour Name: "<<name<< endl;
        cout << "\tYour Account Number: " << acnum << endl;
        cout << "\tAccount Type: " << actype << endl;
        cout << "\tCurrent Balance: " << amount << endl;
    }
    
    void depo()
    {
    	cout<<"Enter the amount to be deposited: "<<endl;
    	cin>>deposit;
    	amount+=deposit;
	}
	
	void withdraw()
	{
		cout<<"\nEnter withdrawl amount:"<<endl;
		cin>>wdl;
		amount-=wdl;
	}
};

int main()
{
    Bank_Account b;
    b.input();
    b.depo();
    b.display();
    b.withdraw();
    b.display();
}

