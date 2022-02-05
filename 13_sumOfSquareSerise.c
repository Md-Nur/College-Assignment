//Programm name: Write a C program to calculte the value of 1^2 + 2^2 + 3^2 + ... + N^2.

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i*i;
    }
    printf("Sum = %d\n",sum);
    return 0;
}
