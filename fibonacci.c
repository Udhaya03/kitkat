#include<stdio.h>
#include<conio.h>

int main()
{

     int k,n;
     int a=0,b=1,c;

     printf("Enter the range of the Fibonacci series: ");
     scanf("%d",&n);
     printf("Fibonacci Series: ");
     printf("%d ",0);
     while(n>1)
     {
         c = a + b;
         a = b; 
         b = c;
         printf("%ld ",c);
         n--;
     }
     getch();
}