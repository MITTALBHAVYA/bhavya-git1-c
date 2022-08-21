/* recurssion function of fibonacci */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int fibonacci(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
   { return fibonacci(n-1)+fibonacci(n-2);}
}
int main()
{
    int num;
    printf("enter number here\n");
    scanf("%d",&num);
    printf("fibonacci of %d is %d\n",num,fibonacci(num));
    return 0;
}
