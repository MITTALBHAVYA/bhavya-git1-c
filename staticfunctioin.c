#include<stdio.h>
#include<conio.h>
#include<string.h>
int statfun(int h)
{
    static int a=h;
    a++;
    return printf("%d",a);
}
int main()
{
    printf("hello");
    int h=8;
  int statfun(h);
   int statfun(h);
   return 0;
}