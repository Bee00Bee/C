#include <stdio.h>

long fibonnaci(int n){
    int f1=0, fn_1=1, fn_2=1, fn; /*initial values of the first three numbers in the series*/
    int i;
    printf("%d, %d, %d, ", f1, fn_1, fn_2);
    for (i=0; i<n; i++){
        fn=fn_1+fn_2; /*the new number is the addition of the last two numbers*/
        printf("%d, ", fn);
        fn_2=fn_1; /*the second last value get the last value*/
        fn_1=fn; /*the last value gets has the new value */
        }
    return 0;

}


int main(){
    int n;
    scanf("%d", &n);
    printf("%ld", fibonnaci(n));
}