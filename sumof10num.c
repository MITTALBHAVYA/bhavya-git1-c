#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,j,k,n,sum;
    sum=0;
    for(i=1;i<=10;i++)
    {
        printf("enter %d th number here\n",i);
        scanf("%d",&j);
        if(j>=0)
        {
            sum=sum+j;
        }
        else
        {
            sum=0;
            printf("invalid entery\n");
            break;
        }
    }
    printf("sum of number is %d",sum);
    getch();
}