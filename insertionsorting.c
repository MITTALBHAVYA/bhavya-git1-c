#include<stdio.h>
#include<string.h>
#include<math.h>
int insertionsort(int arr[],int len)
{ int temp=0;int j;
    for(int i=1;i<len;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int array[100],len,i,k;
    printf("enter number of elements \n");
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
        printf("enter the %d element \n",i+1);
        scanf("%d",&array[i]);
    }
    insertionsort(array,len);
    printf("the insertion sorted array is \n");
    for(k=0;k<len;k++)
    {
      printf("%d",array[k]);
    }
    return 0;
}