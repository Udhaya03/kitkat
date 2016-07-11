#include<stdio.h>
#include<stdlib.h>
int main(){
int *numbers,i,n,sum=0;
printf("\nEnter the value of n");
scanf("%d",&n);
numbers = (int *)malloc(sizeof(int)*n);
for(i = 0; i < n; ++i){
printf("\nEnter the number");
scanf("%d",&numbers[i]);
sum += numbers[i];
}
printf("\nThe sum is %d",sum);
return 0;
}