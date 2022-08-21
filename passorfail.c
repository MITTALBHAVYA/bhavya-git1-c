/* checking whether science students are pass in physics ,chemistry and maths subjects */
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    double ph,che,mat,to2,to3;
    printf("enter your physics marks here  \n");
    scanf("%lf",&ph);
    printf("enter your chemistry marks here  \n");
    scanf("%lf",&che);
    printf("enter your maths marks here  \n");
    scanf("%lf",&mat);
    to2=ph+mat;
    to3=ph+mat+che;

    if(ph>40&&che>50&&mat>60)
    {
        if(to2>150||to3>200)
        {
            printf("congratulations you are passed");
        }
        else
        {
            printf("sad you are failed , better luck next time");
        }
    }
    else
        {
            printf("sad you are failed , please improve your score next time");
        }
getch();


}