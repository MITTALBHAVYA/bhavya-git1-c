/*
Write a program to compare two given dates.
To store a date uses a structure that contains three members namely day, month and year. 
If the dates are equal then display message equal otherwise unequal.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct date
{
  int day,month,year;

};
int main()
{
    struct date date1,date2;
    printf("ENTER DATE(dd/mm/yyyy) 1 HERE :::");
    scanf("%d/%d/%d",&date1.day,&date1.month,&date1.year);
    printf("\n\n\nENTER DATE(dd/mm/yyyy) 2 HERE :::");
    scanf("%d/%d/%d",&date2.day,&date2.month,&date2.year);
    printf("\n.....\n.....\n......\n.....\n...........");
    if(
        ((date1.day>0)&&(date1.day<=31))&&((date2.day>0)&&(date2.day<31))
        &&((date1.month>0)&&(date1.month<13))&&((date2.month>0)&&(date2.month<13))                                                             
        &&((date1.month>999))   )
        {
    if((date1.day==date2.day)&&(date1.month==date2.month)&&(date1.year==date2.year))
    {
        printf("GIVEN DATES ARE SAME.......");
    }
    else
    {
        printf("GIVEN DATES ARE NOT SAME.........");
    }
        }
    else
    {
        printf("GIVEN DATE(s) IS/ARE NOT VALID........");
    }
    return 0;
}
