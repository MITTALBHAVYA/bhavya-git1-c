/* Write a program to find whether the number is Armstrong number. */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num,rem,a,sum=0;
    printf("ENTER THE NUMBER ::\n::");
    scanf("%d",&num);
    a=num;
    for(int b=num;b!=0;b=b/10)
    {
        rem=b%10;
        sum=sum+rem*rem*rem;
    }
    if(num==sum)
    {
        printf("GIVEN NUMBER IS ARMSTRONG");
    }
    else
    {
        printf("GIVEN NUMBER IS NOT ARMSTRONG");
    }
        return 0;
}