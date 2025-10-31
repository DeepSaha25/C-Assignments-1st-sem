#include <stdio.h>

void main(){
    int n,i=1;
    printf("Enter n:");
    scanf("%d",&n);
    do{
        printf("%d \n",i);
        i++;
    }
    while(i<=n);
}
