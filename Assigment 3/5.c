//5. Write a C program to add first n numbers using while loop.

#include <stdio.h>
void main(){
    int i,n ,s;
    printf("enter no of numbers to find sum of:");
    scanf("%d",&n);
    i=0;
    s=0;
    while(i<=n){
      s=s+i;
        i++;
        
    }
    printf("%d \n",s);
}