#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int size){

    for(int i = 0; i < size; i++){

        printf("%d ", arr[i]);

    }

printf("\n");
}

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

void bubble_sort(int *arr, int size){
    
    for(int i = 0; i < size-1; i++){

        for(int j = 0; j < size-1-i; j++){

            if(arr[j] > arr[j+1]){

                swap(&arr[j], &arr[j+1]);

            }

        }

    }

}

int main(){

    int arr[] = {9, 6, 3, 5, 2, 7, 32, 54, 12};

    printf("Original Array:\t");
    print_arr(arr, 9);

    bubble_sort(arr, 9);

    printf("Sorted Array:\t");
    print_arr(arr, 9);    

return 0;
}