//Programm name: write a c program to find the largest number among three numbers.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>=b&&a>=c)
    {
        printf("%d is the largest number\n",a);
    }
    else if (b>=a&&b>=c)
    {
       printf("%d is the largest number\n",b);
    }
    else
    {
        printf("%d is the largest number\n",c);
    }
    return 0;
}

