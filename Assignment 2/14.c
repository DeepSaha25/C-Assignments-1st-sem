// Assignment 2: Problem 14
// Write a C program to calculate no of days, months and years from the total number of days.

#include <stdio.h>

int main() {
    int total_days, years, months, days_remaining;

    printf("Enter the total number of days: ");
    scanf("%d", &total_days);

    if (total_days < 0) {
        printf("Please enter a non-negative number of days.\n");
        return 1;
    }

    years = total_days / 365;
    days_remaining = total_days % 365;

    months = days_remaining / 30;
    days_remaining = days_remaining % 30;

    int final_days = days_remaining;

    printf("\nTotal Days: %d\n", total_days);
    printf("Converted to: %d Years, %d Months, and %d Days.\n", years, months, final_days);

    return 0;
}