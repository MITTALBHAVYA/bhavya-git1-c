#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
    int i,n,j,k,a,b;
    printf("ENTER THE NUMBER OF ROWS\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i-1;k++)
        {
            printf("   ");
        }
        for(j=1;j<=2*(n-i)+1;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}