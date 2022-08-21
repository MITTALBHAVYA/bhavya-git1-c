#include <stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
void main()
{
    char gen;
    char mst[15];char gst[15];
    char md[]="married"; char md2[]="MARRIED";char md3[]="Married";
    char umd[]="unmarried"; char umd2[]="UNMARRIED";char umd3[]="Unmarried";
    int age;
    printf("ENTER YOUR MARTIAL STATUS\n");
    scanf("%s",mst);
    int a=strcmp(mst,md); int b=strcmp(mst,md2);int c=strcmp(mst,md3);
    if(a==0||b==0||c==0)
    {
        printf("you are eligible driver\n");
    }
    else
    {
        printf("ENTER YOUR AGE and GENDER\n");
        scanf("%d%c",&age,&gen);
       /* printf("ENTER YOUR GENDER in capital INITIALS \n");
        scanf("%c",&gen);*/
        if((gen=='M'&& age>35)||(gen=='F'&& age>25))
        {
          printf("you are eligible driver\n"); 
        }
        else
        {
        printf("you are not eligible driver");
    }
    }
    /*{
        printf("you are not eligible driver");
    }*/
    getch();
}