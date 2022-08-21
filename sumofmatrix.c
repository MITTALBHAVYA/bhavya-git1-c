#include<stdio.h>
#include<string.h>
int main()
{
    float m1[5][5],m2[5][5],sum[5][5];
    int i,j;
    printf("enter the element of first matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter the %d%d element \n",i+1,j+1);
            scanf("%f",&m1[i][j]);
        }
    }
    printf("enter the element of second matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter the %d%d element \n",i+1,j+1);
            scanf("%f",&m2[i][j]);
        }
    }
    printf("SUM OF BOTH MATRIX ARE \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
          //  printf("%lf  ",&sum[i][j]);
        }
    //    printf("\n");
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
          //  sum[i][j]=m1[i][j]+m2[i][j];
          printf("%f  ",sum[i][j]);
        }
       printf("\n");
    }
    return 0;
}