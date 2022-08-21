/* Write a program to find the sum of digits of a 5 digit number using recursion. */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int sumdigrec(int num)
{
    if(num==0)
    {
        return 0;
    }
    return (num%10)+sumdigrec(num/10);
}
int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    printf("THE SUM OF DIGITS ARE %d",sumdigrec(num));
    return 0;
}