#include <stdio.h>

int main() {
    char character;

    // Get input character from the user
    printf("Enter a character: ");
    scanf("%c", &character);

    // Print the ASCII value of the character
    printf("ASCII value of %c is %d\n", character, character);

    return 0;
}
