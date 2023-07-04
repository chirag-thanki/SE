#include<stdio.h>
main()
{
	int year;
	printf("Enter the year:");
	scanf("%d", &year);
	if (year%4==0)
	{
	printf("Leap Year.");
	}
	else
	{
		printf("Not a Leap Year.");
	}
	
}
