#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
/*calculate length of string*/
int main()
{
    char name[100];/*="bhavya";*/
    int length;
    printf("enter the word\n");
    scanf("%s",name);
    length = strlen(name);

    printf("Length of %s = %d\n",name,length);

    return 0;
}