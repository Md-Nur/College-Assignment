//Programm name: write a C program to find out the grate common divisor of two numbers.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    c=a;
    printf("GCD = %d\n",c);
    return 0;
}

