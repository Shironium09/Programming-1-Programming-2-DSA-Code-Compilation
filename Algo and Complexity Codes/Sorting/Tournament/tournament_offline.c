#include <stdio.h>
#include <stdlib.h>
#define INF 9999999

void print_arr(int *arr, int size){

    for(int i = 0; i < size; i++){

        printf("%d ", arr[i]);

    }

printf("\n");
}

void create_tournament(int *arr, int *tree, int *indexArr, int size, int treeSize){

    for(int i = 0; i < treeSize; i++){

        if(i < size){

            tree[treeSize - 1 + i] = arr[i];
            indexArr[treeSize - 1 + i] = i;

        }else{

            tree[treeSize - 1 + i] = INF;
            indexArr[treeSize - 1 + i] = -1;

        }

    }

    for(int i = treeSize - 2; i >= 0; i--){

        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if(tree[left] < tree[right]){

            tree[i] = tree[left];
            indexArr[i] = indexArr[left];

        }else{

            tree[i] = tree[right];
            indexArr[i] = indexArr[right];

        }

    }

}

void tournament_sort(int *arr, int size){
    
    int *sorted = (int*)malloc(sizeof(int)*size);

    int treeSize = 1;
    while(treeSize < size){

        treeSize *= 2;

    }

    int *tree = (int*)malloc(sizeof(int)*(2*treeSize-1));
    int *indexArr = (int*)malloc(sizeof(int)*(2*treeSize-1));

    create_tournament(arr, tree, indexArr, size, treeSize);

    for(int i = 0; i < size; i++){

        sorted[i] = tree[0];
        int winIndex = indexArr[0];

        int leaf = treeSize - 1 + winIndex;
        tree[leaf] = INF;

        int curr = leaf;

        while(curr > 0){

            int parent = (curr-1)/2;
            int left = 2 * parent + 1;
            int right = 2 * parent + 2;

            if(tree[left] < tree[right]){

                tree[parent] = tree[left];
                indexArr[parent] = indexArr[left];

            }else{

                tree[parent] = tree[right];
                indexArr[parent] = indexArr[right];

            }

            curr = parent;

        }

    }

    for(int i = 0; i < size; i++){

        arr[i] = sorted[i];

    }


    free(sorted);
    free(tree);
    free(indexArr);

}

int main(){

    int arr[] = {9, 6, 3, 5, 2, 7, 32, 54, 12};

    printf("Original Array:\t");
    print_arr(arr, 9);

    tournament_sort(arr, 9);

    printf("Sorted Array:\t");
    print_arr(arr, 9);    

return 0;
}