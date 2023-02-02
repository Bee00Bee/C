#include<stdio.h>
#define PI 3.14

int main()
{
    double area, radius;
    printf("give the radius of circle:\n");
    scanf("%lf", &radius);
    area = PI*radius*radius;
    printf("The surface are of the circle with %f radius is: %f", radius, area);
    return 0;
}