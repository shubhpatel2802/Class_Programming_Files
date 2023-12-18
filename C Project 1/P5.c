#include <stdio.h>

int main() {
    float basicSalary, allowances, deductions, grossSalary;

    // Get input for basic salary, allowances, and deductions from the user
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter the allowances: ");
    scanf("%f", &allowances);

    printf("Enter the deductions: ");
    scanf("%f", &deductions);

    // Calculate gross salary
    grossSalary = basicSalary + allowances - deductions;

    // Print the result
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}
