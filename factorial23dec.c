#include<stdio.h>
#include<conio.h>
#include<math.h>
/*factorial of a number refers to the product of number of from 1 upto that number*/
void main()
{
    int a,n,sum,i,pro;
    sum=0;pro=1;
    printf("enter the number of which you have to find factorial \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        pro=pro*i;
    }
    printf("the factorial of %d is %d",n,pro);
}