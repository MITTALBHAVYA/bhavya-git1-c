/*their is no debate , we all have faith , the biggerone is the one who is always late*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    printf("ENTER THE THREE NUMBERS     ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("the greatest number is =%d",a);
        }
        else
        {
            printf("the greatest number is = %d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("the greatest number is=%d",b);

        }
        else
        {
            printf("the greatest number is =%d",c);
        }
    }
    getch();
}