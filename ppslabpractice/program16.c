/* Write a program to print area of rectangle using function & return its value to main function.  */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int area(int l,int b)
{
    return l*b;
}
int main()
{
    int l,b;
    printf("THE OF length THE RECTANGLE \n");
    scanf("%d",&l);
    printf("THE OF breadth THE RECTANGLE \n");
    scanf("%d",&b);
    printf("AREA OF GIVEN RECTANGLE \n%d",area(l,b));
    return 0;
}