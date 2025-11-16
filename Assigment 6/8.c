// 8. Write a C program to calculate first 10 terms of Fibonacci series and store the result in array.
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, arr[100];

    printf("Number of elements in Fibonacci series: ");
    scanf("%d", &n);

    arr[0] = a;
    arr[1] = b;

    for (int j = 2; j < n; j++) {
        c = a + b;
        arr[j] = c;
        a = b;
        b = c;
    }

    printf("The Fibonacci series is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
