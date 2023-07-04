//WAP to Find out length of string without using inbuilt function
#include<stdio.h>
main()
{
	char a[100];
	printf("Enter the string:");
	scanf("%s",&a);
	
	int count=0;
	while(a[count]!=0)
	{
		count++;
	}
	printf("Length of string is: %d", count);
}
