//Write a program to print the entire prime no between 1 and 300.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int ifprime;
    printf("HERE ARE THE PRIME NUMBERs BETWEEN 1 to 300 \n");
    for(int i=2;i<300;i++)
    {
       if(i==2)
        {
            printf("%d\n",i);
        }
        for(int a=2;a<i;a++)
        {
            ifprime=1;
         if(i%a==0)
         {
             ifprime=0;
           break;
         }

        }
        if(ifprime==1)
        {
            printf("%d\n",i);
        }
    }
}