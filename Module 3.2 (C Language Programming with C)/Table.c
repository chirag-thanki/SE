#include<stdio.h>
int main(){
	int num, i, result;
	printf("Enter any number for which you want a multiplicaton table of:");
	scanf("%d", &num);
	for (i=1; i<=10; i++)	{
		//result=num*i; Which can directly write into printf()....
		printf("%d x %d = %d\n", num, i, result, result=num*i);
	}
	return 0;
}
