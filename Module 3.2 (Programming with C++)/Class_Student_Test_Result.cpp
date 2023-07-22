#include <iostream>
using namespace std;

class students
{
	public:
		int rollno;
		void roll()
		{
//			int rollno; datatype should never declare within function. It should be declare in the class.
			cout<<"Enter your Roll no.: ";
			cin>>rollno;
		}
};

class test
{
	public:
		int marks1, marks2;
		void subjects()
		{
			cout<<"Enter subject 1 marks: "<<endl;
			cin>>marks1;
			cout<<"Enter subject 2 marks: "<<endl;
			cin>>marks2;
		}
		
};

class result: public students, public test
{
	public:
		void display()
		{
			int tmarks=0;
			tmarks=marks1+marks2;
			cout<<"Roll No.: "<<rollno<<endl;
			cout<<"Subject-1 marks: "<<marks1<<endl<<"Subject-2 marks: "<<marks2<<endl;	
			cout<<"Total Marks: "<<tmarks<<endl;
		}
};

int main()
{
	result r;
	r.roll();
	r.subjects();
	r.display();
}



