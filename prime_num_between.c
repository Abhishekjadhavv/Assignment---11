// Write a function to print all Prime numbers between two given numbers. (TSRN)

#include <stdio.h>
void prime_between_two_num(int num, int num1);
int main()
{
    int a, b;
    printf("Enter two number");
    scanf("%d%d", &a, &b);
    prime_between_two_num(a, b);
    return 0;
}

void prime_between_two_num(int num, int num1)
{
    int j,min,max;
    min = num < num1 ? num : num1;
    max = num > num1 ? num : num1;

    for (int i = min; i <=max; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                break;
        }

        if (j == (i / 2) + 1)
        {
            printf("%d ", i);
        }
    }
}