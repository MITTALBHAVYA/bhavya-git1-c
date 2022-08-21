#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
/*  Write a program to convert binary number in to decimal number. */
int main()
{
    int a=0;
    int n=0;
    int k;
    int i;
    int num;
    printf("enter number here\n");
    scanf("%d",&num);
    for(i=num;i>0;i=i/10)
    {
        k=i%10;
        a=a+k*(pow(2,n));
        n++;
    }
    printf("%d",a);
    return 0;
}