/* Write program to sort the array of character (String) in alphabetical order like STRING in GINRST.  */
//ASCII value of alphabets 65 to 90 and 97 to 122
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    /* 
    1.enter the string
    2.find the length of string
    3.let the string be "BHAVYA"
    4.length of string is 6
    5.required output "AABHVY"
    6.create loop for string ,start it from 65 to 90 and from 97 to 122
    7.stored the new string in a new atring array.
    8.ok then begin!!!!!!! 
    */
   char string[100],alpha[100];
   int i=0,k=0,x,j;
   printf("ENTER THE STRING HERE\n ==========================================\n>>>");
   scanf("%s",string);
   int len=strlen(string);
   for(x=65;x<=90&&k<len;x++)
   {
       for(i=0;string[i];i++)
       {
          j=string[i];
          if(j==x||j==x+32)
            {
              alpha[k]=string[i];
                k++;
            }
       }

   }
   alpha[k]='\0';
   printf("ALPHABETICAL ORDER OF GIVEN STRING   -...%s....- is >>>>>    %s    <<<<< .",string,alpha);
   return 0;
}