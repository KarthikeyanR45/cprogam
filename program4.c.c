#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter the length of the first side: ");
    scanf("%d", &a);
    printf("Enter the length of the second side: ");
    scanf("%d", &b);
    printf("Enter the length of the third side: ");
    scanf("%d", &c);
    printf("Enter the length of the fourth side: ");
    scanf("%d", &d);
    if ((a == b && c == d) || 
        (a == c && b == d) || 
        (a == d && b == c)) {
        printf("The sides can form a rectangle.\n");
    } else {
        printf("The sides cannot form a rectangle.\n");
    }

    return 0;
}

