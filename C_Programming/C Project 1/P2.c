#include <stdio.h>

int main() {
    // Declare variables to store base and height
    float base, height;

    // Get input for base and height from the user
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate the area of the triangle
    float area = (base * height) / 2;

    // Print the result
    printf("The area of the triangle with base %.2f and height %.2f is: %.2f\n", base, height, area);

    return 0;
}
