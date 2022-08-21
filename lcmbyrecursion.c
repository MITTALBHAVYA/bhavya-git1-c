/*C program to find the LCM (Lowest Common Multiple) of given numbers using recursion.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int i=1;
int lcm(int n1,int n2)
{
    if((i%n1==0)&&(i%n2==0))
    {
        return i;
    }
    else
    {
        i++;
        lcm(n1,n2);
        return i;
    }
}
int main()
{
    int num1,num2;
    printf("ENTER TWO NUMBER HERE\n");
    scanf("%d,%d",&num1,&num2);
    printf("L.C.M of both number is %d",lcm(num1,num2));
    return 0;
}