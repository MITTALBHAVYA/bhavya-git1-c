#include<stdio.h>
#include<conio.h>
#include<math.h>
/*golden ration or fabonacci ratio is a BHARITIYTA TREASURE WHICH IS STOLEN BY MF BRITISHERS , WE NEVER COPYRIGHT
 OUR KNOWLEDGE BECAUSE WE ALWAYS BELIEVE IT IS FOR ALL*/
int main()
{
    int n,n1,n2,sum,i;
    n1=0; n2=1;
    printf("ENTER THE NUMBER OF TERMS\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("0\n");
    }
    else if(n==2)
    {
        printf("0\n");
        printf("1\n");
    }
    else
    {
        printf("0\n");
        printf("1\n");
        for(i=3;i<=n;i++)
        {
            sum=n1+n2;
            printf("%d\n",sum);
            n1=n2;
            n2=sum;
        }
    }
    getch();
}