/* Write a program to store the following string “zero”, “one”	“five”.
Print the no in words, given in figure as 3205.
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int revnumber(int num)
{
  int sum=0;
  for(int i=num;i!=0;i=i/10)
     {
         sum=sum*10+i%10;
     }
     return sum;
}
int main()
{

    /* 
    1.take the number as a integer 
    2.now read the number for example 3205
    3.reverse the number .
    4.read the individual a=3, print three
    5.read by applying revnumber%10;
    6.for next number apply revnumber/10 upto revnumber !0.
    */
   int num;
   printf("enter number \n::::");
   scanf("%d",&num);
   int revno=revnumber(num);
    for(int j=revno;j!=0;j=j/10)
    {
       int a=j%10;
        switch (a)
        {
        case 1:printf("  ONE  ");
            break;
        case 2:printf("  TWO  ");
            break;
        case 3:printf("  THREE  ");
            break;        
        case 4:printf("  FOUR  ");
            break;
        case 5:printf("  FIVE  ");
            break;
        case 6:printf("  SIX  ");
            break;
        case 7:printf("  SEVEN  ");
            break;
        case 8:printf("  EIGHT  ");
            break;
        case 9:printf("  NINE  ");
            break;
        case 0:printf("  ZERO  ");
             break;
        default:printf("  number not found  ");
            break;
        }
    }
   return 0;
}
