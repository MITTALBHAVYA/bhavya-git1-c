#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
    int i,j,k,n,a,b,w;
    k=1;w=1;
    printf("number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        
        }
        for(a=1;a<=i;a++)
        {
            
            if((i==a)||(a==1))
            {
                k=1;
                
            }
            else
            {
              
                k=(k*(i-a+1))/(a-1);
               /* printf("%d ",w); */
            }
            printf("%3d",k);
        }
        printf("\n");
    }
    getch();
}