/* Define a structure that can describe a hotel. 
It should have the member that includes the name, address, grade, room charge and number of 
rooms.
Write a function to print out hotel of given grade in order of room charges.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
typedef struct HOTEL
{
    char name[200];
    char addre[300];
    int grade;
    float roomcharge;
    int noofrooms;
}hotel;
int main()
{
  /* 
  choices to user
  1.MENU(1.list hotel list 2.edit hotel list 3. exit) 
  2.choice 1 .list hotel
            2.ask grade of hotel ...
            3.check the different hotels with grade fromm the give list of hotel 
            4.list the required grade hostel with detail like address,noofrooms,and
            room charge
       with choice 2
       EDIT HOTEL has 3 choices 
       a)add hotel b)delete hotel c)exit hotel edit menu     
  */
 hotel list[100],key;
 int choice,edchoice,noofhotels=0,j=0,i,k; char grd;
 while(1)
 {
   //MENU 
   printf("********   M  E   N   U   *********\n");
   printf("1.LIST HOTELS\n 2.EDIT HOTELS \n 3.EXIT \n  CHOICE::::");
   scanf("%d",&choice);
   //EXIT FOR CHoiCE 3
   if(choice==3)
     break;
   if(choice==1)
   {
     //for hotel list
     printf("\nENTER HOTEL GRADE::::");
     fflush(stdin);
     scanf("%c",&grd);
     printf("LIST OF HOTELS OF GRADE %c are\n",grd);
     for( int i=0;i<noofhotels;i++)
     {
       if(list[i].grade==grd)
       {
         printf("%d.%s\n",j+1,list[i].name);
         printf("%s\n",list[i].addre);
         printf("NO OF ROOMS : %d\n",list[i].noofrooms);
         printf("RENT  OF ROOM ::%f\n",list[i].roomcharge);
         j++;
       }
     }
     printf("TOTAL %d HOTEL FOUND \n",j);
     break;
   }
   if(choice==2)
   { 
     while(1)
     {
     //for editing in hotel list.
     printf("\n*********HOTEL EDIT MENU*********\n");
     printf("1. ADD NEW HOTEL\n 2. DELETE HOTEL \n 3. EXIT\n");
     printf("CHOICE::: ");
     scanf("%d",&edchoice);

     if(edchoice==3)
     {
       printf("\n");
       break;
     }
     if(edchoice==1)
     {
      printf("\nADD HOTEL\n");
      printf("\nENTER HOTEL GRADE\n");
      fflush(stdin);
      scanf("%c",&key.grade);
      printf("INPUT NAME:: ");
      fflush(stdin);
      gets(key.name);
      printf("\n\nINPUT ADDRESS ::\n");
      fflush(stdin);
      gets(key.addre);
      printf("\n\nINPUT NUMBER OF ROOMS IN HOTEL::::::\n\n");
      fflush(stdin);
      scanf("%d",&key.noofrooms);
      printf("\n\nINPUT HOTEL RENTAL CHARGES\n\n");
      fflush(stdin);
      scanf("%f",&key.roomcharge);
      for(i=noofhotels-1;i>=0;i--)
      {
        list[i+1]=list[i];
      }
      list[i+1]=key;
      printf("HOTEL %s is added successfully in the list\n\n",list[i+1].name);
      noofhotels++;
      break;
     }
     if (edchoice==2)
     {
       printf("\nDELETE HOTEL\n");
       printf("\nENTER NAME OF HOTEL\n");
       fflush(stdin);
       gets(key.name);
       printf("\nENTER GRADE OF HOTEL\n");
       fflush(stdin);
       scanf("%c",&key.grade);
       printf("\nENTER ADDRESS OF HOTEL\n");
       fflush(stdin);
       gets(key.addre);
       printf("\nENTER ROOM CHARGE\n");
       fflush(stdin);
       scanf("%f",&key.roomcharge);
       printf("\nENTER NUMBER OF ROOMS\n");
       fflush(stdin);
       scanf("%d",&key.noofrooms);
       for(k=0;k<noofhotels;k++)
       {
         if(list[k].name==key.name)
         {
           for(int y=k;y<noofhotels-1;y++)
           {
             list[y]=list[y+1];
           }
           noofhotels--;
         }
         else
         {
           printf("value not found");
           break;
         }
       }
     }
     else{
       printf("\nvalue not found");
     }
     }
   }
   else{
     printf("\nvalue not found");
     break;
   }
 }
 return 0;
};