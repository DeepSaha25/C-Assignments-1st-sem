// 8. Write a C program to add all even numbers in a given range.

#include <stdio.h>
void main(){
    int i,n ,s;
    printf("enter no of numbers to find sum of:");
    scanf("%d",&n);
    i=0;
    s=0;
    while(i<=n){
        if(i%2==0){
      s=s+i;  
        }
        i++;
    }
    printf("%d \n",s);
}