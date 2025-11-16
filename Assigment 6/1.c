// 1. Write a C program to print the elements of an 1D array (Data given by the user)
#include <stdio.h>
void main(){
    int a[10],n,i;
    printf("Enter the no of elements in array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter value for a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("The Array is \t");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}