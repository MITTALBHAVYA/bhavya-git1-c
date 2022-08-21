#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
/*  Write a program to convert binary number in to decimal number. */
int bintodeci(int num)
{
    int a=0;
    int n=0;
    int k;
    int i;
    for(i=num;i>0;i=i/10)
    {
        k=i%10;
        a=a+k*(pow(2,n));
        n++;
    }
    return a;
}
int main()
{
    int n1;
    printf("ENTER BINARY DIGIT HERE\n");
    scanf("%d",&n1);
    printf("%d",bintodeci(n1));
    return 0;
}