/* C program to calculate the product of two numbers using recursion */
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int product(int a,int b)
{
    if((a==0)||(b==0))
    {
        return 0;
    }
    else 
    {
        if(b==1)
        {
            return a;
        }
        else
        {
            a=a+product(a,b-1);
        }
        return a;
    }
}
int main()
{
    int n1,n2,n3;
    printf("ENTER TWO NUMBER:\n");
    scanf("%d,%d",&n1,&n2);
    n3=product(n1,n2);
    printf("%d",n3);
    return 0;
}