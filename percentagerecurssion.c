/* recurssion function to print corresponding percentage value from 1% to 100% */
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int eachper(int i,float n)
{
    float a;
    if(i>100)
    {
        return 0;
    }
    else
    {
        a=(i*n)/100;
        printf("%d percentage of %lf is %lf \n",i,n,a);
    }
    eachper(i=i+1,n);
}
int main()
{
    double num;
    printf("ENTER THE NUMBER HERE\n");
    scanf("%lf",&num);
    eachper(1,num);
}