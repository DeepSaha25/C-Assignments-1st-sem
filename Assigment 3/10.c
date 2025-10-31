// 10. Write a C program to find a number is prime or not.

#include <stdio.h>
int main(){
    int i,x;
    printf("Enter number to check for prime: ");
    scanf("%d",&x);
    i=2;
    while(i<x){
        if(x%i==0){
        printf("%d is not a prime number",x);
        break;
        }
        i++;
    }
    if(i==x){
        printf("%d is a prime number",x);
    }
    

}