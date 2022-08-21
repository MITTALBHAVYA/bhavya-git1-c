#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
    /*     1 
          232
         34543     pattern to print given above */ 
    int i,a,n,j,b;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=0;j--)
        {
            printf(" ");
        }
        for(a=i;a<=2*i-1;a++)
        {
            printf("%d",a);
        }
        
        for(b=2*i-2;b>=i;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    getch();
}