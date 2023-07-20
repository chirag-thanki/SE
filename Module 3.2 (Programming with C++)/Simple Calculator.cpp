//Simple Calculator using class

#include <iostream>
using namespace std;

class calculator
{
	public:
	int num1, num2, choice;
	void inputdata()
	{
		cout<<"Enter two numbers: "<<endl;
		cin>>num1>>num2;
		cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division"<<endl;
	
	}
	
	void outputdata()
	{
		cout<<"Enter your choice: "<<endl;
		cin>>choice;
		getchar();
		switch(choice)
		{
			case 1:
				cout<<"Addition: "<<num1+num2<<endl;
				break;
				
			case 2:
				cout<<"Subtraction: "<<num1-num2<<endl;
				break;
				
			case 3:
				cout<<"Multiplication: "<<num1*num2<<endl;
				break;
				
			case 4:
				cout<<"Division: "<<num1/num2<<endl;
			
		}
	}
};

int main()
{
	calculator calc;
	calc.inputdata();
	calc.outputdata();
}
