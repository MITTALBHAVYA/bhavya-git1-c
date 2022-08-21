/* Write factorial function & use the function to find the sum of series S=1!+2!+ */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int factorial(int num)
{
    int i,pro=1;
    if(num==0)
    {
        return pro;
    }
    else
    {
        for(i=1;i<=num;i++)
        {
            pro=pro*i;
        }
    }
    return pro;
}
int main()
{
    int num,i,sum=0;
    printf("ENTER THE NUMBER UPTO WHICH SUM TO BE FOUND\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
       sum=sum+factorial(i);
    }
    printf("REQUIED SUM IS %d",sum);
    return 0;
}