//Write a program to evaluate the addition of diagonal elements of two square matrixes.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int mat1[50][50],mat2[50][50],sumdig=0,order;
    printf("ENTER ORDER OF BOTH MATRIX\n");
    scanf("%d",&order);
    printf("enter the elements of first matrix\n");
    for(int i=0;i<order;i++)
    {
        
        for(int j=0;j<order;j++)
        {
            printf("enter element %d  %d ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
        printf("\n");
    }
    printf("enter the elements of second matrix\n");
    for(int i=0;i<order;i++)
    {
        
        for(int j=0;j<order;j++)
        {
            printf("enter element %d  %d ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
        printf("\n");
    }
    printf("SUM of diagonal of first matrix");
    for(int k=0;k<order;k++)
    {
          sumdig=sumdig+mat1[k][k];
    }
    printf("\n %d \n",sumdig);
    sumdig=0;
    printf("SUM of diagonal of second matrix");
    for(int k=0;k<order;k++)
    {
          sumdig=sumdig+mat2[k][k];
    }
    printf("\n %d",sumdig);
    return 0;
}