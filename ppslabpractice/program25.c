/* Write a program to delete duplicate element in a list of 10 elements & display it on screen. */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num,dig[100],newset[100],a=0;
   printf("ENTER THE TOTAL NUMBER OF DIGIT\n::::");
   scanf("%d",&num);
   for(int i=1;i<=num;i++)
   {
       printf("enter %d number of digit\n",i);
       scanf("%d",&dig[i-1]);
   } 
   //adityam brother from another mother 
   for(int k=1;k<num;k++)//
   {
      /* if(k==num-1)
       {
           a++;
           k=0;
       }
*/
       if(dig[a]==dig[k])
       {
           int t;
         /*1 2 3 4 2 1 6 3 5 1 2 3 */
         for(t=k;t<num;t++)
         {
         dig[t]=dig[t+1];
         }
         num--;
       }
      if(k==num-1)
       {
           a++;
           k=0;
       }
   }
   for(int j=0;j<num-2;j++)
   {
       printf("distinct number %d\n",dig[j]);
   }
 return 0;
}