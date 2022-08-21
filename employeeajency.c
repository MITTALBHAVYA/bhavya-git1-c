#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int chars,i=0;
    char* ptr;
    char a,b,n;
    printf("ENTER NUMBER OF ENTRIES\n");
    scanf("%d",&n);
    while(i<n)
    {
        printf("employee %d:enter the number of character in your employee id",i+1);
        scanf("%d",&char);
        //getchar();
        ptr=(char *)malloc((chars+1)*sizeof(char));
        printf("enter your employee ID\n");
        scanf("%s",ptr);
        printf("your employee id is %s",ptr);
        free(ptr);
        i++;
    }
}