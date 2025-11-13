#include <stdio.h>
#include <math.h>
void main(){
    int i ,n,x;
    printf("Enter row limit:-");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        x=pow(11,i);
        printf("%d",x);
        printf("\n");
    }
}