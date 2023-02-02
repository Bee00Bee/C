#include<stdio.h>

int main()
{
    double fahrenheit, celsius;
    printf("Give temperature as fahrenheit:\n");
    scanf("%lf", &fahrenheit);
    celsius= (fahrenheit-32)*5/9;
    printf("the fahrenheit: %.2lf temperature in censius is: %.2lf \n\n\n", fahrenheit, celsius);
    return (0);
}