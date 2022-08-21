/*
Write a program to receive a five-digit no and display as like 24689:
2
4
6
8
9
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int num[100]; int n,i,a=0,k;
    printf("ENTER THE NUMBER HERE\n");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
      num[a]=i%10;
      a++;
    }
    for(k=a-1;k>=0;k--)
    {
        printf("\n%d",num[k]);
    }
    return 0;
}
