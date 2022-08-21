#include<stdio.h>
#include<conio.h>
#include<math.h>
/*WAP to receive marks of physics, chemistry, & maths from user & check its eligibility for course if*/
void main()
{
    int n,y,a,x,b;
    printf("enter the value of n \n");
    scanf("%d",&n);
    printf("enter the value of x \n");
    scanf("%d",&x);
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b \n");
    scanf("%d",&b);
    if(n==1)
    {
        y=(a*x)%b;
    }
    else if(n==2)
    {
        y=a*x*x+b*b;
    }
    else if(n==3)
    {
        y=a-b*x;
    }
    else if(n==4)
    {
        y=a+x/b;
    }
    else
    {
        printf("value of n is invalid");
    }
    printf("value of y is equals to %d",y);
    getch();

} 