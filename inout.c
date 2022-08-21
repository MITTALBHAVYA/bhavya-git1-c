#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    
    FILE *ptr=NULL;
    char string[60]="I love you sultanpur";
  /*  ptr=fopen("textfile","r");
    fscanf(ptr,"%s",string);
    printf("the content of this file has %s\n\t",string); */
    //return 0;
    ptr=fopen("textfile","a");
  //  fscanf(ptr,"%s",string);
   fprintf(ptr,"\n%s\a",string);
 return 0;

}