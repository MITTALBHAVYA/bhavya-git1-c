/*Write a program to calculate the factorial for given number using function.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int fac(int n)
{ int pro=1;
    for(int i=1;i<=n;i++)
    {
        pro=pro*i;
    }
    return pro;
}
void main()
{
    int a,b;
    printf("ENTER THE NUMBER TO FIND FACTORIAL\n");
    scanf("%d",&a);
    b=fac(a);
    printf("FACTORIAL OF %d IS %d",a,b);
}