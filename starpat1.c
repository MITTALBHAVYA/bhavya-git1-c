#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
void main()
{
    printf("enter number of rows\n");
    int n;
    scanf("%d",&n);
    /*pattern pyRAMID 
    *
    **
    ***
    ****
    *****  */
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}