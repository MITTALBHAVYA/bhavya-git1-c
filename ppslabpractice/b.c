#include<stdio.h>
int main()
{
  int n,a[1000],dup[1000],count=0,num=0,len[1000],p=0;
  int x=n;
  //printf("ENTER THE VALUE OF N\n");
  scanf("%d",&n);
  printf("\n");
  if((n>=1)&&(n<=1000))
  {
     for(int i=0;i<n;i++)
     {
         scanf("%d ",&a[i]);
     }
    for(int s=1;s<1001;s++)
    {
        for(int z=0;z<n;z++)
        {
            if(a[z]==s)
            {
              dup[s-1]=count++;  
            }

        }
        count=0;
    }
    for(int f=1000;f>0;f--)
    {
        if(dup[f]>1)
        {
            len[p]=f;
            p++;
        }
    }
   int area=dup[0]*dup[1];
   printf("%d",area);
  }
  return 0;
}