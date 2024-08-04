#include <stdio.h>
#include <math.h> 
void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);
void modulus(int a, int b);
void average(int a, int b);
void power(int a, int b);

int main() {
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter your option (1 - addition, 2 - subtraction, 3 - multiplication, 4 - division, 5 - modulus, 6 - average, 7 - power): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        case 5:
            modulus(num1, num2);
            break;
        case 6:
            average(num1, num2);
            break;
        case 7:
            power(num1, num2);
            break;
        default:
            printf("Invalid option!\n");
            break;
    }

    return 0;
}

void add(int a, int b) {
    printf("Sum = %d\n", a + b);
}

void subtract(int a, int b) {
    printf("Difference = %d\n", a - b);
}

void multiply(int a, int b) {
    printf("Product = %d\n", a * b);
}

void divide(int a, int b) {
    if (b != 0) {
        printf("Quotient = %.2f\n", (float)a / b);
    } else {
        printf("Division by zero is not allowed!\n");
    }
}

void modulus(int a, int b) {
    if (b != 0) {
        printf("Modulus = %d\n", a % b);
    } else {
        printf("Division by zero is not allowed!\n");
    }
}

void average(int a, int b) {
    printf("Average = %.2f\n", (a + b) / 2.0);
}

void power(int a, int b) {
    printf("Power = %.2f\n", pow(a, b));
}

