/*Write a function that return sum of all the odd digits of a given positive no
entered through keyboard.*/
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
int sumodddig(int n)
{
    int i,j,sum; sum=0;
    for(i=n;i!=0;i=i/10)
    {
        j=i%10;
        if(j%2!=0)
        {
            sum=sum+j;
        }
    }
    return sum;
}
void main()
{
    int n1,add;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n1);
    add=sumodddig(n1);
    printf("\n %d",add);
    getch();
}
