//Write a program in C to check whether the given string is a
//palindrome or not.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{
    char string[100];int i;
    int flag=0;
    /*
     1.read the string
     2.calculate its length
     3.reverse the string 
     4.compare the both string via loop
     5.intial the flag=0
     6.if compare successful then flag=1
     7.flag==1,palindrome otherwise not     
    */
   printf("Enter the string : ");
   scanf("%s",string);
   int len=strlen(string);
   for(i=0;i<len;i++)
   {
       if(string[i]!=string[len-i-1])
       {
           flag=1;
           break;
       }
   }
   if(flag==1)
   {
       printf("YOUR STRING IS NOT PALINDROME");
   }
   else
   {
       printf("YOUR STRING IS A PALINDROME");
   }
   return 0;
}