// Write a program in C to find the square of any number using the function.

#include<stdio.h>
int square_num(int num);
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("square of %d is %d",n,square_num(n));
    return 0;
}


int  square_num(int num){
 return num*num;
}