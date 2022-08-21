/* factorial through recursion function */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int factorial(int a)
{
    if(a==1)
    {
        return 1;
    }
    return a*factorial(a-1);
}
int main()
{
    int num;
    printf("enter number here\n");
    scanf("%d",&num);
    printf("the factorial of %d is %d", num,factorial(num));
    return 0;
}