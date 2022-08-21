/* Write a program to convert decimal number in to binary number. */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int decitobin(int num)
{
    int j[100]; int i,x=0;
    for(i=0;num!=0;i++)
    {
        j[i]=num%2;
        num=num/2;
    }
    for(i;i>0;i--)
    {
        x=x*10+j[i-1];
    }
    return x;
}
int main()
{
    int num;
    printf("ENTER THE DECIMAL NUMBER \n");
    scanf("%d",&num);
    printf("BINARY FORM OF GIVEN %d IS %d",num,decitobin(num));
    return 0;
}