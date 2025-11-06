// Assignment 2: Problem 7
// Write a C program to check the greatest among 3 numbers using conditional operator.

#include <stdio.h>

int main() {
    int a, b, c, greatest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The greatest number among %d, %d, and %d is: %d\n", a, b, c, greatest);

    return 0;
}