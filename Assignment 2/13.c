// Assignment 2: Problem 13
// Write a C program to convert the temperature from Celsius to Fahrenheit and vice versa.

#include <stdio.h>

void celsiusToFahrenheit() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    // Formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);
}

void fahrenheitToCelsius() {
    float celsius, fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    // Formula: C = (F - 32) * 5/9
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);
}

int main() {
    int choice;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            celsiusToFahrenheit();
            break;
        case 2:
            fahrenheitToCelsius();
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
