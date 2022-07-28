// Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>

int next_prime(int);

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    printf("next prime number is %d", next_prime(num + 1));
    return 0;
}

int next_prime(int num)
{
    int i;
    while (1)
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }

        if (i == (num / 2) + 1)
        {
            return num;
        }
        else
        {
            num++;
        }
    }
}