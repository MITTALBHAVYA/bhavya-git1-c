/*program to calculate net salary, kyuki baap bada na bhaiya sabse bada rupaiya*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    double bs,DA,HRA,GS,NS,PF;
    printf("please type your basic salary here \n");
    scanf("%lf",&bs);
    DA=bs*0.25;
    HRA=bs*0.15;
    GS=bs+HRA+DA;
    PF=0.1*GS;
    NS=bs-PF;
    printf("this is your net salary =%lf",NS);
    getch();

}