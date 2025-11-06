#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 0;

    printf("Enter the value of X: ");
    scanf("%f", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (i % 2 == 0)
            sum += pow(x, i);  // even power: positive term
        else
            sum -= pow(x, i);  // odd power: negative term
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
