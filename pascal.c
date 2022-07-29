// Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int fact(int n)
{
    int f = 1;
    while (n)
        f *= n--;
    return f;
}

int combi(int n,int r){
 return fact(n)/(fact(r)*fact(n-r));
}

void pascal_num(int n){
    for(int i = 0;i<n;i++){
         for(int j = 0;j<=i;j++){
            printf("%d ",combi(i,j));
         }
         printf("\n");
    }
}

int main(){
    pascal_num(5);
    return 0;
}