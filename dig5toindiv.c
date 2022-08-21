/* Write a program to receive a five-digit no and display as like 24689:
2
4
6
8
9   */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
    int n,i;
    int n2[6];
    printf("ENTER 5 DIGIT NUMBER HERE\n");
    scanf("%d",&n);
    for(i=0;i<=4;i++)
    {
        n2[i]=n%10;
        n=n/10;
    }
    for(i=4;i>=0;i--)
    {
        printf("%d\n",n2[i]);
    }
    getch();
}