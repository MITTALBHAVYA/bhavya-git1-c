/*recursion program for inversing a number*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int sum=0;
int revnum(int num)
{
    int rem;
    if(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        revnum(num/10);
    }
    return sum;
}
int main()
{
    int n;
    printf("ENTER NUMBER HERE \n");
    scanf("%d",&n);
    printf("REVERSE OF NUMBER :%d",revnum(n));
    return 0;
}
