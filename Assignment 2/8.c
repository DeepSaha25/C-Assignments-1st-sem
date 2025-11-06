// Assignment 2: Problem 8
// Write a C program to check a year is leap year or not.

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a LEAP YEAR.\n", year);
    } else {
        printf("%d is NOT a leap year.\n", year);
    }

    return 0;
}