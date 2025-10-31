// 5. Write a C program to add first n numbers using while loop.

#include <stdio.h>
void main()
{
    int i, f, n;
    printf("enter number to find factorial:");
    scanf("%d", &n);
    f = 1;
    i = n;
    while (i > 0)
    {
        f = f * i;
        i--;
    }
    printf("\n%d\n", f);
}