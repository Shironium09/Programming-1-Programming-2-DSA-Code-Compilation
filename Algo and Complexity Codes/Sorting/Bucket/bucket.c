#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Bucket{

    int *bucket_arr;
    int bucket_size;

}Bucket;

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

Bucket *initBucket(int size){

    Bucket *buckets = (Bucket*)malloc(sizeof(Bucket)*size);

    for(int i = 0; i < size; i++){

        buckets[i].bucket_arr = malloc(sizeof(int)*size);
        buckets[i].bucket_size = 0;

    }

return buckets;
}

int get_max(int *arr, int size){

    int largest = arr[0];

    for(int i = 1; i < size; i++){

        if(arr[i] > largest){

            largest = arr[i];

        }

    }

return largest;
}

int get_min(int *arr, int size){

    int smallest = arr[0];

    for(int i = 1; i < size; i++){

        if(arr[i] < smallest){

            smallest = arr[i];

        }

    }

return smallest;
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

void bucket_sort(int *arr, int size){
    
    Bucket *buckets = initBucket(size);

    int max = get_max(arr, size);
    int min = get_min(arr, size);

    if(max == min){

        return;

    }

    for(int i = 0; i < size; i++){

        int index = floor(((arr[i]-min)*(size-1))/(max-min));
        buckets[index].bucket_arr[buckets[index].bucket_size++] = arr[i];

    }

    for(int i = 0; i < size; i++){

        insertion_sort(buckets[i].bucket_arr, buckets[i].bucket_size);

    }

    int k = 0;
    for(int i = 0; i < size; i++){

        for(int j = 0; j < buckets[i].bucket_size; j++){

            arr[k++] = buckets[i].bucket_arr[j];

        }

    }

}

int main(){

    int arr[] = {9, 6, 3, 5, 2, 7, 32, 54, 12};

    printf("Original Array:\t");
    print_arr(arr, 9);

    bucket_sort(arr, 9);

    printf("Sorted Array:\t");
    print_arr(arr, 9);    

return 0;
}