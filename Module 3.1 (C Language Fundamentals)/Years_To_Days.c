#include<stdio.h>
main()
{
	int years, days;
	printf("Enter No. of years:");
	scanf("%d", &years);
	printf("Years into days are: %d", years*365);
	
	printf("\n\nEnter number of days:");
	scanf("%d", &days);
	printf("Days into years are: %d", days/365);
}
