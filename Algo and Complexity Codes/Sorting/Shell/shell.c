#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int size){

    for(int i = 0; i < size; i++){

        printf("%d ", arr[i]);

    }

printf("\n");
}

void shell_sort(int *arr, int size){
    
    for(int gap = size/2; gap >= 1; gap/=2){

        for(int i = gap; i < size; i++){

            int temp = arr[i];
            int j = i;

            for(; j >= gap && arr[j-gap] > temp; j -= gap){

                arr[j] = arr[j-gap];

            }

            arr[j] = temp;

        }

    }

}

int main(){

    int arr[] = {9, 6, 3, 5, 2, 7, 32, 54, 12};

    printf("Original Array:\t");
    print_arr(arr, 9);

    shell_sort(arr, 9);

    printf("Sorted Array:\t");
    print_arr(arr, 9);    

return 0;
}