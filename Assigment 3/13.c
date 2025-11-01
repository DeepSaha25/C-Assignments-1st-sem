// 13. Write a C program to print all the Fibonacci series up to a given range.
#include <stdio.h>
void main(){
    int a,b,c,i,n;
    printf("Enter no of numbers to print in Fibonacci series:- ");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d \t %d",a,b);
    i=1;
    while (i<n-1)
    {
        c=a+b;
        printf("\t %d",c);
        a=b;
        b=c;
        i++;
    }
    
}