/* Write a program to calculate the factorial for given number using function. */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int factorial(int num)
{
    int i,pro=1;
    if(num==0)
    {
        return pro;
    }
    else
    {
        for(i=1;i<=num;i++)
        {
            pro=pro*i;
        }
    }
    return pro;
}
int main()
{
    int num;
    printf("ENTER THE NUMBER \n :- ");
    scanf("%d",&num);
    printf("THE FACTORIAL OF %d is %d",num,factorial(num));
    return 0;
}