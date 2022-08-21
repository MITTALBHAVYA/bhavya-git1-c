#include<stdio.h>
int main()
{
    FILE* file;
    char str;
    if(file=fopen("donna.txt","w"))
    {
       if(fputc('hhjhj',file)>=0)
       {
           printf("done");
       }
       // printf("%c",fgetc(str,file));
      /*  while((str=fgetc(file))!=EOF)
        {
            printf("%c",str);
        }*/
    }
    fclose(file);
    return 0;
}