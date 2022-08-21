#include<stdio.h>
#include<string.h>
#include<math.h>
int binarysearch(int i,int l,int term,int arr[])
{
    int mid=(i+l)/2;
    if(arr[mid]==term)
    {
        return mid;
    }
    if(arr[mid]>term)
    {
       return binarysearch(i,mid-1,term,arr);
    }
    if(arr[mid]<term)
    {
      return binarysearch(mid+1,l,term,arr);
    }
       return 100;
}
int main()
{
  int i=0,l,term;
  int array[100];
  printf("enter total number of terms\n");
  int x;
  scanf("%d",&x);
  l=x-1;
  for(i=0;i<=l;i++)
  {
      printf("ENTER THE %d TERM\n",i+1);
      scanf("%d",&array[i]);
  }
  printf("ENTER THE NUMBER TO BE SEARCHED\n");
  scanf("%d",&term);
  int flag=binarysearch(0,l,term,array);
  if(flag==100)
  {
      printf("element not found");
  }
  else{
      printf("the place of the given element :::%d",flag);
  }
  return 0;
}