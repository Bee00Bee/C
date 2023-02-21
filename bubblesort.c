#include <stdio.h>

int swap(int* num1, int* num2){
    int temp=0;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
    }

void bubble_sort (int arr[], int n){
    int i, j;
    for (i=0; i< n-1; i++){
        for (j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                }
            }
        }
    }

void print_array(int arr[], int size){
    int i;
    for (i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int data[] = {3, 1, 4, 6, 5};
    int n=sizeof(data)/sizeof(data[0]);
    bubble_sort(data, n);
    print_array(data, n);
    return 0;

}