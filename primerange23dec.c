#include<stdio.h>
#include<conio.h>
#include<math.h>
/*write a progrm to print the entire prime number between 1 to 300*/
void main()
{
    int n,i,ifprime;
    printf("2");
    for(n=2;n<=300;n++)
    {
        for(i=2;i<n;i++)
        {
            ifprime=1;
            if(n%i==0)
            {
                ifprime=0;
                break;
            }
            
        }
        if(ifprime==1)
        {
            printf("\n%d",n);
        }
    }
    getch();
}
