#include<stdio.h>
int main() {
    int number, fd, ld, sum;
    
    printf("Enter a number:");
    scanf("%d", &number);
    fd = number;
    while(fd >= 10)
	{
        fd /= 10;
    }
    ld = number % 10;
	 sum = fd+ld;
    printf("The sum of first and last digit is: %d\n", sum);    
}

