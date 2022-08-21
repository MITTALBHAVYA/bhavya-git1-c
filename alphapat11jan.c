#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
    /*pattern loop for A,B...*/
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",'A'-1+i);
        }
        printf("\n");
    }
    getch();
}