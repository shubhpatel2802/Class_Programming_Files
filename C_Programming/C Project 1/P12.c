#include <stdio.h>

int main() {
    int number;

    // Get input for the number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Print the first three powers
    printf("First power (%d^1): %d\n", number, number);
    printf("Second power (%d^2): %d\n", number, number * number);
    printf("Third power (%d^3): %d\n", number, number * number * number);

    return 0;
}
