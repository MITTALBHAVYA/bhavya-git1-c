/* C program to check a given number is prime or not using recursion. */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int i;
int checkprime(int num,int i)
{
    if(i==1)
    {
        return 1;
    }
   else
   {if(num%i==0)
    {
        return 0;
    }
    else
    {
        checkprime(num,i-1);
    }
   }
    
}
int main()
{
    int n,a;
    printf("enter your number here:\n");
    scanf("%d",&n);
    a=checkprime(n,n-1);
    if(a==0)
    {
        printf("NOT PRIME");
    }
    if(a==1)
    {
        printf("PRIME");
    }
    return 0;
}