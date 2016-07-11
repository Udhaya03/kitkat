#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],sum=0,i;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}
printf("Sum = %d",sum);
getch();
}