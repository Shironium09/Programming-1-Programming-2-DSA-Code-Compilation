#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int size){

    for(int i = 0; i < size; i++){

        printf("%d ", arr[i]);

    }

printf("\n");
}

int find_largest(int *arr, int size){

    int largest = arr[0];

    for(int i = 1; i < size; i++){

        if(arr[i] > largest){

            largest = arr[i];

        }

    }

return largest;
}

int* counting_sort(int *arr, int size){
    
    int largest = find_largest(arr, size);

    int *count = (int*)calloc(largest+1, sizeof(int));
    int *output = (int*)malloc(sizeof(int)*size);

    for(int i = 0; i < size; i++){

        //arr[i] == the value (for "hashing")
        count[arr[i]]++;

    }

    for(int i = 1; i <= largest; i++){

        count[i] += count[i-1];

    }

    for(int i = size-1; i >= 0; i--){

        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;

    }

return output;
}

int main(){

    int arr[] = {9, 6, 3, 5, 2, 7, 32, 54, 12};

    printf("Original Array:\t");
    print_arr(arr, 9);

    int* sorted_arr = counting_sort(arr, 9);

    printf("Sorted Array:\t");
    print_arr(sorted_arr, 9);    

return 0;
}