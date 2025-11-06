// 15. Write a C program to find a number is palindrome or not.
#include <stdio.h>
void main(){
    int c,n,s,x;
    printf("Enter number to check Plaindrome Number:-");
    scanf("%d",&n);
    c=n;
    x=0;
    while(n!=0){
        s=n%10;
       x= x*10+s;
        n=n/10;
    }
    if(x==c){
        printf("%d is a palindrome number",x);
    }
    else{
        printf("%d is not a palindrome number",x);
    }  
}