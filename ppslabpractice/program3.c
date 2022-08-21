/*Write a program to determine the roots of quadratic equation.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    //a quadratic equation is in the form ax^2+bx+c=0
    double a,b,c,x1,x2;
    printf("ENTER THE COEFFICIENT OF X^2: ");
    scanf("%lf",&a);
    printf("\nENTER THE COEFFICIENT OF X: ");
    scanf("%lf",&b); 
    printf("\nENTER THE CONSTANT TERM:  ");
    scanf("%lf",&c);
    double det=b*b-4*a*c;
    if(det>=0)
    {
    x1=(-b+sqrt(b*b-4*a*c))/2*a;
    x2=(-b-sqrt(b*b-4*a*c))/2*a;
    printf("the zeros of given eq is %lf,%lf",x1,x2);
    }
    else
    {
        printf("real zeros are not possible");
    }
    return 0;


}