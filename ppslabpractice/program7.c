/*
Write a program to construct a Fibonacci series upto n terms.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum,n;
    printf("ENTER THE NUMBER OF TERMS TO PRINT: ");
    scanf("%d",&n);
    a=0;
    b=1;
    switch (n)
    {
    case 1:printf("0");
        break;
    case 2:printf("0 1 ");
        break;
    default:printf("0 1 ");
            for(int i=3;i<=n;i++)
            {
              sum=a+b;
              a=b;
              b=sum;
              printf("%d ",sum);
            }
        break;
    }
    return 0;
}