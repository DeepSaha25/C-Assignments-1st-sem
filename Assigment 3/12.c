// 12. Write a C program to add all the digits of a given number.

#include <stdio.h>
void main(){
    int n,r,s;
    printf("Enter number to print sum of its digits:");
    scanf("%d",&n);
    s=0;
    while(n!=0){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("%d\n",s);
}