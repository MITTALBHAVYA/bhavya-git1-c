/*Write a program to generate sum of series 1!+2!+3!+*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int sum=0,pro=1,a,b,k,n,i;
    printf("enter the number upto which sum of factrorial is required\n::::::");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        pro=pro*i;
        sum=sum+pro;
    }
    printf("REQUIRED SUM OF SERIES IS \n:::::::::%d:::::::",sum);
    return 0;
}