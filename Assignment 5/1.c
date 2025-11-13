//1. Write a C program to add between two numbers using function.
#include <stdio.h>
int sum(int a, int b);
void main()
{
    int x, y, z;
    printf("Enter first number");
    scanf("%d", &x);

    printf("Enter second number");
    scanf("%d", &y);

    z = sum(x, y);
    printf("The sum is %d \n", z);
}

int sum(int a, int b)
{
    return a + b;
};