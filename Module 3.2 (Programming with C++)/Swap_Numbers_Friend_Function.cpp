#include<iostream>
using namespace std;

//Swaping two numbers using friend function

class numbers
{
	public :
		friend void swap();
		int x,y;
		
		void num()
		{
			
			cout<<"Enter First Number:";
			cin>>x;
			cout<<"Enter Second Number:";
			cin>>y;
		}
};

void swap()
{
	int x, y;
	numbers n;
	n.num();
	int i = n.x;
	int j = n.y;
	i=i+j;
	j=i-j;
	i=i-j;
	cout<<"\n\tBefore swaping Number-1 = "<<n.x<<" and Number-2 = "<<n.y<<endl;
	cout<<"\n\tAfter swaping Number-1 = "<<i<<" and Number-2 = "<<j<<endl;
}

int main()
{
	swap();
}
