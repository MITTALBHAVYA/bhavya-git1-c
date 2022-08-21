/*Write a program to print area of rectangle using function & return its value
to main function.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int arearec(int a,int b)
{
    int area=a*b;
    return area;
}
void main()
{
    int l,b,area;
    printf("enter length\n");
    scanf("%d",&l);
    printf("enter breadth\n");
    scanf("%d",&b);
    area=arearec(l,b);
    printf("area of rectangle is %d",area);
    getch();
}