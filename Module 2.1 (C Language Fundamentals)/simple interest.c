#include<stdio.h>
main()
{
	float principle, rate, time;
	printf("Enter the principle:");
	scanf("%f",&principle);
	printf("Enter the rate:");
	scanf("%f",&rate);
	printf("Enter the time duration:");
	scanf("%f", &time);
	printf("The simple interest is:%f", (principle*rate*time)/100);
	
}
