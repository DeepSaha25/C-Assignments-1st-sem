// Assignment 2: Problem 9
// Write a C program to check a person is adult or not.

#include <stdio.h>

int main() {
    int age;

    printf("Enter the person's age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("The person is an ADULT.\n");
    } else {
        printf("The person is a MINOR.\n");
    }

    return 0;
}