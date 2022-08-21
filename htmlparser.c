#include<stdio.h>
#include<conio.h>
#include<string.h>
void parser(char* string)
{
  int len=strlen(string);
  int i;int flag=0;int a=0;int k; int len2;int l=0;int y=0;
  for(i=0;i<len;i++)
  {
      if(string[i]=='<')
      {
        flag=1;
        continue;
      }
     else if(string[i]=='>')
      {
        flag=0;
        continue;
      }
      if(flag==0)
      {
        string[a]=string[i];
        a++;
      }
  }
  string[a]='\0';
while(string[strlen(string)-1]==' ')  
  {
      string[strlen(string)-1]='\0';
  }
  for(int j=0;j<strlen(string);j++)
  {
    if(string[j]!=' ')
    {
      l++;
    }
    if(l!=0)
    {
      string[y]=string[j];
      y++;
    }
  }
 string[y]='\0';
}
int main()
{
    char string[]="<html>     hello my name is bhavya      </html>";
    parser(string);
    printf("the parsed string is %s",string);
    return 0;
}