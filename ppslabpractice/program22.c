/*Write a program to calculate the GCD of given numbers using recursion.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int GCDrec(int n1,int n2)
{
    if(n2!=0)
    {
        GCDrec(n2,n1%n2);
    }
    else{
        return n1;
    }

}
int main()
{
    int num1,num2;
    printf("ENTER TWO NUMBERS =");
    scanf("%d,%d",&num1,&num2);
    printf("GCD OF GIVEN TWO NUMBERS IS %d",GCDrec(num1,num2));
}