// Write a function to check whether a given number is Prime or not. (TSRS)

#include <stdio.h>

int isPrime(int);

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    if (isPrime(num))
    {
        printf("%d number is prime\n",num);
    }
    else
    {
        printf("%d number is not prime\n",num);
    }

    return 0;
}

int isPrime(int num)
{
    int j;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}