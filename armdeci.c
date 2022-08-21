#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
/*wap for printing armstrong number from n1 to n2*/
void main()
{
    int sum,i,n,a,arm,n1,n2;
    printf("enter smaller number n1\n");
    scanf("%d",&n1);
    printf("enter smaller number n2\n");
    scanf("%d",&n2);
    
    for(n=n1;n<=n2;n++)
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
}