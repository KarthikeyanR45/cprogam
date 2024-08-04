#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the length of the first side: ");
    scanf("%f", &a);
    printf("Enter the length of the second side: ");
    scanf("%f", &b);
    printf("Enter the length of the third side: ");
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}



