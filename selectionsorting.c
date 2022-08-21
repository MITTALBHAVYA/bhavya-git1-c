#include<stdio.h>
#include<string.h>
int selectionsort(int a[],int len)
{
   // int flag;
    for(int i=0;i<len;i++)
    {
        int min=i;
        for(int j=i+1;j<len;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
            if(min!=i)
            {
               int flag=a[i];
                a[i]=a[min];
                a[min]=flag;
            }
        }
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
    selectionsort(array,len);
    printf("the selection sorted array is \n");
    for(k=0;k<len;k++)
    {
      printf("%d",array[k]);
    }
    return 0;
}