#include <stdio.h>
int main(){
  int n,i=1;
printf("Enter the value of n:");
scanf("%d", &n);
printf("The first %d natural numbers are :\n",n);
while(i<=n){
printf("%d \n",i);
i++;
}
return 0;
}

