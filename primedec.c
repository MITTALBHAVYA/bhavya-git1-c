#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
    int n,i,ifprime,a,b;
    printf("enter smaller number\n");
    scanf("%d",&a);
    printf("enter larger number\n");
    scanf("%d",&b);
    for(n=a;n<=b;n++)
    {
        for(i=2;i<n;i++)
        {
            ifprime=1;
            if(n%i==0)
            {
                ifprime=0;
                break;
            }
            
        }
        if(ifprime==1)
        {
            printf("\n%d",n);
        }
    }
}