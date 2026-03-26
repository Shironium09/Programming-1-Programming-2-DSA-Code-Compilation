#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int size){

    for(int i = 0; i < size; i++){

        printf("%d ", arr[i]);

    }

printf("\n");
}

void merge(int *arr, int left, int mid, int right){

    int left_size = mid - left + 1;
    int right_size = right - mid;

    int *left_arr = (int*)malloc(sizeof(int)*left_size);
    int *right_arr = (int*)malloc(sizeof(int)*right_size);

    for(int i = 0; i < left_size; i++){

        left_arr[i] = arr[left + i];

    }

    for(int i = 0; i < right_size; i++){

        right_arr[i] = arr[(mid + 1) + i];

    }

    int l = 0, r = 0, start = left;

    while(l < left_size && r < right_size){

        if(left_arr[l] <= right_arr[r]){

            arr[start] = left_arr[l++];

        }else{

            arr[start] = right_arr[r++];

        }

        start++;

    }

    while(l < left_size){

        arr[start++] = left_arr[l++];

    }

    while(r < right_size){

        arr[start++] = right_arr[r++];

    }

    free(left_arr);
    free(right_arr);

}

void merge_sort(int *arr, int left, int right){
    
    if(left < right){

        int middle = (left + right) / 2;

        merge_sort(arr, left, middle);
        merge_sort(arr, middle + 1, right);

        merge(arr, left, middle, right);

    }

}

int main(){

    int arr[] = {9, 6, 3, 5, 2, 7, 32, 54, 12};

    printf("Original Array:\t");
    print_arr(arr, 9);

    //merge_sort(arr, first index, last index);
    merge_sort(arr, 0, 8);

    printf("Sorted Array:\t");
    print_arr(arr, 9);    

return 0;
}