#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
/*
     *
    ***
   *****
  *******
 *********
***********    */
void main()
{
    int i,j,n;
    for(i=6;i>=1;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            printf(" ");
        }
        for(n=13-2*i;n>=1;n--)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}