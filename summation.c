#include<stdio.h>

int main(void){
    float a, b, c, sum;
    printf("please provide the two numers:\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("a=%f, b=%f, c=%f", a, b, c);
    sum = a+b+c;
    printf("the summation of the two numers is: sum=%f ", sum);
    return 0;
}