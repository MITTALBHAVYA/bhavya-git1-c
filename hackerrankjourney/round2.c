#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char *s;
    int i,k,a=0;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(*(s+i)==" ")
        {
            for(k=a;k<i;k++)
            {
                printf("%c",*(s+a));
            }
            a=i+1;
        }
    }
    //Write your logic to print the tokens of the sentence here.
    return 0;
}