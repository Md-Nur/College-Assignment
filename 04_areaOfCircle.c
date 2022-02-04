//Programm name: write a programm using C programing Language to calculate area of a circle

#include <stdio.h>

int main()
{
    double radius, area;
    printf("Enter radius of a circle: ");
    scanf("%lf", &radius);
    area = 3.14 * radius * radius;
    printf("Area of a circle is %lf\n", area);
    return 0;
}

