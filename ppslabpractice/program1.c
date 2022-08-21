//wap for area of triangle by HERON's formula.
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s;
    printf("ENTER THE SIDES OF TRIANGLES\n");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    s=(a+b+c)/2;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("AREA OF GIVEN TRIANGLE IS %lf",area);
    return 0;
}
