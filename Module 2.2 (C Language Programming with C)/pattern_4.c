#include<stdio.h>
main()
{
	int row, col;
//	int n=65;
	for(row=1; row<=5; row++)
	{
		for (col=1; col<=row; col++)
		{
			if (row%2==0)
			{
				printf("0"); //To print 0 for odd number
			}
			else
			{
				printf("1"); //To printf 1 for even number
			}
			
		}
		printf("\n");
	}
}
