#ifndef stacks_v1
#define stacks_v1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{

    int elem;
    struct node *link;

}*List;

typedef struct{

    List top;

}Stack;

void initStack(Stack *S){

    S->top = NULL;

}

void Push(Stack *S, int toAdd){

    List* trav;
    List newNode = (List)malloc(sizeof(struct node));

    if(newNode != NULL){

        newNode->elem = toAdd;
        newNode->link = NULL;

        for(trav = &S->top; *trav != NULL; trav = &(*trav)->link){}

        *trav = newNode;

    }else{

        printf("Allocation of Memory Failed!");

    }

}

void Pop(Stack *S){

    List* trav;

    for(trav = &S->top; (*trav)->link != NULL; trav = &(*trav)->link){

        printf("\n\n%d\n\n", (*trav)->elem);

    }

    List toDel = *trav;

    printf("\n%d\n", toDel->elem);

    (*trav)->link = NULL;
    free(toDel);

}

bool Empty(Stack S){

    return S.top == NULL;

}

void display(Stack S){

    for(; S.top != NULL; S.top = S.top->link){

        printf("%d -> ", S.top->elem);

    }

    printf("NULL\n");

}

#endif