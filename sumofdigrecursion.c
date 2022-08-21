#include<stdio.h> 
#include<conio.h>
#include<math.h>
#include<string.h>
int sum=0;
int digisum(long num)
{
   if(num>0)
   {
       sum+=num%10;
       digisum(num/10);
   }
   return sum;
}
int main()
{
    long n;
    printf("ENTER THE DIGIT\n");
    scanf("%ld",&n);
    printf("SUM OF ALL DIGIT OF %ld is %d",n,digisum(n));
    return 0;
}
