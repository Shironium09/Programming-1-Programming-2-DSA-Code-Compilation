//This code describes the version 3 of array implementation which is a struct pointing to an array

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct LIST{

    int *ptr;
    int count;
    int max;

}LIST;

void initList(LIST *);
void display(LIST);

int main(){

    LIST L;

    initList(&L);

    L.ptr[0] = 'u';
    L.ptr[1] = 's';
    L.ptr[2] = 'c';
    L.count = 3;

    display(L);

    free(L.ptr);

return 0;
}

void initList(LIST *L){

    L->ptr = malloc(sizeof(int)*MAX);
    L->count = 0;
    L->max = MAX;

}

void display(LIST L){

    printf("Array has %d elements:\n", L.count);
    for(int i = 0; i < L.count; i++){
        printf("%c ", L.ptr[i]);
    }

}