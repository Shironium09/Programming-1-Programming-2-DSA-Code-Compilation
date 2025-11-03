<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 0xff

typedef struct{

    int elem[SIZE];
    int count;

}maxHeap, minHeap;


void initMax(maxHeap*h){

    int elem[] = {25, 70, 15, 90, 10, 40, 50, 5, 60};
    h->count = -1;

    for(int i = 0 ; i < 9; i++){

        h->elem[++(h->count)] = elem[i];

    }

}

void display(maxHeap list){

    printf("\nMax Heap structure (Parent -> Children):\n");
    for (int i = 0; i <= list.count; i++) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        printf("Parent: %d\t", list.elem[i]);

        if (left <= list.count)
            printf(" | Left Child: %d\t", list.elem[left]);
        else
            printf(" | Left Child: None\t");

        if (right <= list.count)
            printf(" | Right Child: %d\t", list.elem[right]);
        else
            printf(" | Right Child: None\t");

        printf("\n");
    }

    printf("\nArray Style: ");
    for(int i = 0; i <= list.count; i++){
        printf("%d ", list.elem[i]);
    }

}

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

void MaxSubheapify(maxHeap *h, int subIndex){

    int index = subIndex;
    int leftChild = index*2+1, rightChild = index*2+2;
    
    int isHeap = 0;

    while(isHeap == 0 && (leftChild <= h->count || rightChild <= h->count)){

        int biggestIndex = index;

        if(leftChild <= h->count && h->elem[biggestIndex] < h->elem[leftChild]){

            biggestIndex = leftChild;

        }

        if(rightChild <= h->count && h->elem[biggestIndex] < h->elem[rightChild]){

            biggestIndex = rightChild;

        }

        if(biggestIndex != index){

            swap(&(h->elem[biggestIndex]), &h->elem[index]);
            index = biggestIndex;
            leftChild = biggestIndex*2+1;
            rightChild = biggestIndex*2+2;

        }else{

            isHeap = 1;

        }

    }

}

void maxHeapifyTree(maxHeap *h){

    for(int i = (h->count-1)/2; i >= 0; i--){

        MaxSubheapify(h, i);

    }

}

void heapSort(maxHeap *h){

    maxHeapifyTree(h);

    int origLast = h->count;

    for(int i = origLast; i > 0; i--){

        swap(&(h->elem[0]), &(h->elem[i]));
        h->count = i-1;
        MaxSubheapify(h, 0);

    }

    h->count = origLast;

}

int main(){

    maxHeap maxList;
    initMax(&maxList);

    heapSort(&maxList);

    for(int i = 0; i <= maxList.count; i++){

        printf("%d ", maxList.elem[i]);

    }

return 0;
=======
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 0xff

typedef struct{

    int elem[SIZE];
    int count;

}maxHeap, minHeap;


void initMax(maxHeap*h){

    int elem[] = {25, 70, 15, 90, 10, 40, 50, 5, 60};
    h->count = -1;

    for(int i = 0 ; i < 9; i++){

        h->elem[++(h->count)] = elem[i];

    }

}

void display(maxHeap list){

    printf("\nMax Heap structure (Parent -> Children):\n");
    for (int i = 0; i <= list.count; i++) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        printf("Parent: %d\t", list.elem[i]);

        if (left <= list.count)
            printf(" | Left Child: %d\t", list.elem[left]);
        else
            printf(" | Left Child: None\t");

        if (right <= list.count)
            printf(" | Right Child: %d\t", list.elem[right]);
        else
            printf(" | Right Child: None\t");

        printf("\n");
    }

    printf("\nArray Style: ");
    for(int i = 0; i <= list.count; i++){
        printf("%d ", list.elem[i]);
    }

}

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

void MaxSubheapify(maxHeap *h, int subIndex){

    int index = subIndex;
    int leftChild = index*2+1, rightChild = index*2+2;
    
    int isHeap = 0;

    while(isHeap == 0 && (leftChild <= h->count || rightChild <= h->count)){

        int biggestIndex = index;

        if(leftChild <= h->count && h->elem[biggestIndex] < h->elem[leftChild]){

            biggestIndex = leftChild;

        }

        if(rightChild <= h->count && h->elem[biggestIndex] < h->elem[rightChild]){

            biggestIndex = rightChild;

        }

        if(biggestIndex != index){

            swap(&(h->elem[biggestIndex]), &h->elem[index]);
            index = biggestIndex;
            leftChild = biggestIndex*2+1;
            rightChild = biggestIndex*2+2;

        }else{

            isHeap = 1;

        }

    }

}

void maxHeapifyTree(maxHeap *h){

    for(int i = (h->count-1)/2; i >= 0; i--){

        MaxSubheapify(h, i);

    }

}

void heapSort(maxHeap *h){

    maxHeapifyTree(h);

    int origLast = h->count;

    for(int i = origLast; i > 0; i--){

        swap(&(h->elem[0]), &(h->elem[i]));
        h->count = i-1;
        MaxSubheapify(h, 0);

    }

    h->count = origLast;

}

int main(){

    maxHeap maxList;
    initMax(&maxList);

    heapSort(&maxList);

    for(int i = 0; i <= maxList.count; i++){

        printf("%d ", maxList.elem[i]);

    }

return 0;
>>>>>>> 6a04a8a854b4f3e5e53f913981e85f592ab166cd
}