#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int marks;
    printf("ENTER YOUR MARKS HERE \n");
    scanf("%d",&marks);
     if(marks>=100)
     {
         printf("invalid entery of marks");
     }
    else if(marks>=91&&marks<=100)
    {
        printf("A grade");
    }
    else if(marks>=81&&marks<=90)
    {
        printf("B grade");
    }
    else if(marks>=71&&marks<=80)
    {
        printf("C grade");
    }
    else if(marks>=61&&marks<=70)
    {
        printf("D grade");
    }
        else if(marks>=51&&marks<=60)
    {
        printf("E grade");
    }
    else
    {
        printf("you are failed ,sale papa ki chappal se bach");
    }    
}