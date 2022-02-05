//Programm name: Write a C program to calculate the sum of first 100th odd numbers.

#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i+=2)
    {
        sum = sum+i;
    }
    printf("The sum of the first 100th odd numbers is = %d\n",sum);
    return 0;
}
