#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
    int n1,n2,hcf,i,lcm;
    printf("ENTER THE TWO NUMBERS \n");
    scanf("%d,%d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if((n1%i==0)&&(n2%i==0))
        {
            hcf=i;
        }
    }
    printf("the H.C.F of given numbers is %d\n",hcf);
    lcm=(n1*n2)/hcf;
    printf("the LCM of given numbers is %d",lcm);
    getch();
}