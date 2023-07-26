//WAP to calculate the area of circle, rectangle and triangle using Function Overloading...
#include <iostream>
#define PI 3.14 //defining value of PI
using namespace std;

//function to find area of circle
void area (int r)
{
	cout<<"Enter radius of a circle: ";
	cin>>r;
	cout<<"Area of circle is: "<<PI*r*r<<endl;
}

//function to find area of rectangle
void area (int l, int b)
{
	cout<<"Enter length & breadth of a rectangle: ";
	cin>>l>>b;
	cout<<"Area of rectangle is: "<<l*b<<endl;
}

//function to find area of triangle
void area (int b, float h)
{
	cout<<"Enter base & height of a triangle: ";
	cin>>b>>h;
	cout<<"Area of triangle is: "<<(b*h)/2<<endl;
}

int main()
{
	int r, l, b; 
	float h;
	area(r);
	area(l,b);
	area(b,h);
}
