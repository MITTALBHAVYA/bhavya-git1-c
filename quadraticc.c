#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{/*shri dharacharya ji , man with all parabolic arrows, with 
determinant arrows*/
    double a,b,c,sol,sol1,sol2,D,det;
    printf("enter the coefficient of x^2  ");
    scanf("%lf",&a);
    printf("enter the coefficient of x  ");
    scanf("%lf",&b);
    printf("enter the constant  ");
    scanf("%lf",&c);
    det=(b*b-4*a*c);
    printf("det is %lf",det);
    if(det>=0)
    {
    D=sqrt(det);
    if(a==0)
    {
        sol=-c/b;
        printf("it is a linear equation with root =%lf",sol);
    }
    else
    {
        sol1=(D-b)/2*a;
        sol2=-(D+b)/2*a;
        printf("solutions for this eq are =%lf %lf",sol1,sol2);

    }
    }
    else
    {
        printf("their is no real roots of this equation");
    }
    getch();
}
