/*this program is designed for calculating area of triangle , special thanks to 
HERONS formula for playing a wonderful role in this match*/ 
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
   /*here a,b,c are sides of triange and s stands for semi-perimeter of triangle*/
    double a,b,c,s,area;
    printf("enter sides of given triangle to calculate area  \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("this is area of required triangle =%lf",area);
    getch();
}