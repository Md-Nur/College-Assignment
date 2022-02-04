//Programm name: write a programm using C programing Language to calculate centigrade to farenhite conversion.

#include <stdio.h>


int main()
{
    double centigrade, farenhite;
    printf("Enter centigrade: ");
    scanf("%lf", &centigrade);
    farenhite = (centigrade * 9 / 5) + 32;
    printf("Farenhite is %lf\n", farenhite);
    return 0;
}

