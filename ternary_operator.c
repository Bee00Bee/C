#include <stdio.h>

int main(){
    int speed;
    printf("what is your speed? ");
    scanf("%d", &speed);
    speed = (speed <= 65) ? 65: (speed <= 70) ? (70): (90);
    switch (speed)
    {
        case 65: printf("no speeding ticket\n\n"); break;
        case 70: printf("speeding ticket\n\n"); break;
        case 90: printf("Exceeded speed!\n\n"); break;
        default : printf("incorrect speed\n\n");
    }
    return 0;
}