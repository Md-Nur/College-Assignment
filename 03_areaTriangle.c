//Programm name: write a programm using C programing Language to calculate area of a triangle
#include <stdio.h>

int main()
{
    double height, base, area;
    printf("Enter height and base of a triangle: ");
    scanf("%lf %lf", &height, &base);
    area = (height * base) / 2;
    printf("Area of a triangle is %lf\n", area);
    
    return 0;
}

