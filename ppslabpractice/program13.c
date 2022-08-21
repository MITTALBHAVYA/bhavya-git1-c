/*
Write a program to draw the following figure: 
3 2 1
21
1
*
**
***
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n,i,j,k;
    for(i=3;i>0;i--)
    {
        for(j=i;j>0;j--)
       { printf("%d ",j);}
       printf("\n");
    }
    for(k=1;k<=3;k++)
    {
        for(n=1;n<=k;n++)
        {
            printf("* ");
        }
        printf("\n");
    }
   // printf("\n");
   return 0;
}
