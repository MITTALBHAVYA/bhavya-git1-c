/*armstrong number between 100 and 500*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
    int i,n,a,b,sum;
    
    /*printf("armstrong number between 100 to 500");*/
    for(i=100;i<=500;i++)
    {
        n=i;
        sum=0;
        for(a=i;a!=0;a/=10)
        {
            b=a%10;
            sum=sum+b*b*b;
        }
        if(n==sum)
        {
            printf("%d\n",sum);
        }
    }
    getch();
}