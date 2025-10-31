#include <stdio.h>
int main(){
    int start, end, i;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Odd numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i%2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
=======
void main(){
    int i,n;
    printf("enter range till odd no to print\n");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        if(i%2!=0){
            printf("%d \n",i);
        }
        i++;
    }
}

