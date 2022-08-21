#include<stdio.h>
#include<conio.h>
#include<math.h>
/*wap to find the sum of the series of the factorial 1!+2!+3!...n!*/
void main()
{
    int a,n,sum,i,pro;
    sum=0;pro=1;
    printf("enter the number of upto which you have to find the sum of factorial \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        pro=pro*i;
        sum=sum+pro;
    }
    printf("your required sum of series is %d",sum);
}