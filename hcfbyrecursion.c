#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
/*C program to find the HCF (Highest Common Factor) of given numbers using recursion */
int hcf(int n1,int n2)
{
    if(n2!=0)
    {
        return hcf(n2,n1%n2);
    }
    else
    {
        return n1;
    }
}
int main()
{
    int n1,n2;
    printf("ENTER TWO NUMBER\n");
    scanf("%d,%d",&n1,&n2);
    printf("H.C.F OF GIVEN NUMBERS %d",hcf(n1,n2));
    return 0;
}