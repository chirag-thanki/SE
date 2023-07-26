#include<iostream>
using namespace std;

//Concatenate two strings using operator overloading...

class strings
{
	public :
		string str;
		strings operator+(strings s2)
		{
			strings result;
				result.str = str + s2.str;
				return result;
		}
};

int main()
{
	strings s1, s2, result;
			cout<<"Enter String-1: "<<endl;
			getline(cin, s1.str);
			cout<<"Enter String-2: "<<endl;
			getline(cin, s2.str);
			
	result = s1 + s2;
	cout<<"Result is: "<<endl;
	cout<<result.str<<endl;
}
