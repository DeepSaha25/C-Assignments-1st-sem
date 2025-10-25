// Assignment 2: Problem 14
// Write a C program to calculate no of days, months and years from the total number of days.
// ASSUMPTION: 1 year = 365 days, 1 month = 30 days (for simplicity in this calculation)

#include <stdio.h>

int main() {
    int total_days, years, months, days_remaining;

    printf("Enter the total number of days: ");
    scanf("%d", &total_days);

    if (total_days < 0) {
        printf("Please enter a non-negative number of days.\n");
        return 1;
    }

    // 1. Calculate Years
    years = total_days / 365;
    days_remaining = total_days % 365; // Remaining days after removing full years

    // 2. Calculate Months
    months = days_remaining / 30;
    days_remaining = days_remaining % 30; // Remaining days after removing full months

    // 3. The final remaining value is the Days
    int final_days = days_remaining;

    printf("\nTotal Days: %d\n", total_days);
    printf("Converted to: %d Years, %d Months, and %d Days.\n", years, months, final_days);

    return 0;
}
