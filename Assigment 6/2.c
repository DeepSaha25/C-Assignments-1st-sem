// 2. Write a C program to calculate the sum and average of all elements in a 1D array.

#include <stdio.h>
void main(){
    int a[10],n,i,s;
    printf("Enter the no of elements in array ");
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        printf("Enter value for a[%d]",i);
        scanf("%d",&a[i]);
    }
    
    s=0;
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    printf("The Sum is %d\t",s);

    float avg = (float)s / n;
     printf("\nThe Average is %f",avg);    
    printf("\n");
}