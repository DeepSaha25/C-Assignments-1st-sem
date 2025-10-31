//7.Write a C program to print all numbers in a given range which are divisible by 3 or 5 using do-while

#include <stdio.h>
void main(){
    int i,n;
    printf("enter range of numbers to check and print whether divisible by 3 or 5 :");
    scanf("%d",&n);

    i=0;
    do{
        if(i%3==0 || i%5==0)
            printf("%d \n",i);
        i++;
    }
    while(i<=n);
}