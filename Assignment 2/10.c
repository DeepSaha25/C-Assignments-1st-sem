// Assignment 2: Problem 10
// Write a C program to calculate the electric bill amount based on consumed units.
// ASSUMED TARIFF CHART:
// 0 - 50 units: $0.50 per unit
// 51 - 150 units: $0.75 per unit
// 151 - 250 units: $1.20 per unit
// > 250 units: $1.50 per unit

#include <stdio.h>

int main() {
    float units, total_bill = 0.0;

    printf("Enter the total units consumed: ");
    scanf("%f", &units);

    if (units <= 0) {
        printf("Invalid units consumed. Bill amount is $0.00\n");
    } else if (units <= 50) {
        total_bill = units * 0.50;
    } else if (units <= 150) {
        // First 50 units @ 0.50, remaining units @ 0.75
        total_bill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        // First 50 @ 0.50, next 100 (150-50) @ 0.75, remaining @ 1.20
        total_bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        // First 50 @ 0.50, next 100 @ 0.75, next 100 @ 1.20, remaining @ 1.50
        total_bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    printf("Total units consumed: %.2f\n", units);
    printf("Calculated electric bill amount: $%.2f\n", total_bill);

    return 0;
}
