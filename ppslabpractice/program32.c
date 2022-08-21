/*  Write a program to remove all the blank space from the string & print it, also count the no of characters.  */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{
    char string[100];
    int k,i,j;
    /* 
     1.Read the string.
     2.calculate its length
     3.for example "hare krishna hare krishna krishna krishna hare hare!!!"
     4.length now:54(with space)
     5.make a loop from string k="0" k<len ,k++
     6.detect space if string char==" " ,first space at 4
     7.4=5,5=6...and so on...upto 52=53 53="\0",k=-1;
     8.len = new length=53
     9.so on 
     10.end of the loop string[len]="\0";
     11.print length and space less string.
     1.len=47
    */
   printf("ENTER YOUR STRING HERE >>>>    ");
   gets(string);
   int len=strlen(string);
   for(k=0;k<len;k++)
   {
     if(string[k]==' ')
     {
         for(i=k;i<len-1;i++)
         {
           string[i]=string[i+1];
         }
         string[i]='\0';
         k=-1;
     }
     len=strlen(string);
   }
   printf("\n\n%d\n\n",len);
   puts(string);
   return 0;
}