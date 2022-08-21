#include<stdio.h>
#include<string.h>
#include<math.h>
/*
# take the number of elements in a array
# let 5 elements are there
# active the first element compare with second 
# than swap 
# last one will be largest 
*/
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
    int arr[100];
    printf("entere number of terms\n");
    int len;
    scanf("%d",&len);
    for(int y=0;y<len;y++)
    {
        printf("enter %d element",y);
        scanf("%d",&arr[y]);
    }
bubblesort(arr,len);
printf("required array");
for(int i=0;i<len;i++)
{
    printf("%d  ",arr[i]);
}
return 0;
}