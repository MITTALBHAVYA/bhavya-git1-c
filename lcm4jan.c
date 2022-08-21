#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
    int max,n1,n2,i,a,lcm;
    printf("ENTER TWO NUMBERS HERE\n");
    scanf("%d,%d",&n1,&n2);
    max=(n1>n2)?n1:n2;
    while(1)
    {
        if((max%n1==0)&&(max%n2==0))
        {
            lcm=max;
            break;
        }
        ++max;
    }
    printf("LCM of two numbers are %d",lcm);
    getch();
}