#include<stdio.h>
#include<conio.h>
#include<math.h>
/*calculations are daily part of life, and as a bharitya my philosophy is that 
math is a part of yoga..specificaly dhayana and sadhna yoga*/
void main()
{
    int a,b,sum,div,dif,mul,c;
    printf("enter two number here ");
    scanf("%d %d",&a,&b);
    printf("number assign to function\n 1.add\n 2.minus \n 3.multiply \n 4.divide  \n ");
    scanf("%d",&sum);
    switch (sum)
    {
    case 1/* constant-expression */:
        /* code */c=a+b;
        break;
        case 2: c=a-b;
        break;
        case 3: c=a*b;
        break;
        case 4: c=a/b;
        break;
    
    default:
    printf("invalid arithmetic operator");
        break;
    }
    printf("required answer %d",c);
}