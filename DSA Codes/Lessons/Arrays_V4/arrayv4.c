//This code describes the version 4 of array implementation which is a pointer to a struct which is a pointing to an array

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct LIST{

    int *ptr;
    int count;
    int max;

}LIST;

void initList(LIST*);
void display(LIST*);
void insert(LIST*, char, int);
void delete(LIST*, char);
int locate(LIST*, char);

int main(){

    LIST *L = malloc(sizeof(struct LIST));

    initList(L);

    L->ptr[0] = 'u';
    L->ptr[1] = 's';
    L->ptr[2] = 'c';
    L->count = 3;

    insert(L, 'a', 3);

    display(L);

    delete(L, 's');

    display(L);

    free(L);

return 0;
}

void initList(LIST *L){

    L->ptr = malloc(sizeof(int)*MAX);
    L->count = 0;
    L->max = MAX;

}

void display(LIST *L){

    printf("The array has %d elements:\n", L->count);
    for(int i = 0; i < L->count; i++){
        printf("%c ", L->ptr[i]);
    }

printf("\n");
}

void insert(LIST*L, char elem, int pos){

    if(pos < L->count){
        for(int index = L->count; index > pos; index--){
            L->ptr[index] = L->ptr[index-1];
        }
        L->ptr[pos] = elem;
    }else{
        L->ptr[pos] = elem;
    }

    L->count++;

}

void delete(LIST*L, char elem){

    int index;
    for(index = 0; index < L->count && L->ptr[index] != elem; index++){}
    if(index < L->count){
        for(;index < L->count; index++){
            L->ptr[index] = L->ptr[index+1];
        }
    }

    L->count--;

}



int locate(LIST*, char);