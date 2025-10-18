//This code shows the different operations in an array

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 10

typedef struct{
    
    char elem[SIZE];
    int count;
    
}charList;

void initList(charList*);
void delete(charList*, char);
void deleteAllOccur(charList*, char);
bool findElem(charList, char);
void insertUniqueLast(charList*, char);
void insertSorted(charList*, char);

int main(){
    
    charList L = {{'b', 'c', 'd'}, 3};
    // charList L;
    
    // delete(&L, 's');
    
    // deleteAllOccur(&L, 'u');

    // insertUniqueLast(&L, 'a');
    
    insertSorted(&L, 'a');

    printf("%s", L.elem);

    // printf((!findElem(L, 'z'))  ?   "Element not found" :
    //                                 "Element found");
    
return 0;
}

void delete(charList *L, char elem){
    
    int i;
    for(i = 0; i < L->count && L->elem[i] != elem; i++){}
    if(i < L->count){
        for(;i < L->count; i++){
            L->elem[i] = L->elem[i+1];
        }
        L->count--;
    }
    
}

void deleteAllOccur(charList*L, char elem){
 
 for(int x = 0; x < L->count;){

    if(L->elem[x] == elem){

        for(int y = x; y < L->count; y++){

            L->elem[y] = L->elem[y+1];

        }
    
    L->count--;
    }
    else{x++;}

}
    
}

bool findElem(charList L, char elem){

    int x;
    for(x = 0; x < L.count && L.elem[x] != elem; x++){}
    return (x < L.count) ? true : false;

}

void insertUniqueLast(charList* L, char elem){

int index;
for(index = 0; index < L->count && L->elem[index] != elem; index++){}
if(index == L->count){

    L->elem[index] = elem;
    L->count++;

}else{
    
    printf("Element already exists\n");

}

}

void insertSorted(charList*L, char elem){

int index;
for(index = 0; index < L->count && L->elem[index] < elem; index++){}
L->count++;
for(int trav = L->count; trav > index; trav--){

    L->elem[trav] = L->elem[trav-1];

}
L->elem[index] = elem;

}