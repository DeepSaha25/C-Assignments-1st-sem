// 14. Write a C program to find a number is Armstrong or not.
#include <stdio.h>
#include <math.h>
void main(){
    int x,a,n,i,r,d,s,j;
    printf("Enter number to check no of digits:-");
    scanf("%d",&n);
    x=n;
    a=n;
    i=0;
    while(x!=0){
        x=x/10;
        i++;
    }

    s=0;
    while(a!=0){
        r=a%10;
       d = pow(r, i);
        s=s+d;
        a=a/10;
    
    }
    if(s==n){
        printf("%d is a Armstrong Number",n);
    }
    else{
        printf("%d is not a Armstrong Number",n);
    }
}