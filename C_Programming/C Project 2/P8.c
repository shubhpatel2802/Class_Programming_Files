#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Get input for three numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Compare and print the largest number using nested if-else
    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("%d is the largest.\n", num1);
        } else {
            printf("%d is the largest.\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("%d is the largest.\n", num2);
        } else {
            printf("%d is the largest.\n", num3);
        }
    }

    return 0;
}
