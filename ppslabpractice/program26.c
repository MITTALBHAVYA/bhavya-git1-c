//Write a program to merge two sorted array & no element is repeated during merging.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int bubblesort(int array[],int len)
{
    int x=len;int alt;
    for(int i=0;i<x-1;i++)
    {
        for(int k=0;k<x-i-1;k++)
      if(array[k]>array[k+1])
      {
          alt=array[k];
          array[k]=array[k+1];
          array[k+1]=alt;
      }
    }
}
int main()
{
    int array1[100],array2[100],finarr[100],i,j,k,num1,num2,finnum;
    printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY 1\n");
    scanf("%d",&num1);
    printf("ENTER THE ELEMENTS OF ARRAY 1\n");
    for(i=0;i<num1;i++)
    {
      scanf("%d",&array1[i]);
    }
    bubblesort(array1,num1);
    printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY 2\n");
    scanf("%d",&num2);
    printf("ENTER THE ELEMENTS OF ARRAY 2\n");
    for(j=0;j<num2;j++)
    {
      scanf("%d",&array2[j]);
    }
    bubblesort(array2,num2);
    finnum=num1+num2;
    printf("sorted first array\n");
    for(i=0;i<num1;i++)
    {
      printf(" %d ",array1[i]);
    }
    printf("\n");
    printf("sorted second array\n");
    for(j=0;j<num2;j++)
    {
      printf(" %d ",array2[j]);
    }
    printf("\n");
    printf("merged and sorted array\n");
    int t=0;
    for(k=0;k<finnum;k++)
    {
        if(k>=num1)
        {
            finarr[k]=array2[t];
            t++;
        }
        else
        {
            finarr[k]=array1[k];
        } 
    }
    bubblesort(finarr,finnum);
    for(int f=0;f<finnum;f++)
    {
        printf(" %d ",finarr[f]);
    }
    return 0;
}                                                      