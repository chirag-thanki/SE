#include <iostream>
using namespace std;

class person
{
	public:
		void name()
		{
			string name;
			cout<<"Enter your Name: ";
			getline(cin, name);
			cout<<"Name: "<<name<<endl;
		}
		
		void age()
		{
			int age;
			cout<<"Enter your Age: ";
			cin>>age;
			cout<<"Age: "<<age<<endl;
		}
};

class student : public person
{
	public:
		void percentage()
		{
			int i, marks;
			float pr=0;
			for (i=1; i<=5; i++)
			{
				cout<<"Enter Subject "<<i<<" marks: "<<endl;
				cin>>marks;
			}
			cout<<"Total Marks: "<<marks<<endl;
			pr=marks/5;
			cout<<"Percentage: "<<pr<<" \%"<<endl;
		}
		
};

class teacher : public person
{
	public:
		void salary()
		{
			float sal;
			cout<<"Enter your Salary: ";
			cin>>sal;
			cout<<"Salary: "<<sal<<endl;
		}
};

int main()
{
	teacher t;
	t.name();
	t.age();
	student s;
	s.percentage();
	t.name();
	t.age();
	t.salary();
	
	return 0;
}
