#include <stdio.h>
#include <ctype.h>

int main() {
    char fullName[100];

    // Get the full name as input from the user
    printf("Enter a person's full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Convert the first letter of each word to uppercase and print the abbreviation
    printf("Abbreviated form: ");
    for (int i = 0; fullName[i] != '\0'; i++) {
        // If the current character is the first character or follows a space, make it uppercase
        if (i == 0 || fullName[i - 1] == ' ') {
            putchar(toupper(fullName[i]));
        }
    }

    return 0;
}
