// 4. Write a C program to search for a given element in a user given array and display its position.

#include <stdio.h>
void main(){
    int a[10],n,i,s;
    printf("Enter the no of elements in array");
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        printf("Enter value for a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search");
    scanf("%d",&s);
    for(i = 0; i < n; i++) {   
        if(a[i] == s) {
            printf("Yes, the element %d is available.\n", s);
            printf("The position of %d is: %d\n", s, i);
            break;
        }
    }

    if(i == n) {
        printf("Element %d is not found in the array.\n", s);
    }

}