//Sum of Even numbers.....
#include<stdio.h>
main()
{
	int i;
	int sum=0;
	int n;
	printf("Enter a Number :");
	scanf("%d",&n);
	for (i=0;i<=n;i=i+2)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("\n\tsum of even numbers: %d",sum);
}
