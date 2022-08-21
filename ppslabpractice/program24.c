/* Write a program to convert binary number in to decimal number. */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int bintodeci(int num)
{
    int sum=0,x=0,k;
    for(int i=num;i!=0;i=i/10)
    {
        k=i%10;
        sum=sum+k*(pow(2,x));
        x++;
    }
    return sum;
}
int main()
{
    int num;
    printf("ENTER THE BINARY NUMBER HERE\n");
    scanf("%d",&num);
    printf("THE DECIMAL NUMBER IS %d",bintodeci(num));
    return 0;
}