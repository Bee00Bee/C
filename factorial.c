#include <stdio.h>

long factorial(int n)
{
    long f=1;
    int i;

    for (i=1; i<=n; i++)
    {
        f=f*i;
    }
    printf("\n\nThe factorial of %d is %ld\n\n", n, f);
    return 0;
}

int main(){
    int n;
    printf("Please provide the number: ");
    scanf("%d", &n);
    printf("Caluclate the factorial of %d", n);
    factorial(n);
}