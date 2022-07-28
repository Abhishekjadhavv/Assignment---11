// Write a function to print first N prime numbers (TSRN)

#include <stdio.h>

void prime_num(int);

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    prime_num(num);
    return 0;
}

void prime_num(int num)
{
    int i = 2, j;
    while (num)
    {

        for (j = 2; j <= i / 2; j++)
        {
            if(i%j==0)
             break;
        }

        if(j==(i/2)+1){
          printf("%d ",i);
          num--;
        }

        i++;
    }
}