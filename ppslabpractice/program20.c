/* Write a program to find the factorial of given number using recursion. */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int facrec(int num)
{
    if(num==1)
    {
        return 1;
    }
    return num*facrec(num-1);
}
int main()
{
    int n;
    printf("ENTER THE NUMBER \n");
    scanf("%d",&n);
    printf("FACTORIAL OF NUMBER %d is %d",n,facrec(n));
    return 0;
}