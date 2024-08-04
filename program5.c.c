#include <stdio.h>
int main() {
    int mark1, mark2, mark3;
    float average;
    printf("Enter the marks for subject 1: ");
    scanf("%d", &mark1);
    printf("Enter the marks for subject 2: ");
    scanf("%d", &mark2);
    printf("Enter the marks for subject 3: ");
    scanf("%d", &mark3);
    average = (mark1 + mark2 + mark3) / 3.0;
    if (average >= 90) {
        printf("The grade is A\n");
    } else if (average >= 80) {
        printf("The grade is B\n");
    } else if (average >= 70) {
        printf("The grade is C\n");
    } else if (average >= 60) {
        printf("The grade is D\n");
    } else if (average >= 50) {
        printf("The grade is E\n");
    } else {
        printf("The grade is F\n");
    }

    return 0;
}

