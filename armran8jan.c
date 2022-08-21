#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
/*wap for printing armstrong number from 1 to 500*/
void main()
{
    int sum,i,n,a,arm;
    for(n=1;n<=500;n++)
    {
        sum=0;
        arm=n;
        for(i=n;i!=0;i=i/10)
        {
            a=i%10;
            sum=sum+(a*a*a);
        }
        if(sum==n)
        {
            printf("%d\n",n);
        }
    }
    getch();
}