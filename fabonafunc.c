#include<stdio.h>
#include<conio.h>
#include<math.h>
/*golden ration or fabonacci ratio is a BHARITIYTA TREASURE WHICH IS STOLEN BY MF BRITISHERS , WE NEVER COPYRIGHT
 OUR KNOWLEDGE BECAUSE WE ALWAYS BELIEVE IT IS FOR ALL*/
int sumfabo(int n)
{
    int n1,n2,sum,i,finsum=1;
    n1=0; n2=1;
   if(n==1)
    {
        finsum=0;
    }
    else if(n==2)
    {
        finsum=1;
    }
    else
    {
       finsum=1;
        for(i=3;i<=n;i++)
        {
            sum=n1+n2;
            n1=n2;
            n2=sum;
            finsum=sum+finsum;
        }
    }
    return finsum;
}
void main()
{
    int m,finsum;
    printf("enter the number of terms ");
    scanf("%d",&m);
    finsum=sumfabo(m);
    printf("%d",finsum);
    getch();
}