// 11. Write a C program to find the reverse of a given number.
#include <stdio.h>
void main(){
    int n,r;
    printf("Enter number to reverse and print:");
    scanf("%d",&n);
    
    while(n!=0){
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
}