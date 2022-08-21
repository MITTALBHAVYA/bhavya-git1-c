/*Write a program to find the value of y for a particular value of n. The a, x, b, n is input
 by user if n=1 y=ax%b if n=2 y=ax2+b2 if n=3 y=a-bx if n=4 y=a+x/b*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,a,x,b,y;
   printf("ENTER THE VALUE OF n\n");
   scanf("%d",&n);
   printf("ENTER THE VALUE OF a\n");
   scanf("%d",&a);
   printf("ENTER THE VALUE OF x\n");
   scanf("%d",&x);
   printf("ENTER THE VALUE OF b\n");
   scanf("%d",&b);    
   switch (n)
   {
   case 1:y=a*x%b;
       break;
   case 2:y=a*x*x+b*b;
       break;
   case 3:y=a-b*x;
       break;
   case 4:y=(a+x)/b;
   break;    
   
   default:printf("invalid value of n");
       break;
   }
   printf("y is equals to %d\n",y);
   return 0;
}
