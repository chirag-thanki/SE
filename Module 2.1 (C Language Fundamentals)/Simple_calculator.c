#include <stdio.h>

int main() {
    int num1, num2;
    char ch;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &ch);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (ch) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        // case '-':
        //     printf("Result: %d\n", num1 - num2);
        //     break;
        // case '*':
        //     printf("Result: %d\n", num1 * num2);
        //     break;
        // case '/':
        //     if (num2 != 0) {
        //         printf("Result: %.2f\n", (float)num1 / num2);
        //     } else {
        //         printf("Error: Division by zero is not allowed.\n");
        //     }
        //     break;
        // default:
        //     printf("Error: Invalid operator.\n");
        //     break;
    }

    return 0;
}
