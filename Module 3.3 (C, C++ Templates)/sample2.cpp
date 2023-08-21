#include <stdio.h>

//function declaration
int add(int a, int b)
{
	return a+b;
}

int sub ( int a, int b)
{
	return a-b;
}

int mul (int a, int b)
{
	return a*b;
}

float mydiv (float a, float b)
{
	return a/b;
}

//main function
int main()
{
	printf("Addition: %d\n", add(5,4));
	printf("Subtraction: %d\n", sub(10,2));
	printf("Multiplication: %d\n", mul(5,4));
	printf("Division: %f", mydiv(9.2,2.4));
}
