#include <stdio.h>
void main() {
    int a[50], n, i, s, f = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &s);

    printf("\nPositions where %d is found:\n", s);

    for(i = 0; i < n; i++) {
        if(a[i] == s) {
            printf(" %d\n", i);   
            f++;                        
        }
    }

    if(f == 0) {
        printf("Element %d not found in the array.\n", s);
    } else {
        printf("\nFrequency of %d = %d\n", s, f);
    }

}