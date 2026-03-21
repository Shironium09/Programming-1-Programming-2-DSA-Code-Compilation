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

void selection_sort(int *arr, int size){
    
    for(int i = 0; i < size; i++){
    
        int smallest = i;

        for(int j = i; j < size; j++){

            if(arr[j] < arr[smallest]){

                smallest = j;

            }

        }

        if(i != smallest){

            swap(&arr[i], &arr[smallest]);

        }

    }

}

int main(){

    int arr[] = {9, 6, 3, 5, 2, 7, 32, 54, 12};

    printf("Original Array: ");
    print_arr(arr, 9);

    selection_sort(arr, 9);

    printf("Sorted Array:\t");
    print_arr(arr, 9);    

return 0;
}