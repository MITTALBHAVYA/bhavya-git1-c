#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
/*pattern pyramid for 
 1
 12
 123.....*/
void main()
{
    int i,n,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    getch();
}
