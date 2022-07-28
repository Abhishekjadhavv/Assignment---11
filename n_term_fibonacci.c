// Write a function to print first N terms of Fibonacci series (TSRN)

#include <stdio.h>
void fibonacci(int);
int main()
{
    int n;

    printf("Enter a number");
    scanf("%d", &n);

    fibonacci(n);
    return 0;
}

void fibonacci(int n)
{
    int a=-1,b=1,c;

    while(n){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
}