//WAP Find out length of string without using inbuilt function
#include<stdio.h>
struct employee
{
	int num;
	char name[14];
	char address[6];
	int age;
};
main()
{
	struct employee p;
	
	printf("Enter the no:");
	scanf("%d",&p.num);
	printf("%d",p.num);
	
	printf("\nEnter the name :");
	scanf("%s",&p.name);
	printf("%s",p.name);
	
	printf("\nEnter the address :");
	scanf("%s",&p.address);
	printf("%s",p.address);
	
	printf("\nEnter the age:");
	scanf("%d",&p.age);
	printf("%d",p.age);
}
