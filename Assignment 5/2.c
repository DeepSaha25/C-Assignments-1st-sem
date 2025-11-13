//2. Write a C program to find square of a number using function.
#include <stdio.h>
int sqr(int a){
    return a*a;
}
void main(){
    int n,s;
printf("Enter number to get square ");
scanf("%d",&n);
s=sqr(n);
printf("The square of the number is %d \n",s);

}