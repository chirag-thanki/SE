//ASMD using switch case Menu Driven
#include<stdio.h>
main()
{
	int number1;
	printf("Enter Number 1 :");
	scanf("%d",&number1);
	
	int number2;
	printf("Enter Number 2 :");
	scanf("%d",&number2);
	
	printf("\t\t\tMENU:-\t\t\t");
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	
	int choice;
	printf("\n\n\tEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Addition of number1 & number2 is %d",number1+number2);
			break;
			
		case 2:
			printf("Subtraction of number1 & number2 is %d",number1-number2);
			break;
			
		case 3:
			printf("Multiplication of number1 & number2 is %d",number1*number2);
			break;
				
		case 4:
			printf("Division of number1 & number2 is %d",number1/number2);
			break;
			
		default:
			printf("invalid input");
	}
}
