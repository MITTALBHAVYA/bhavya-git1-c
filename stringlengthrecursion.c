#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int a=0;
int strlength(char *str)
{
    if(*str!=0)
    {
        a++;
        strlength(++str);
    }
    return a;
}
int main()
{
    int num; char k[100];
    printf("ENTER THE STRING HERE:\n");
    gets(k);
    num=strlength(k);
    printf("length of given string is %d",num);
    return 0;
}