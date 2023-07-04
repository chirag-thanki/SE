// WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	printf("Enter a string to check whether it is a palindrome or not?\n");
	gets(a);
	
	strcpy(b,a);
	strrev(b);
	
	if(strcmp(a,b)==0)
	printf("The string is a palidrome.\n");
	else
	printf("The string isn't a palidrome.\n");
}
