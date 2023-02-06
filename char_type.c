#include<stdio.h>

int main(void){
    char c = 'a';
    printf("c in ASCII is %d\n", c);
    printf("c in character %c\n\n", c);
    printf("three consecutive characters are: %c%c%c\n\n", c, c+1, c+2);
    return 0;
}