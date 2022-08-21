#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
struct dridet
{
    char name[40];
    int licno;
    char route[100];
    int kms;
};
int main()
{

    int n;int i;
    printf("enter number of entry");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     struct dridet d[i];
     printf("ENTER DRIVER'S name\n");
     scanf("%s",d[i].name);
     printf("ENTER DRIVER'S licno\n");
     scanf("%d",&d[i].licno);
     printf("ENTER DRIVER'S route\n");
     scanf("%s",d[i].route);
     printf("ENTER DRIVER'S kms\n");
     scanf("%d",&d[i].kms);  
     printf("details is below\n");
     printf("%s\n",d[i].name);
      printf("%d\n",d[i].licno);
      printf("%s\n",d[i].route);
      printf("%d\n",d[i].kms);     
    }
  /*  for(i=0;i<n;i++)
    {
      printf("%s\n",d[i].name);
      printf("%d\n",d[i].licno);
      printf("%s\n",d[i].route);
      printf("%d\n",d[i].kms);
    } */
    return 0;

}
       