#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10

typedef struct node{

    int elem;
    struct node *link;

}*itemptr;

typedef itemptr Dictionary[MAX];

void init(itemptr*);
void insert(itemptr*, int);
void delete(itemptr*, int);
bool member(itemptr*, int);
int hash(int);
void display(itemptr*);

int main(){

    itemptr list;
    init(&list);

    insert(&list, 65);
    insert(&list, 69);
    insert(&list, 87);
    insert(&list, 76);
    insert(&list, 34);
    insert(&list, 77);
    insert(&list, 23);
    insert(&list, 37);
    insert(&list, 89);
    insert(&list, 20);
    insert(&list, 12);
    insert(&list, 2134);
    insert(&list, 6534);
    insert(&list, 18);
    insert(&list, 12576389);

    delete(&list, 76);
    delete(&list, 87);

    display(&list);

    int x = 73;

    printf((member(&list, x)) ? "\n%d is a member\n": "\n%d is not a member\n", x);

return 0;
}

void init(itemptr *L){

    for(int i = 0; i < MAX; i++){

        L[i] = NULL;

    }

}

void insert(itemptr*L, int elem){

    int hashVal = hash(elem);

    itemptr *Lptr;
    itemptr newNode = malloc(sizeof(struct node));
    newNode->elem = elem;
    newNode->link = NULL;
    
    for(Lptr = &L[hashVal]; *Lptr != NULL; Lptr = &(*Lptr)->link){}
    *Lptr = newNode;

}

void delete(itemptr*L, int elem){

    int hashVal = hash(elem);
    itemptr *Lptr;

    for(Lptr = &L[hashVal]; *Lptr != NULL && elem != (*Lptr)->elem; Lptr = &(*Lptr)->link){}

    if(*Lptr != NULL){

        itemptr temp = *Lptr;
        *Lptr = temp->link;
        free(temp);

    }else{

        printf("Element is not found in the Dictionary\n");

    }

}

bool member(itemptr* L, int elem){

    int hashVal = hash(elem);

    itemptr trav;

    for(trav = L[hashVal]; trav != NULL && trav->elem != elem; trav = trav->link){}

return trav != NULL;
}

int hash(int elem){

    int sum = 0;
    while(elem != 0){
        sum += elem % 10;
        elem /= 10;
    }
    
return sum % MAX;
}

void display(itemptr* L){

    for(int i = 0; i < MAX; i++){

        printf("%d: ", i);

        for(itemptr trav = L[i]; trav != NULL; trav = trav->link){

            printf("%d -> ", trav->elem);

        }

        printf("NULL\n");

    }

}