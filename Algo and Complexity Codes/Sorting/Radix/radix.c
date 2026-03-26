#include <stdio.h>
#include <stdlib.h>

typedef struct bucket{

    int *bucket_arr;
    int bucket_size;

}Bucket;

void print_arr(int *arr, int size){

    for(int i = 0; i < size; i++){

        printf("%d ", arr[i]);

    }

printf("\n");
}

Bucket *initBucket(int size){

    Bucket *buckets = (Bucket*)malloc(sizeof(Bucket)*10);

    for(int i = 0; i < 10; i++){

        buckets[i].bucket_arr = malloc(sizeof(int)*size);
        buckets[i].bucket_size = 0;

    }

return buckets;
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

void radix_sort(int *arr, int size){
    
    Bucket* bucket = initBucket(10);
    int max = find_largest(arr, size);

    for(int trav = 1; (max/trav) > 0; trav *= 10){

        for(int i = 0; i < size; i++){

            bucket[(arr[i]/trav) % 10].bucket_arr[bucket[(arr[i]/trav) % 10].bucket_size++] = arr[i];

        }

        int k = 0;
        for(int i = 0; i < 10; i++){

            for(int j = 0; j < bucket[i].bucket_size;){

                arr[k++] = bucket[i].bucket_arr[j++];

            }

            bucket[i].bucket_size = 0;

        }

    }
    
    free(bucket);
}

int main(){

    int arr[] = {9, 6, 3, 5, 2, 7, 32, 54, 12};

    printf("Original Array:\t");
    print_arr(arr, 9);

    radix_sort(arr, 9);

    printf("Sorted Array:\t");
    print_arr(arr, 9);    

return 0;
}
