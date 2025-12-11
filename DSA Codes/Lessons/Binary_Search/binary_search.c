#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef int List[MAX];

void initList(List L){

    int temp[] = {2, 3, 7, 9, 10, 13, 15, 20, 27, 28};

    for(int i = 0; i < MAX; i++){

        L[i] = temp[i];

    }

}

int binary_search(List L, int elem){

    int UP, LB, mid, retVal, count = 0;
    for(LB = 0, UP = MAX-1, mid = (UP+LB)/2; L[mid] != elem && UP >= LB;){

        if(elem < L[mid]){

            UP = mid-1;
            mid = (UP+LB)/2;

        }else{

            LB = mid+1;
            mid = (UP+LB)/2;

        }

        printf("Iterations: %d\n", ++count);

    }

    retVal = (UP >= LB) ? mid : -1;

return retVal;  
}

int main(){

    List L;
    initList(L);

    int x = 28;
    int result = binary_search(L, x);

    printf((result == -1) ? "Not found\n" : "Found at index %d\n", result);

return 0;
}