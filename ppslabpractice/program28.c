//Write a program to find the transpose of a given matrix & check whether it is symmetric or not.
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
/*int swap(int a,int b)
{
    int k;
    k=a;
    a=b;
    b=k;
}*/
int main()
{
    int matr[100][100],order,tranmatr[100][100],flag=0;
    printf("ENTER THE ORDER OF THE MATRIX \n");
    scanf("%d",&order);
    printf("enter the elements of matrix\n");
    for(int i=0;i<order;i++)
    {
        for(int j=0;j<order;j++)
        {
         printf("enter the element %d %d \n",i+1,j+1);
         scanf("%d",&matr[i][j]);
         tranmatr[j][i]=matr[i][j];
        }
        printf("\n");
    }
    printf("\n transpose of given matrix \n");
    for(int i=0;i<order;i++)
    {
        for(int j=0;j<order;j++)
        {
            printf(" %d ",tranmatr[i][j]);
            if(tranmatr[i][j]!=matr[i][j])
            {
                flag++;
            }
        }
        printf("\n");
    }
    if(flag!=0)
    {
        printf("given matrix is not symmetric");
    }
    else
    {
        printf("given matrix is symmetric");
    }
    return 0;
}