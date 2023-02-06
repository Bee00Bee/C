#include<stdio.h>

int main(void){
    int a=5, b=7, c=6;
    double average=0.0;
    printf("a= %d, b= %d, c= %d", a, b, c);
    average = (a+b+c)/3;
    printf("\n\naverage= %lf\n\n", average);
    return (0);
}