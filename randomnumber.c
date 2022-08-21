#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    printf("The random number between 0 to 100 is %d\n",rand()%3);
    return 0;
}