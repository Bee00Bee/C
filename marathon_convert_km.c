#include<stdio.h>

/*The given distance is in mile and this program converts it into km*/

int main(void)
{
    double miles, yards, kilometer;
    printf("please give the distance in miles and yards\n");
    scanf("%lf, %lf", &miles, &yards);
    kilometer = 1.609*(miles+yards/1760.0);
    printf("here is the distance in kilometers: %lf \n\n", kilometer);
    return 0;
}