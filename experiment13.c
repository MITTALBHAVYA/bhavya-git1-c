/* Write a program to draw the following figure:
3 2 1
2 1
1

*
**
***  */
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
    int i,k,j,a,n; 
   printf("enter number rows\n");
    scanf("%d",&n); 
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    printf("\n");
    for(a=1;a<=n;a++)
    {
        for(k=1;k<=a;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
