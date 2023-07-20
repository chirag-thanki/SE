//WAPn to find out max from given number(e.g. 1562, max =6)
#include <stdio.h>
main() {
    int number;
	int max = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0)
	 {
        int h = number % 10;
        if (h > max)
		{
            max = h;
        }
        number /= 10;
    }
    printf("Max= %d", max);
}

