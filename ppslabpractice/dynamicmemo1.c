#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s=0,n;
    int *ptr;
    printf("enter here\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        s+=*(ptr+i);
    }
    printf("%d",s);
       free(ptr);
}