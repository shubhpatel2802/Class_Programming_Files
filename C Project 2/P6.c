#include <stdio.h>

int main() {
    char character;

    // Get input for the character from the user
    printf("Enter a character: ");
    scanf(" %c", &character);  // Note the space before %c to consume any leading whitespace

    // Check if the character is a vowel
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        printf("%c is a vowel.\n", character);
    } else {
        printf("%c is not a vowel.\n", character);
    }

    return 0;
}
