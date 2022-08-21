/* Write a program to convert decimal number in to binary number.  */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int decitobina(int num)
{
    int i,a,k;
    int l=0;
    int j[100];
    for(i=0;num!=0;i++)
    {
        j[i]=num%2;
        num=num/2;
    }
    a=i-1;
    for(k=a;k>=0;k--)
    {
        l=l*10+j[k];
    }
    return l;
}
int main()
{
    int n;
    printf("ENTER DECIMAL HERE\n");
    scanf("%d",&n);
    printf("BINARY FORM IS: %d",decitobina(n));
}