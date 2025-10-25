// Assignment 2: Problem 6
// Write a C program to check the greatest among 3 numbers.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("%d is the greatest number.\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the greatest number.\n", b);
    } else {
        printf("%d is the greatest number.\n", c);
    }

    return 0;
}
