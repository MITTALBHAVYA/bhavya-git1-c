/* Write a program to find sum of Fibonacci series using function. */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int fibbo(int num)
{
    int sum,a=0,b=1;
    switch (num)
    {
    case 1:printf("0");
        break;
    case 2:printf("0 1 ");
        break;
    default:printf("0 1 ");
            for(int i=3;i<=num;i++)
            {
              sum=a+b;
              a=b;
              b=sum;
              printf("%d ",sum);
            }
        break;
    }
}
int main()
{
    int num;
    printf("ENTER THE NUMBER::\n");
    scanf("%d",&num);
    int a=fibbo(num);
    return 0;
}