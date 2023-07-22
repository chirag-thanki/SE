#include<iostream>

using namespace std;
class num
{
	int n1,n2,sum;
	public:
	
       void getsum(int x,int y)
		{
			n1=x;
			n2=y;
		 sum=x+y;
		 cout<<"ADDITION :"<<sum<<endl;
		}
		void getsub(int x,int y)
		{
		    n1=x;
			n2=y;
		  sum=x-y;
		 cout<<"SUBTRACTION :"<<sum<<endl;
		}
		void getmulti(int x,int y)
		{
			n1=x;
			n2=y;
		  sum=x*y;
		 cout<<"MULTIPLICATION :"<<sum<<endl;
		}
		void getdiv(int x,int y)
		{
			n1=x;
			n2=y;
		  sum=x/y;
		 cout<<"DIVISION :"<<sum<<endl;
		}
	
	
};

int main()
{
	int a,b;
	num obj;
	cout<<"Enter Any Two Value : "<<endl;
	cin>>a>>b;
    obj.getsum(a,b);
    obj.getsub(a,b);
    obj.getmulti(a,b);
    obj.getdiv(a,b);
   
	
	return 0;
}
