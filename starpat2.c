#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,n;
    for(i=6;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
}
