//Write a program to print out all the Armstrong number between 100 and 500.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int i,j,rem,a;
   printf("the armstrong number between 100 and 500 are \n");
   for(i=100;i<=500;i++)
   {
       int sum=0;
       for(a=i;a>0;a=a/10)
       {
           rem=a%10;
           sum=sum+rem*rem*rem;
       }
       if(sum==i)
       {
           printf("%d\n",sum);
       }
   }
   return 0;
}