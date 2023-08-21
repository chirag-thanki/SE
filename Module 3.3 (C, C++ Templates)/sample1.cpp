#include <stdio.h>
//function declaration
int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
//float mydiv(float a, int b); 

/* Error in float div() function, why can't floating values are giving error in float*/
/* Ans to above error: float return is not working in C/CPP*/

//main function
int main()
{
	printf("Addition: %d\n", add(5, 3));
	printf("Subtraction: %d\n", sub(7,9));
	printf("Multiplication: %d\n", mult(8,4));
//	printf("Division: %f\n", mydiv(47,5));
	
}

//function definition
int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mult(int a, int b)
{
	return a*b;
}

//float mydiv(float a, int b)
//{
//	return a/b;
//}
