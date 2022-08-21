//Basic salary of an employee is input through the keyboard. 
//The DA is 25% of the basic salary while the HRA is 15% of the basic salary.
// Provident Fund is deducted at the rate of 10% of the gross
//salary (BS+DA+HRA). Program to calculate the Net Salary
#include<stdio.h>
#include<conio.h>
int main()
{
    double bassal;
    printf("ENTER YOUR BASIC SALARY :");
    scanf("%lf",&bassal);
    double DA=0.25*bassal;
    double HRA=0.15*bassal;
    double profund=0.1*(bassal+DA+HRA);
    double netsal=bassal-profund;
    printf("THE NET SALARY IS : %lf",netsal);
    return 0;
}