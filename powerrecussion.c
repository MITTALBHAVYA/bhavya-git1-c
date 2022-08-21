/* recurssion function program for calculating power of term */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int calpower(int n,int p)
{
    int result=1;
    if(p==0)
    {
        return result;
    }
    result=n*(calpower(n,p-1));
}
int main()
{
    int num,power;
    printf("ENTER THE NUMBER(OR BASE)\n");
    scanf("%d",&num);
    printf("ENTER THE POWER\n");
    scanf("%d",&power);
    printf("REQUIRED RESULT IS %d",calpower(num,power));
    return 0;
}