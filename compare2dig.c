#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("the greater number is= %d",a);
    }
    else
    {
        printf("the greater number is= %d",b);
    }
    getch();
}
