// Assignment 2: Problem 7
// Write a C program to check the greatest among 3 numbers using conditional operator.

#include <stdio.h>

int main() {
    int a, b, c, greatest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Conditional Operator (Ternary Operator): condition ? expression_if_true : expression_if_false
    // 1. Check if 'a' is greater than 'b'.
    // 2. If true, compare 'a' with 'c'. If 'a' > 'c', then 'a' is the greatest, else 'c' is.
    // 3. If false, compare 'b' with 'c'. If 'b' > 'c', then 'b' is the greatest, else 'c' is.
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The greatest number among %d, %d, and %d is: %d\n", a, b, c, greatest);

    return 0;
}
