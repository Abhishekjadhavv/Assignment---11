// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
// function.

#include <stdio.h>

int fact(int n)
{
    int f = 1;
    while (n)
        f *= n--;
    return f;
}

void sum_of_series1(int n){
  int sum = 0;
  for(int i = 1;i<=n;i++){
   sum+=fact(i)/i;
  }
  printf("%d",sum);
}
int main()
{
    sum_of_series1(4);
}