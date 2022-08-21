#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
/*vowels are a,e,i,o,u and consonants are the left ones*/
void
main ()
{
  char ch,sch;
  printf ("ENTER THE CHARACTER HERE \n");
  scanf ("%c", &sch);
  ch=tolower(sch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  {
      printf("GIVEN CHARACTER IS VOWEL");
  }
  else
  {
      printf("GIVEN CHARACTER IS CONSONANT");
  }
getch();
}