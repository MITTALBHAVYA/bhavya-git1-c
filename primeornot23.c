#include<stdio.h>
#include<conio.h>
#include<math.h>
/* prime number is like ,hum hum hai hum se age koi nahi ,duniya humse hai hum duniya se nahi*/
void main()
{
    int i,n,a,b;
    printf("ENTER THE NUMBER HERE\n");
    scanf("%d",&n);
    a=0;
    if(n<=1)
    {
        printf("this number is neither prime nor composite");
    }
    else
    {
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
    if(a==1)
    {
        printf("this number is composite");
    }
    else
    {
        printf("this number is prime number");
    }
    }
}