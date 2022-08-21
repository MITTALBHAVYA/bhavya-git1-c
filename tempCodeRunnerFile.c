#include<stdio.h>



int main() 
{

    int n,i,j;
    scanf("%d", &n);
    int size=(2*n-1),mat[size][size],a=0,b=size-1;
    
    while(n!=0){
        for(i=a;i<=b;i++){
            for(j=a;j<=b;j++){
                if(i==a || i== b || j==a || j==b){
                    mat[i][j]=n;
                }
            }
        }
        --n;
        ++a;
        --b;
    }
    
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
          printf("%d ",mat[i][j]);  
        }
        printf("\n");
    }
      // Complete the code to print the pattern.
    return 0;
}
