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

void insertion_sort(int *arr, int size){
    
    for(int i = 1; i < size; i++){

        int current = arr[i];
        int j = i;

        for(; j > 0 && arr[j-1] > current; j--){

            arr[j] = arr[j-1];

        }

        arr[j] = current;

    }

}

int main(){

    int arr[] = {9, 6, 3, 5, 2, 7, 32, 54, 12};

    printf("Original Array:\t");
    print_arr(arr, 9);

    insertion_sort(arr, 9);

    printf("Sorted Array:\t");
    print_arr(arr, 9);    

return 0;
}