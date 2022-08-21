#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
/* recurssion program for counting the number of digits */
int a=0;
int numdig(long num)
{  
    if(num>0)
    {
      a++;
      numdig(num=num/10);
    }
    else
    {
        return a;
    }
}
int main()
{
    long n;
    printf("ENTER THE NUMBER\n");
    scanf("%ld",&n);
    printf("THE NUMBER OF DIGITS IN %ld : %d",n,numdig(n));
    return 0;
}