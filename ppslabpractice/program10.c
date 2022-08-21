/* Write a program to find the sum of following series 1- X1/1!+X2/2! ................. Xn/n!*/
#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                   
#include<conio.h>
#include<math.h>
int main()
{
   double i,x,n,sum=1,pro=1,a,b;
   printf("enter the value of x");
   scanf("%lf",&a);
   printf("enter the value of n");
   scanf("%lf",&n);
   x=-a;
   for(i=1;i<=n;i++)
   {
     pro=pro*i;
     b=(pow(x,i))/pro;
     sum=sum+b;
   }
   printf("REQUIRED SUM OF SERIES IS %lf",sum);
   return 0;
   
}