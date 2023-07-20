#include<stdio.h>
main()
{
	//Swapping of two numbers:
//a=b, b=a;
int a,b;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
//a=10, b=20
//after swapping it should be a=20, b=10
//a=a+b=10+20=30
//b=a-b=30-20=10
//a=a-b
a=a+b;
b=a-b;
a=a-b;
printf("After swapping, the values of a and b are:a=%d b=%d", a,b);
	
}
