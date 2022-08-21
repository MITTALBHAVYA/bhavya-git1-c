#include<stdio.h>
#include<string.h>
int main()
{
    printf("ENTER THEN STRING HERE\n");
    char str[20];
    scanf("%s",str);
    printf("REVERSE STRING %s",strrev(str));
    return 0;
}