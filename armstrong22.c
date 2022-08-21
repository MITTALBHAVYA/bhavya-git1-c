#include<stdio.h>
#include<conio.h>
#include<math.h>
/*an armstrong number is a number in which sum of cube of every integer is 
the number itself*/
void main()
{
    int i,n,a,sum;
    printf("enter the number \n");
    scanf("%d",&n);
    sum=0;
    for(i=n;i!=0;i/=10)
    {
        a=i%10;
        sum=sum+a*a*a;
    }

    if(n==sum)
    {printf("this number is armstrong");}
    else
    {
        printf("this number is not armstrong");
    }
    getch();
}