//5. Write a C program to add first n numbers using while loop.

#include <stdio.h>
void main(){
    int i,n;
    printf("enter no of numbers to print:");
    scanf("%d",&n);
    i=0;
    while(i<=n){
      printf("%d \n",i);
        i++;
    }
}