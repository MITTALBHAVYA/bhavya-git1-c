/*
Write a program to receive marks of physics, chemistry & maths from user & check its eligibility for 
course if a) Marks of physics > 40 b) Marks of chemistry > 50 c) Marks of math‟s > 60 
d) Total of physics & math‟s marks > 150 or e) Total of three subjects marks > 200
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int phy,che,math,total;
    printf("ENTER THE MARKS OF physics\n\a");
    scanf("%d",&phy);
    printf("ENTER THE MARKS OF chemistry\n\a");
    scanf("%d",&che);
    printf("ENTER THE MARKS OF maths\n\a");
    scanf("%d",&math);
    total=che+phy+math;
    if(phy>40&&che>50&&math>60&&(phy+math)>150&&total>200)
    {
        printf("CONGRATULATION YOU ARE PASSED IN THIS EXAM ");
    }
    else if(total==300)
    {
        printf("CONGRATULATION YOU ACED IN ALL SUBJECTS");
    }
    else
    {
        printf("sorry you are failed , better luck next time ");
    }
    return 0;


}