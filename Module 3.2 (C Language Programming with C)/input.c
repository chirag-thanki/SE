//How many even numbers
#include<stdio.h>
main()
{
	int i;
	int n;
	printf("Enter the Number :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		printf("%d\n",i);
		}
		
	}
}
