#include<stdio.h>
#include<string.h>
int main()
{
    float m1[3][3],m2[3][3],mul[3][3],sum=0;
    int i,k,j;
    printf("enter the elements of first matrix\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         printf("enter the element %d%d\n",i+1,j+1);
         scanf("%f",&m1[i][j]);
        }
    }
    printf("enter the elements of second matrix\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         printf("enter the element %d%d\n",i+1,j+1);
         scanf("%f",&m2[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         sum=sum+m1[i][j]*m2[j][i];
        }
        for(int k=0;k<3;k++)
        {
            mul[i][k]=sum;
        }
        sum=0;
    }
    printf("required matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%f  ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}