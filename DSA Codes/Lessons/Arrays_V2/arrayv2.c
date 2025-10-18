//This code describes the version 2 of array implementation which is pointing to a struct

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

typedef struct LIST{

    char elem[MAX];
    int count;

}LIST;

void initList(LIST *);
void display(LIST *);
void insert(LIST *, char, int);
void delete(LIST*, char);
int locate(LIST*, char);
void sort(LIST*);

int main(){

    LIST *L;
    initList(L);
    L->elem[0] = 'z';
    L->elem[1] = 'x';
    L->elem[2] = 'c';
    L->count = 3;
    
    insert(L, 'g', 4);

    display(L);

    sort(L);

    display(L);

    // printf("\n%d", locate(L, 'a'));

    free(L);

return 0;
}

void initList(LIST *L){

    L  = malloc(sizeof(struct LIST));
    L->count = 0;

}

void display(LIST *L){

    printf("Array has %d elements:\n", L->count);
    for(int i = 0; i < L->count; i++){
        printf("%c ", L->elem[i]);
    }

printf("\n");
}

void insert(LIST *L, char elem, int pos){

    if(pos < L->count){
        for(int index = L->count; index > pos; index--){
            L->elem[index] = L->elem[index-1];
        }
        L->elem[pos] = elem; 
    }
    else if(pos == L->count){
        L->elem[pos] = elem;
    }

    L->count++;
    
}

void delete(LIST*L, char elem){

    int index;
    for(index = 0; index < L->count && L->elem[index] != elem; index++){}
    if(index < L->count){
        for(;index < L->count; index++){
            L->elem[index] = L->elem[index-1];
        }
        L->count--;
    }

}

int locate(LIST *L, char elem){

    int index;
    for(index = 0; index < L->count && L->elem[index] != elem;index++){}
    return (index < L->count) ? index : -1;

}

void sort(LIST*L){

    int tempCount = L->count;
    tempCount--;
    for(int i = 0; i < tempCount; i++){

        for(int k = 0; k < tempCount; k++){

            if(L->elem[k] > L->elem[k+1]){

                char temp = L->elem[k];
                L->elem[k] = L->elem[k+1];
                L->elem[k+1] = temp;

            }

        }

    }

}