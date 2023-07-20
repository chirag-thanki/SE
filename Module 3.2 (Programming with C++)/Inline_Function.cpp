//Program to find multiplication & cubic values using inline function
#include <iostream>
using namespace std;

//inline function to calculate multiplication of two numbers
inline int multiply(int x, int y)
{
	return x * y;
}

//inline function to calculate cube of a number
inline int cube(int c)
{
	return c*c*c;
}

int main()
{
	int num1, num2;
	cout<<"Enter two numbers:"<<endl;
	cin>>num1>>num2;
	int result = multiply(num1, num2);
	cout<<"Multiplication of "<<num1<<" and "<<num2<< " is: "<<result;
	
	int c;
	cout<<"\n\nEnter a number to find it's cube value: "<<endl;
	cin>>c;
	int result2 = cube(c);
	cout<<"Cube of "<<c<<" is: "<<result2;
	return 0;
}
