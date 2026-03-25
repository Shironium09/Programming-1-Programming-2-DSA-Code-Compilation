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

void comb_sort(int *arr, int size){
    
    int gap = size;
    float shrink = 1.3;
    int swapped = 1;

    while(gap > 1 || swapped){

        gap = (int)(gap/shrink);

        if(gap < 1){

            gap = 1;

        }

        swapped = 0;

        for(int i = 0; i + gap < size; i++){

            if(arr[i] > arr[i+gap]){

                swap(&arr[i], &arr[i+gap]);
                swapped = 1;

            }

        }

    }

}

int main(){

    int arr[] = {9, 6, 3, 5, 2, 7, 32, 54, 12};

    printf("Original Array:\t");
    print_arr(arr, 9);

    comb_sort(arr, 9);

    printf("Sorted Array:\t");
    print_arr(arr, 9);    

return 0;
}