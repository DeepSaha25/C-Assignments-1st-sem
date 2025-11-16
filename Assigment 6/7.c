// 7. Write a C program to reverse a user given array.
#include <stdio.h>
void main(){
    int i,a[10],n;
    printf("Enter the no of elements in array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter value for a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("The reverse of array is:");
    for(i=n-1;i>=0;i--){
    printf("%d",a[i]);
    } 
    printf("\n");
}