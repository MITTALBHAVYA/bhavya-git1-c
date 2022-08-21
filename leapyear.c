#include<stdio.h>
#include<conio.h>
#include<math.h>
/*intehaaaa ho gayi leap year ki......ayiii naa koi khabar leap year ki...ek din badega jab..khud se
bolenge hum .....366hogyaaaa to 365 seeee*/
void main()
{
    printf("ENTER THE YEAR HERE... \n");
    int year;
    scanf("%d",&year);
    { if((year%4==0&&year%100!=0)||(year%400==0))
       printf("%d is leap year ",year);
     else
        printf("%d is not a leap year",year);
    }
    getch();
    }