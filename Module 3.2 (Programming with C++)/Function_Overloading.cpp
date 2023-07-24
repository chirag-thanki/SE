#include<iostream>
using namespace std;
/*What is Function Overloading - where two or more functions 
can have the same name but different parameters.*/
void calc(int a1, int a2)
{
	cout<<"Addition: "<<a1+a2<<endl;
}

void calc(int s3,int s4, int s5)
{
	cout<<"Subtraction: "<<s3-s4-s5<<endl;
}

void calc(float m6, int m7)
{
	cout<<"Multiplication: "<<m6*m7<<endl;
}

void calc(double d8, int d9)
{
	cout<<"Division: "<<d8/d9<<endl;
}
main()
{
	//Here, same function name[calc()], but different datatype & parameters
	calc(5, 2);
	calc(7, 4, 8);
	calc(3.0,4);
	calc(40.0, 5.0);
	
}
