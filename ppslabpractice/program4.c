/*Write a program to find the largest of three numbers using nested if else.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,GOAT;
  printf("ENTER THE NUMBER 1\n");
  scanf("%d",&a);
  printf("ENTER THE NUMBER 2\n");
  scanf("%d",&b);
  printf("ENTER THE NUMBER 3\n");
  scanf("%d",&c);
  GOAT=(a>b)?a:b;
  GOAT=(GOAT>c)?GOAT:c;
  printf("THE GREATEST OF THREE NUMBER IS %d",GOAT);
}
