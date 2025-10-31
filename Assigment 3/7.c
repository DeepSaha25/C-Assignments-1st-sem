//7.Write a C program to print all numbers in a given range which are divisible by 3 or 5 using do-while loop

#include <stdio.h>

void main(){
    int start, end;
    printf("Enter the start and end range:");
    scanf("%d %d", &start, &end);
    int i= start;
    do{
        if(i%3==0 || i%5==0)
        printf("%d \n",i);
        i++;
    }
    while(i<=end);
   
    
}
