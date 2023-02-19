#include<stdio.h>


long factorial(int n){
    if (n==1){
        return n;
    }
    else{
        return(factorial(n-1)*n);
        }
    return 0;
}

int main(){
    int n;
    printf("What is your number: ");
    scanf("%d", &n);
    printf("The factorial of number %d is %ld\n\n", n, factorial(n));
    return 0;
}
