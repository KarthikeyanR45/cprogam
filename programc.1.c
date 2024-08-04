#include <stdio.h>
int main() {
    int num1, num2;
    int sum, difference, product, quotient, remainder;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    if (num2 != 0) {
        quotient = num1 / num2;
        remainder = num1 % num2;
        printf("Division: %d / %d = %d (Quotient), %d (Remainder)\n", num1, num2, quotient, remainder);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    printf("Addition: %d + %d = %d\n", num1, num2, sum);
    printf("Subtraction: %d - %d = %d\n", num1, num2, difference);
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);

    return 0;
}

