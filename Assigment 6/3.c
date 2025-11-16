// 3. Write a C program to find the largest element in a user given 1D array.

#include <stdio.h>
void main(){
    int a[10],n,i,max;
    printf("Enter the no of elements in array");
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        printf("Enter value for a[%d]",i);
        scanf("%d",&a[i]);
    }
    max= a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("The greatest element is %d",max);

    printf("\n");
}