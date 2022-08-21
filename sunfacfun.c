#include<stdio.h>
#include<conio.h>
#include<math.h>
/*wap to find the sum of the series of the factorial 1!+2!+3!...n!*/
int sumfac(int n)
{
    int a,sum,i,pro;
    sum=0;pro=1;
    for(i=1;i<=n;i++)
    {
        pro=pro*i;
        sum=sum+pro;
    }
    return sum;
}
void main()
{   
    int n1,add;
    printf("ENTER THE NUMBER UPTO WHICH NEED SUM ");
    scanf("%d",&n1);
    add=sumfac(n1);
    printf("%d",add);
}