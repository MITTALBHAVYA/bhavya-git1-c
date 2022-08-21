#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[100],input[50];
    int n;int a,b,c; int i;static int score=0;
    srand(time(NULL));
    printf("ENTER YOUR NAME BUDDY\n");
    gets(name);
    printf("hello,%s let's play stone,paper and scissor\n",name);
    printf("I am your competitor....choose 'stone','paper','scissor' to begin game\n");
    scanf("%s",input);
    n=rand()%3;
    /*
    1.stone beats scissor
    2.scissor beats paper
    3.paper beats stone
    stone=0.....scissor=1.....paper=2
    (mine,random)CASES
    (0,0)TIE,(0,1)WIN,(0,2)LOOSE
    (1,0)LOOSE,(1,1)TIE,(1,2)WIN
    (2,0)WIN,(2,1)LOOSE,(2,2)TIE
    */
    a=strcmp("stone",input);
    b=strcmp("scissor",input);
    c=strcmp("paper",input);
    if(a==0)
    {
        i=0;
    }
     if(b==0)
    {
        i=1;
    }
     if(c==0)
    {
        i=2;
    }
    if(n==0)
    {
        printf("mine choose is stone\n");
    }
    if(n==1)
    {
        printf("mine choose is scissor\n");
    }
    if(n==2)
    {
        printf("mine choose is paper\n");
    }
    //return 0;
   if(((i==0)&&(n==1))||((i==1)&&(n==2))||((i==2)&&(n==0)))
   {
       score++;
       printf("FRIEND %s, you are a winner of this round your score %d",name,score);
   }
   if(i==n)
   {
       printf("THIS TIME TIE....score:%d",score);
   }
   if(((i==0)&&(n==2))||((i==1)&&(n==0))||((i==2)&&(n==1)))
   {
       score--;
       printf("FRIEND %s, you are a looser of this round your score %d",name,score);
   }
   return 0;
}
