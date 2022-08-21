#include<stdio.h>
#include<conio.h>
#include<math.h>
/*wap of defined taylor series......*/
void main()
{
    double n,x,i,a,sum,pro,b,c;
    printf("ENTER THE VALUE OF N\n");
    scanf("%lf",&n);
    printf("ENTER THE VALUE OF X\n");
    scanf("%lf",&x);
    a=-x;sum=1;pro=1;
    
    for(i=1;i<=n;i++)
    {
        pro=pro*i;
        b=pow(a,i);
        c=b/pro;
        sum=sum+c;
    }
    printf("this is your required sum %lf",sum);
    getch();

}