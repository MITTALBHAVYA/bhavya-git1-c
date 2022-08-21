#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
    int i,j,n,a;
    a=7;
    for(i=6;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            n=a-j;
            printf("%d ",n);
        }
        printf("\n");
    a--;    
    }
    getch();
}