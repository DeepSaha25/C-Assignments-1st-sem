#include <stdio.h>
int main(){
    int n,i,a[10],s;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the data in the array:");
    for(i=0;i<n;i++){
        printf("Enter the data for a[%d]",i);
        scanf("%d",&a[i]);
    }
    s=0;
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    printf("%d",s);

}