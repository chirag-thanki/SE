#include <iostream>
#include <string>
using namespace std;
class cricketer
{
	public:
		string name;
		int age;
		
		void input()
		{
			cout<<"Enter Name:"<<endl;
			getline(cin, name);
			
			cout<<"Enter Age:"<<endl;
			cin>>age;
		}
};

class batsman : public cricketer
{
	public:
		int runs;
		int innings;
		float average;
		void datamember()
		{
			cout<<"Enter Total Runs:"<<endl;
			cin>>runs;
			cout<<"Enter Total Innings:"<<endl;
			cin>>innings;
		}
		
		void avg()
		{
			average=runs/innings;
		}
		
		
		
		
		void display()
		{
			string performance;
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Total Runs: "<<runs<<endl;
			cout<<"Average: "<<average<<endl;
			if (average>50)
			{
				cout<<"Good Performance"<<endl;
			}
			else
			{
				cout<<"Bad Performance"<<endl;
			}
		}
		void perf()
		{
			
			
		}
};

int main()
{
	batsman bat;
	bat.input();
	bat.datamember();
	bat.avg();
	bat.perf();
	bat.display();
}

