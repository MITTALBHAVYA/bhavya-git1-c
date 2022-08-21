//Write a program to print the multiplication of two N*N (Square) matrix
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{
    int sum=0,mul=1,mat1[50][50],mat2[50][50],multimat[50][50],r1,r2,c1,c2,mr1,mc1;
    printf("ENTER NUMBER OF ROWS of matrix 1\n");
    scanf("%d",&r1);
    printf("ENTER NUMBER OF columns of matrix 1\n");
    scanf("%d",&c1);
    printf("ENTER NUMBER OF ROWS of matrix 2\n");
    scanf("%d",&r2);
    printf("ENTER NUMBER OF columns of matrix 2\n");
    scanf("%d",&c2);
    /*  r1*c1 r2*c2, c1==r2 for further multiplication
      c11=a11b11+a12b21+a13b31 c12=a11b12+a12b22+a13+b32 c13=a11b13+a12b23+a13b33
      c21=a21b11+a22b21+a23b31
 */
if(c1==r2)
{
    printf("enter the elements of first matrix");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("enter the element %d %d of first matrix \n",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n \n");
    printf("enter the elements of second matrix");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("enter the element %d %d of second matrix \n",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\n");
    mr1=r1;mc1=c2;
    for(int l=0;l<mr1;l++)
    {
        for(int j=0;j<mc1;j++)
        {
         sum=sum+mat1[l][j]*mat2[j][l];
        }
        for(int k=0;k<mc1;k++)
        {
            multimat[l][k]=sum;
        }
        sum=0;
    }
    printf("\n multiplication of both matrix is \n\n");
    printf("......................................................\n");
    for(int i=0;i<mr1;i++)
    {
        for(int j=0;j<mc1;j++)
        {
            printf(" %d ",multimat[i][j]);
        }
        printf("\n");
    }
}
else
{
  printf("given matrix multiplication is not possible");
}
return 0;
}