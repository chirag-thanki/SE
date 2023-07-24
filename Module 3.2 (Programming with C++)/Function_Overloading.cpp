#include<iostream>
using namespace std;
/*What is Function Overloading - where two or more functions 
can have the same name but different parameters.*/

void calc(int a, int b)
{
cout << "Addition: " << (a + b);
}

void calc(double a, double b)
{
	cout << endl << "Multiplication: " << (a * b);
}

void calc(double a, int b)
{
	cout << endl << "Division: " << (a / b);
}

void calc(int a, double b)
{
    cout << endl << "Subtraction: " << (a-b);
}

// Driver code
int main()
{
	calc(10, 2);
	calc(3.0, 6.0);
	calc(4.0, 2);
	calc(5, 2.0);

	return 0;
}

