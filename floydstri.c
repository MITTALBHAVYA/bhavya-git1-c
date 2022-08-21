#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
void main()
{
    /*FLOYD'S TRIANGLE*/
    int i,j,k,n;
    k=1;
    printf("enter number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%3d",k);
            k++;
        }
        printf("\n");
    }
    getch();
}