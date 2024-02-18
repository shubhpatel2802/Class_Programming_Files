#include <stdio.h>

int main() {
    char character;

    // Get input for the character from the user
    printf("Enter a character: ");
    scanf(" %c", &character);  // Note the space before %c to consume any leading whitespace

    // Check if the character is a vowel
    if ((character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') ||
        (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')) {
        printf("The character is a vowel.\n");
    } else {
        printf("The character is not a vowel.\n");
    }

    return 0;
}
