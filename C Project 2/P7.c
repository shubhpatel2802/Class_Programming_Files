#include <stdio.h>

int isValidDate(int day, int month, int year);

int main() {
    int day, month, year;

    // Get input for date, month, and year from the user
    printf("Enter the date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);

    // Check if the entered date is valid
    if (isValidDate(day, month, year)) {
        printf("The entered date %d/%d/%d is valid.\n", day, month, year);
    } else {
        printf("The entered date is not valid.\n");
    }

    return 0;
}

// Function to check if the date is valid
int isValidDate(int day, int month, int year) {
    // Check if the year is valid (considering a reasonable range, e.g., 1900 to 2100)
    if (year < 1900 || year > 2100) {
        return 0;  // Invalid year
    }

    // Check if the month is valid
    if (month < 1 || month > 12) {
        return 0;  // Invalid month
    }

    // Check if the day is valid for the given month
    if (day < 1 || day > 31) {
        return 0;  // Invalid day
    }

    // Check specific constraints for certain months
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return 0;  // Invalid day for April, June, September, and November
    } else if (month == 2) {
        // Check for February and leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (day > 29) {
                return 0;  // Invalid day for February in a leap year
            }
        } else {
            if (day > 28) {
                return 0;  // Invalid day for February in a non-leap year
            }
        }
    }

    return 1;  // The date is valid
}
