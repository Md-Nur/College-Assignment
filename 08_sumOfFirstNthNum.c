//Programm name: write a C program to calculate the sum of first n natural numbers.

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum+i;
    }
    printf("The sum of the %dth natural number is = %d\n",n,sum);
    return 0;
}
