//WAP to find max num from given array
#include<stdio.h>
main()
{
	int a[100];
	int i;
	int number;
	int max;
	printf("Enter the number :");
	scanf("%d",&number); 
	for(i=0;i<number;i++)
	{
		scanf("\n%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<number;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Max num of array: %d",max);
}
