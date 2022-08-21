/*conversion 
inches to foot,kms to miles,cms to inches,pounds to kgs, inches to meter*/
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
void main()
{
    double qty1,qty2,a1,a2,a3,a4,a5,c1,c2; char unit[8];
    printf("ENTER THE QUANTITY WITH UNIT\n");
    scanf("%lf%s",&qty1,unit);
    a1=strcmp(unit,"inches");
    a2=strcmp(unit,"kms");
    a3=strcmp(unit,"cms");
    a4=strcmp(unit,"pounds");
    if(a1==0)
    {
        printf("to foot press 1 or to meter press 2 ");
        scanf("%lf",&c1);
        if(c1==1)
        {
            qty2=qty1/12;
            printf("%lf foot",qty2);
        }
        if(c1==2)
        {
            qty2=qty1/39.37;
            printf("%lf meter",qty2);
        }
        
    }
    if(a2==0)
    {
        qty2=qty1/1.609;
        printf("%lf mile",qty2);
    }
    if(a3==0)
    {
        qty2=qty1/2.54;
        printf("%lf inches",qty2);
    }
    if(a4==0)
    {
        qty2=qty1/2.205;
        printf("%lf kilogram",qty2);
    }
    getch();
    
}