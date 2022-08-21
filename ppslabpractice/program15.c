/* Write a function that return sum of all the odd digits of a given
positive no entered through keyboard.  */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int sumodd(int num)
{
    int sum=0;
    for(int i=num;i>0;i=i/10)
    {
        int rem=i%10;
        if(rem%2!=0)
        {
            sum=sum+rem;
        }
    }
    return sum;
}
int main()
{
    int num;
    printf("ENTER THE NUMBER HERE:::\n");
    scanf("%d",&num);
    printf("SUM OF THE ODD DIGITS ARE :\n%d",sumodd(num));
    return 0;
}