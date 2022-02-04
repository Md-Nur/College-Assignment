//Programm name: write a programm using C programing Language to calculate the sumation and average of two integer numbers.

#include <stdio.h>

int main()
{
    double a, b, sum, avg;
    printf("Enter two integer numbers: ");
    scanf("%lf %lf", &a, &b);
    sum = a + b;
    avg = sum / 2;
    printf("Sumation of %lf and %lf is %lf\n", a, b, sum);
    printf("Average of %lf and %lf is %lf\n", a, b, avg);
    return 0;
}

