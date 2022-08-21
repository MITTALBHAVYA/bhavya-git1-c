#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
//types of dangling pointers 
/*1.free dynamic allocation memory
2.limitation of value of function
3.limitaion of value of block(or scope) */
int *functiondangling()
{
   int sum,a,b;
   a=56;
   b=65;
   sum=a+b;
   return &sum;
}
int main()
{
    int a=78; int *dptr;
    int *ptr=(int*)malloc(7*sizeof(int));
    ptr[0]=1;
    ptr[1]=23;
    ptr[2]=45;
    ptr[3]=78;
    ptr[4]=456;      ptr[5]=865;
    free(ptr);
    //ptr is now a dangling pointer

    int *dangptr=functiondangling();
    //second type of dangling pointer

    if(a==78)
    {
        int i=8;
        int j=2;
        int sum=i+j;
        dptr=&sum;
    } 
    //here dptr become a dangling pointer
}
    