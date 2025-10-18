/* Practice Activity by doing Heap Sort by Insert All */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 0xFF

typedef struct {
   int elem[SIZE];
   int count;
}maxHeap, minHeap;

void display(minHeap list){

    printf("\nMin Heap structure (Parent -> Children):\n");
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

void initHeap(minHeap *h){

    h->count = -1;

}

void initMinHeap(minHeap *h){

    int elem[] = {25, 70, 15, 90, 10, 40, 50, 5, 60};
    h->count = -1;

    for(int i = 0 ; i < 9; i++){

        h->elem[++(h->count)] = elem[i];

    }

}

void insertMinHeap(minHeap *h, int newElem){

    h->elem[++(h->count)] = newElem;

    for(int i = h->count; h->elem[i] < h->elem[(i-1)/2]; i = (i-1)/2){

        int parentIdx = (i-1)/2;
        int temp = h->elem[i];
        h->elem[i] = h->elem[parentIdx];
        h->elem[parentIdx] = temp; 

    }

}

void insertAllMinHeap(minHeap *h){

    minHeap temp;
    initHeap(&temp);

    for(int i = 0; i <= h->count; i++){

        insertMinHeap(&temp, h->elem[i]);

    }

    *h = temp;
    // display(*h);

}

int deleteMin(minHeap *h){

    int toReturn = -1, parentIdx, childIdx, temp;

    if(h->count != -1){

        toReturn = h->elem[0];
        h->elem[0] = h->elem[(h->count)--];
        
        for(parentIdx = 0, childIdx = 1;childIdx <= h->count;){

            if(childIdx <= h->count && h->elem[childIdx] > h->elem[childIdx+1]){
                childIdx++;
            }

            if(h->elem[parentIdx] > h->elem[childIdx]){

                temp = h->elem[parentIdx];
                h->elem[parentIdx] = h->elem[childIdx];
                h->elem[childIdx] = temp;
                parentIdx = childIdx;
                childIdx = parentIdx*2+1;

            }

        }

    }

return toReturn;
}

void heapSort(minHeap *h){

    insertAllMinHeap(h);

    display(*h);

    int origIdx = h->count;
    
    while(h->count != 0){

        h->elem[(h->count)] = deleteMin(h);

    }

    h->count = origIdx;

}

int main(){

    minHeap list;

    initMinHeap(&list);    
    heapSort(&list);

    printf("\n\n");

    for(int i = 0; i < list.count; i++){

        printf("%d ", list.elem[i]);

    }

}