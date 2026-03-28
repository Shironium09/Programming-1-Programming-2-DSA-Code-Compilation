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

int partition(int *arr, int low, int high){

    int pivot = arr[(low+high)/2], i = low-1, j = high+1;

    while(1){

        for(; i < high && arr[++i] < pivot;){}
        for(; j > low && arr[--j] > pivot;){}

        if(i >= j){return j;};

        swap(&arr[i], &arr[j]);

    }
    
}

void quick_sort(int *arr, int low, int high){
    
    if(low < high){

        int pivot = partition(arr, low, high);

        quick_sort(arr, low, pivot);
        quick_sort(arr, pivot+1, high);

    }

}

int main(){

    int arr[] = {9, 6, 3, 5, 2, 7, 32, 54, 12};

    printf("Original Array:\t");
    print_arr(arr, 9);

    quick_sort(arr, 0, 8);

    printf("Sorted Array:\t");
    print_arr(arr, 9);    

return 0;
}