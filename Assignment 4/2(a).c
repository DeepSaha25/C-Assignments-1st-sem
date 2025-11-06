// 2. Write a C program to print the following patterns in a given range.
// a) *
//    **
//    ***
//    ****
//    *****

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the row limit: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
